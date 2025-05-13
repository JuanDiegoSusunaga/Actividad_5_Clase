#include <iostream>
#include <stdexcept>

double divide(int x, int y)
{
    if (y == 0)
    {
        throw std::invalid_argument("Error: Division by zero is not allowed.");
    }
    return static_cast<double>(x) / y;
}

int main()
{
    try {
        // Prueba de división normal
        double result = divide(10, 2);
        std::cout << "Resultado de 10 / 2 = " << result << std::endl;  // Esperado: 5.0

        // Prueba de división por cero
        result = divide(10, 0);  // Debería lanzar una excepción
    } catch (const std::invalid_argument& e) {
        std::cout << e.what() << std::endl;  // Esperado: "Error: Division by zero is not allowed."
    }

    return 0;
}

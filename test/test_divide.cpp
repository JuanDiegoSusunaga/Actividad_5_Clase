#include <gtest/gtest.h>
#include "div.h"  /

// Test para división con entradas positivas
TEST(DivTest, HandlesPositiveInput)
{
    double result = divide(9, 3);  // Se divide 9 entre 3
    EXPECT_EQ(result, 3.0);  // Esperado: 3.0
}

// Test para división por cero, que debe lanzar una excepción
TEST(DivTest, HandlesZeroInput)
{
    try {
        divide(9, 0);  // Intentamos dividir entre 0
        FAIL() << "Expected std::invalid_argument";  // Si no lanza la excepción, falla la prueba
    } catch (const std::invalid_argument& e) {
        EXPECT_EQ(e.what(), std::string("Error: Division by zero is not allowed."));  // Verifica el mensaje de la excepción
    } catch (...) {
        FAIL() << "Expected std::invalid_argument";  // Si lanza una excepción diferente, falla la prueba
    }
}

// Test para división con números negativos
TEST(DivTest, HandlesNegativeInput)
{
    double result = divide(-9, 3);  // Se divide -9 entre 3
    EXPECT_EQ(result, -3.0);  // Esperado: -3.0
}

// Test para división con el numerador 0
TEST(DivTest, HandlesZeroNumerator)
{
    double result = divide(0, 3);  // Se divide 0 entre 3
    EXPECT_EQ(result, 0.0);  // Esperado: 0.0
}

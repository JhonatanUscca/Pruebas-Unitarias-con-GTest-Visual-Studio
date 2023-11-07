#include "pch.h"

#include "D:\Microsoft visual\triangleTest1\Main\triangulos.h"

class TrianguloTest : public ::testing::Test {
protected:
 
    int ladoA, ladoB, ladoC;
    void SetUp() override {
        // Configura el entorno de pruebas si es necesario
        ladoA = 0;
        ladoB = 0;
        ladoC = 0;
    }

    void TearDown() override {
        // Limpia el entorno de pruebas si es necesario
        // será llamado después de ejecutar cada prueba.
        // Deberías definirlo si hay trabajo de limpieza por hacer. De lo contrario,
        // no es necesario que lo proporciones.
    }
};

TEST_F(TrianguloTest, TestEscaleno) {
    ladoA = 3;
    ladoB = 4;
    ladoC = 5;
    ASSERT_EQ(Triangulo::determinarTipo(ladoA, ladoB, ladoC), "Escaleno");
}

TEST_F(TrianguloTest, TestIsosceles) {
    ladoA = 5;
    ladoB = 5;
    ladoC = 3;
    ASSERT_EQ(Triangulo::determinarTipo(ladoA, ladoB, ladoC), "Isósceles");
}

TEST_F(TrianguloTest, TestEquilatero) {
    ladoA = 6;
    ladoB = 6;
    ladoC = 6;
    ASSERT_EQ(Triangulo::determinarTipo(ladoA, ladoB, ladoC), "Equilátero");
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
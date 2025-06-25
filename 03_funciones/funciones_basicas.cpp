/*
 * FUNCIONES EN C++
 * Tema: Declaración, Definición y Uso de Funciones
 * 
 * Aquí aprenderás sobre:
 * - Declaración y definición de funciones
 * - Parámetros y argumentos
 * - Valores de retorno
 * - Funciones void
 * - Alcance de variables (scope)
 */

#include <iostream>
#include <string>
#include <cmath>  // Para funciones matemáticas
using namespace std;

// DECLARACIONES DE FUNCIONES (PROTOTIPOS)
void saludar();                                    // Función sin parámetros ni retorno
void saludar_persona(string nombre);              // Función con parámetro, sin retorno
int sumar(int a, int b);                          // Función con parámetros y retorno
double calcular_area_circulo(double radio);       // Función que retorna double
bool es_par(int numero);                          // Función que retorna bool
void mostrar_info(string nombre, int edad = 18);  // Función con parámetro por defecto
int factorial(int n);                             // Para demostrar recursión

int main() {
    cout << "=== FUNCIONES EN C++ ===" << endl << endl;
    
    // LLAMADAS A FUNCIONES SIN PARÁMETROS
    cout << "--- FUNCIÓN SIN PARÁMETROS ---" << endl;
    saludar();
    
    // LLAMADAS A FUNCIONES CON PARÁMETROS
    cout << "\n--- FUNCIÓN CON PARÁMETROS ---" << endl;
    saludar_persona("Ana");
    saludar_persona("Carlos");
    
    // FUNCIONES QUE RETORNAN VALORES
    cout << "\n--- FUNCIONES CON RETORNO ---" << endl;
    int resultado = sumar(5, 3);
    cout << "5 + 3 = " << resultado << endl;
    
    // Podemos usar el resultado directamente
    cout << "10 + 7 = " << sumar(10, 7) << endl;
    
    // FUNCIÓN QUE RETORNA DOUBLE
    cout << "\n--- CÁLCULO DE ÁREA ---" << endl;
    double radio = 5.0;
    double area = calcular_area_circulo(radio);
    cout << "El área de un círculo con radio " << radio 
         << " es: " << area << endl;
    
    // FUNCIÓN QUE RETORNA BOOL
    cout << "\n--- VERIFICAR NÚMEROS PARES ---" << endl;
    for (int i = 1; i <= 6; i++) {
        if (es_par(i)) {
            cout << i << " es par" << endl;
        } else {
            cout << i << " es impar" << endl;
        }
    }
    
    // PARÁMETROS POR DEFECTO
    cout << "\n--- PARÁMETROS POR DEFECTO ---" << endl;
    mostrar_info("Juan");           // Usa edad por defecto (18)
    mostrar_info("María", 25);      // Especifica la edad
    
    // FUNCIONES MATEMÁTICAS DE LA BIBLIOTECA ESTÁNDAR
    cout << "\n--- FUNCIONES MATEMÁTICAS ESTÁNDAR ---" << endl;
    double x = 16.0;
    cout << "sqrt(" << x << ") = " << sqrt(x) << endl;
    cout << "pow(2, 3) = " << pow(2, 3) << endl;
    cout << "abs(-5) = " << abs(-5) << endl;
    cout << "ceil(4.3) = " << ceil(4.3) << endl;
    cout << "floor(4.7) = " << floor(4.7) << endl;
    
    // RECURSIÓN
    cout << "\n--- RECURSIÓN ---" << endl;
    int n = 5;
    cout << "Factorial de " << n << " = " << factorial(n) << endl;
    
    return 0;
}

// DEFINICIONES DE FUNCIONES

// Función simple sin parámetros ni retorno
void saludar() {
    cout << "¡Hola! Bienvenido al programa" << endl;
}

// Función con parámetro, sin retorno
void saludar_persona(string nombre) {
    cout << "¡Hola " << nombre << "! ¿Cómo estás?" << endl;
}

// Función con parámetros y retorno
int sumar(int a, int b) {
    int resultado = a + b;
    return resultado;
    // O simplemente: return a + b;
}

// Función que calcula el área de un círculo
double calcular_area_circulo(double radio) {
    const double PI = 3.14159265359;
    return PI * radio * radio;
}

// Función que verifica si un número es par
bool es_par(int numero) {
    return (numero % 2 == 0);
}

// Función con parámetro por defecto
void mostrar_info(string nombre, int edad) {
    cout << "Nombre: " << nombre << ", Edad: " << edad << " años" << endl;
}

// Función recursiva para calcular factorial
int factorial(int n) {
    // Caso base
    if (n <= 1) {
        return 1;
    }
    // Caso recursivo
    return n * factorial(n - 1);
}

/*
 * FUNCIONES - CONCEPTOS CLAVE:
 * 
 * ESTRUCTURA DE UNA FUNCIÓN:
 * tipo_retorno nombre_función(parámetros) {
 *     // cuerpo de la función
 *     return valor; // si no es void
 * }
 * 
 * TIPOS DE FUNCIONES:
 * 1. void: no retorna valor
 * 2. Con retorno: int, double, bool, string, etc.
 * 
 * PARÁMETROS:
 * - Por valor: se copia el valor (cambios no afectan original)
 * - Por defecto: valor usado si no se proporciona argumento
 * 
 * DECLARACIÓN vs DEFINICIÓN:
 * - Declaración (prototipo): dice cómo llamar la función
 * - Definición: contiene el código de la función
 * 
 * ALCANCE (SCOPE):
 * - Variables locales: solo existen dentro de la función
 * - Variables globales: accesibles desde cualquier función
 * 
 * RECURSIÓN:
 * - Función que se llama a sí misma
 * - Debe tener caso base para evitar bucle infinito
 * 
 * BUENAS PRÁCTICAS:
 * - Usa nombres descriptivos
 * - Una función debe hacer una sola cosa
 * - Mantén funciones cortas y legibles
 * - Usa prototipos para organizar el código
 * - Valida parámetros cuando sea necesario
 * - Documenta funciones complejas
 */

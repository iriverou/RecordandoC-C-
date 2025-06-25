/*
 * FUNDAMENTOS BÁSICOS DE C++
 * Tema: Variables y Tipos de Datos
 * 
 * Aquí aprenderás sobre:
 * - Tipos de datos primitivos
 * - Declaración e inicialización de variables
 * - Modificadores de tipo
 * - Constantes
 */

#include <iostream>
#include <string>    // Para usar std::string
#include <climits>   // Para constantes de límites
using namespace std;

int main() {
    cout << "=== TIPOS DE DATOS EN C++ ===" << endl << endl;
    
    // NÚMEROS ENTEROS
    cout << "--- NÚMEROS ENTEROS ---" << endl;
    int edad = 25;
    short año_nacimiento = 1998;
    long poblacion_mundial = 7800000000L;
    long long big_number = 123456789012345LL;
    
    cout << "Edad: " << edad << endl;
    cout << "Año de nacimiento: " << año_nacimiento << endl;
    cout << "Población mundial: " << poblacion_mundial << endl;
    cout << "Número grande: " << big_number << endl;
    
    // NÚMEROS DECIMALES
    cout << "\n--- NÚMEROS DECIMALES ---" << endl;
    float precio = 19.99f;      // 'f' indica que es float
    double pi = 3.14159265359;  // Más precisión que float
    
    cout << "Precio: $" << precio << endl;
    cout << "Pi: " << pi << endl;
    
    // CARACTERES Y BOOLEANOS
    cout << "\n--- CARACTERES Y BOOLEANOS ---" << endl;
    char inicial = 'A';
    bool es_estudiante = true;
    bool tiene_trabajo = false;
    
    cout << "Inicial: " << inicial << endl;
    cout << "Es estudiante: " << es_estudiante << endl;  // 1 = true, 0 = false
    cout << "Tiene trabajo: " << tiene_trabajo << endl;
    
    // STRINGS (CADENAS DE TEXTO)
    cout << "\n--- STRINGS ---" << endl;
    string nombre = "Juan";
    string apellido = "Pérez";
    string nombre_completo = nombre + " " + apellido;  // Concatenación
    
    cout << "Nombre: " << nombre << endl;
    cout << "Apellido: " << apellido << endl;
    cout << "Nombre completo: " << nombre_completo << endl;
    
    // CONSTANTES
    cout << "\n--- CONSTANTES ---" << endl;
    const double GRAVEDAD = 9.81;
    const int DIAS_SEMANA = 7;
    
    cout << "Gravedad: " << GRAVEDAD << " m/s²" << endl;
    cout << "Días de la semana: " << DIAS_SEMANA << endl;
    
    // TAMAÑOS DE TIPOS DE DATOS
    cout << "\n--- TAMAÑOS EN BYTES ---" << endl;
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "float: " << sizeof(float) << " bytes" << endl;
    cout << "double: " << sizeof(double) << " bytes" << endl;
    cout << "char: " << sizeof(char) << " bytes" << endl;
    cout << "bool: " << sizeof(bool) << " bytes" << endl;
    
    // MODIFICADORES SIGNED/UNSIGNED
    cout << "\n--- RANGOS DE VALORES ---" << endl;
    cout << "int máximo: " << INT_MAX << endl;
    cout << "int mínimo: " << INT_MIN << endl;
    
    unsigned int numero_positivo = 4000000000U;
    cout << "Unsigned int: " << numero_positivo << endl;
    
    return 0;
}

/*
 * TIPOS DE DATOS BÁSICOS:
 * 
 * ENTEROS:
 * - int: números enteros (normalmente 4 bytes)
 * - short: enteros cortos (2 bytes)
 * - long: enteros largos (4 u 8 bytes)
 * - long long: enteros muy largos (8 bytes)
 * 
 * DECIMALES:
 * - float: precisión simple (4 bytes, ~7 dígitos)
 * - double: precisión doble (8 bytes, ~15 dígitos)
 * 
 * OTROS:
 * - char: un carácter (1 byte)
 * - bool: verdadero/falso (1 byte)
 * - string: cadena de caracteres (variable)
 * 
 * MODIFICADORES:
 * - signed: puede ser positivo o negativo (por defecto)
 * - unsigned: solo positivo
 * - const: valor no cambia
 * 
 * BUENAS PRÁCTICAS:
 * - Usa nombres descriptivos para variables
 * - Inicializa variables al declararlas
 * - Usa const para valores que no cambian
 * - Usa el tipo de dato apropiado para el rango de valores
 */

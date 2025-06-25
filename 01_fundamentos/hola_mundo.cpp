/*
 * FUNDAMENTOS BÁSICOS DE C++
 * Tema: Hola Mundo y Sintaxis Básica
 * 
 * Este es tu primer programa en C++. Aquí aprenderás:
 * - Estructura básica de un programa
 * - Directivas del preprocesador
 * - Función main()
 * - Salida básica con cout
 */

#include <iostream>  // Incluye la biblioteca de entrada/salida
using namespace std; // Permite usar cout sin std::

int main() {
    // Esta es la función principal - aquí comienza la ejecución
    
    cout << "¡Hola Mundo!" << endl;
    cout << "Bienvenido de vuelta a C++" << endl;
    
    // Diferentes formas de imprimir
    cout << "Línea 1\n";           // \n para nueva línea
    cout << "Línea 2" << endl;     // endl también añade nueva línea y limpia el buffer
    
    // Concatenación de texto
    cout << "Mi nombre es: " << "Programador" << endl;
    
    return 0; // Indica que el programa terminó exitosamente
}

/*
 * PARA COMPILAR Y EJECUTAR:
 * 1. Abre terminal/cmd en esta carpeta
 * 2. Ejecuta: g++ -o hola_mundo hola_mundo.cpp
 * 3. Ejecuta: ./hola_mundo (Linux/Mac) o hola_mundo.exe (Windows)
 * 
 * CONCEPTOS CLAVE:
 * - #include: incluye bibliotecas
 * - using namespace std: evita escribir std:: antes de cout, cin, etc.
 * - int main(): función principal, punto de entrada del programa
 * - cout: objeto para salida estándar (consola)
 * - <<: operador de inserción
 * - endl: manipulador que añade nueva línea y limpia buffer
 * - return 0: indica terminación exitosa
 */

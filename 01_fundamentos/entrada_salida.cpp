/*
 * FUNDAMENTOS BÁSICOS DE C++
 * Tema: Entrada y Salida Básica
 * 
 * Aquí aprenderás sobre:
 * - cin para entrada de datos
 * - cout para salida de datos
 * - Manipuladores de formato
 * - getline() para strings con espacios
 */

#include <iostream>
#include <iomanip>  // Para manipuladores de formato
#include <string>
using namespace std;

int main() {
    cout << "=== ENTRADA Y SALIDA EN C++ ===" << endl << endl;
    
    // ENTRADA BÁSICA CON CIN
    cout << "--- ENTRADA BÁSICA ---" << endl;
    string nombre;
    int edad;
    double altura;
    
    cout << "Ingresa tu nombre (sin espacios): ";
    cin >> nombre;
    
    cout << "Ingresa tu edad: ";
    cin >> edad;
    
    cout << "Ingresa tu altura en metros: ";
    cin >> altura;
    
    cout << "\nHola " << nombre << "!" << endl;
    cout << "Tienes " << edad << " años" << endl;
    cout << "Mides " << altura << " metros" << endl;
    
    // PROBLEMA CON ESPACIOS EN STRINGS
    cout << "\n--- STRINGS CON ESPACIOS ---" << endl;
    
    // Limpiar el buffer antes de getline
    cin.ignore();
    
    string nombre_completo;
    cout << "Ahora ingresa tu nombre completo: ";
    getline(cin, nombre_completo);  // Lee toda la línea, incluyendo espacios
    
    cout << "Tu nombre completo es: " << nombre_completo << endl;
    
    // MÚLTIPLES VARIABLES EN UNA LÍNEA
    cout << "\n--- MÚLTIPLES ENTRADAS ---" << endl;
    int x, y, z;
    cout << "Ingresa tres números separados por espacios: ";
    cin >> x >> y >> z;
    
    cout << "Los números son: " << x << ", " << y << ", " << z << endl;
    cout << "Su suma es: " << (x + y + z) << endl;
    
    // FORMATEO DE SALIDA
    cout << "\n--- FORMATO DE SALIDA ---" << endl;
    
    double pi = 3.14159265359;
    double precio = 1234.56;
    
    cout << "Pi sin formato: " << pi << endl;
    cout << "Pi con 3 decimales: " << fixed << setprecision(3) << pi << endl;
    cout << "Pi con 6 decimales: " << setprecision(6) << pi << endl;
    
    // Resetear formato
    cout << resetiosflags(ios::fixed);
    
    cout << "\nPrecios:" << endl;
    cout << "Precio 1: $" << fixed << setprecision(2) << precio << endl;
    cout << "Precio 2: $" << setprecision(2) << (precio * 1.21) << endl;
    
    // ANCHO DE CAMPO
    cout << "\n--- ANCHO DE CAMPO ---" << endl;
    cout << "Producto" << setw(15) << "Precio" << setw(10) << "Stock" << endl;
    cout << setfill('-') << setw(35) << "" << setfill(' ') << endl;
    cout << "Laptop" << setw(18) << "$999.99" << setw(7) << "15" << endl;
    cout << "Mouse" << setw(19) << "$29.99" << setw(8) << "50" << endl;
    cout << "Teclado" << setw(17) << "$79.99" << setw(8) << "25" << endl;
    
    // MANIPULADORES ESPECIALES
    cout << "\n--- MANIPULADORES ESPECIALES ---" << endl;
    
    int numero = 255;
    cout << "Número en decimal: " << dec << numero << endl;
    cout << "Número en hexadecimal: " << hex << numero << endl;
    cout << "Número en octal: " << oct << numero << endl;
    
    // Volver a decimal
    cout << dec;
    
    // CARACTERES DE ESCAPE
    cout << "\n--- CARACTERES DE ESCAPE ---" << endl;
    cout << "Hola\tMundo" << endl;           // \t = tabulador
    cout << "Línea 1\nLínea 2" << endl;     // \n = nueva línea
    cout << "Comillas: \"Hola\"" << endl;   // \" = comillas
    cout << "Backslash: \\" << endl;        // \\ = backslash
    cout << "Alerta: \a" << endl;           // \a = sonido de alerta
    
    // EJEMPLO PRÁCTICO: CALCULADORA SIMPLE
    cout << "\n--- CALCULADORA SIMPLE ---" << endl;
    double num1, num2;
    char operador;
    
    cout << "Ingresa una operación (ej: 5 + 3): ";
    cin >> num1 >> operador >> num2;
    
    cout << num1 << " " << operador << " " << num2 << " = ";
    
    switch(operador) {
        case '+':
            cout << (num1 + num2) << endl;
            break;
        case '-':
            cout << (num1 - num2) << endl;
            break;
        case '*':
            cout << (num1 * num2) << endl;
            break;
        case '/':
            if(num2 != 0) {
                cout << (num1 / num2) << endl;
            } else {
                cout << "Error: División por cero" << endl;
            }
            break;
        default:
            cout << "Operador no válido" << endl;
    }
    
    return 0;
}

/*
 * ENTRADA Y SALIDA - RESUMEN:
 * 
 * ENTRADA (cin):
 * - cin >> variable: lee hasta espacio/enter
 * - getline(cin, string): lee línea completa
 * - cin.ignore(): limpia buffer
 * 
 * SALIDA (cout):
 * - cout << valor: imprime valor
 * - endl: nueva línea + flush buffer
 * - \n: solo nueva línea
 * 
 * MANIPULADORES DE FORMATO:
 * - setprecision(n): decimales a mostrar
 * - fixed: notación decimal fija
 * - setw(n): ancho mínimo de campo
 * - setfill(c): carácter de relleno
 * - left/right: alineación
 * - hex/oct/dec: base numérica
 * 
 * CARACTERES DE ESCAPE:
 * - \n: nueva línea
 * - \t: tabulador
 * - \": comillas dobles
 * - \\: backslash
 * - \a: alerta (sonido)
 * 
 * BUENAS PRÁCTICAS:
 * - Usa getline() para strings con espacios
 * - Valida entrada del usuario
 * - Usa cin.ignore() después de cin >> antes de getline()
 * - Formatea salida para mejor legibilidad
 */

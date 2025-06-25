/*
 * FUNDAMENTOS BÁSICOS DE C++
 * Tema: Operadores
 * 
 * Aquí aprenderás sobre:
 * - Operadores aritméticos
 * - Operadores de asignación
 * - Operadores de comparación
 * - Operadores lógicos
 * - Operadores de incremento/decremento
 */

#include <iostream>
using namespace std;

int main() {
    cout << "=== OPERADORES EN C++ ===" << endl << endl;
    
    // OPERADORES ARITMÉTICOS
    cout << "--- OPERADORES ARITMÉTICOS ---" << endl;
    int a = 10, b = 3;
    
    cout << "a = " << a << ", b = " << b << endl;
    cout << "a + b = " << (a + b) << endl;  // Suma
    cout << "a - b = " << (a - b) << endl;  // Resta
    cout << "a * b = " << (a * b) << endl;  // Multiplicación
    cout << "a / b = " << (a / b) << endl;  // División entera
    cout << "a % b = " << (a % b) << endl;  // Módulo (resto)
    
    cout << "\nDivisión con decimales:" << endl;
    double c = 10.0, d = 3.0;
    cout << "c / d = " << (c / d) << endl;
    
    // OPERADORES DE ASIGNACIÓN
    cout << "\n--- OPERADORES DE ASIGNACIÓN ---" << endl;
    int x = 5;
    cout << "x inicial = " << x << endl;
    
    x += 3;  // x = x + 3
    cout << "x += 3 → x = " << x << endl;
    
    x -= 2;  // x = x - 2
    cout << "x -= 2 → x = " << x << endl;
    
    x *= 2;  // x = x * 2
    cout << "x *= 2 → x = " << x << endl;
    
    x /= 4;  // x = x / 4
    cout << "x /= 4 → x = " << x << endl;
    
    x %= 3;  // x = x % 3
    cout << "x %= 3 → x = " << x << endl;
    
    // OPERADORES DE INCREMENTO/DECREMENTO
    cout << "\n--- INCREMENTO/DECREMENTO ---" << endl;
    int i = 5;
    cout << "i inicial = " << i << endl;
    
    cout << "++i (pre-incremento) = " << ++i << endl;  // i se incrementa primero
    cout << "i ahora = " << i << endl;
    
    cout << "i++ (post-incremento) = " << i++ << endl; // i se incrementa después
    cout << "i ahora = " << i << endl;
    
    cout << "--i (pre-decremento) = " << --i << endl;  // i se decrementa primero
    cout << "i-- (post-decremento) = " << i-- << endl; // i se decrementa después
    cout << "i final = " << i << endl;
    
    // OPERADORES DE COMPARACIÓN
    cout << "\n--- OPERADORES DE COMPARACIÓN ---" << endl;
    int num1 = 10, num2 = 20;
    
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    cout << "num1 == num2: " << (num1 == num2) << endl;  // Igualdad
    cout << "num1 != num2: " << (num1 != num2) << endl;  // Desigualdad
    cout << "num1 < num2: " << (num1 < num2) << endl;    // Menor que
    cout << "num1 > num2: " << (num1 > num2) << endl;    // Mayor que
    cout << "num1 <= num2: " << (num1 <= num2) << endl;  // Menor o igual
    cout << "num1 >= num2: " << (num1 >= num2) << endl;  // Mayor o igual
    
    // OPERADORES LÓGICOS
    cout << "\n--- OPERADORES LÓGICOS ---" << endl;
    bool es_mayor = true;
    bool tiene_licencia = false;
    
    cout << "es_mayor = " << es_mayor << ", tiene_licencia = " << tiene_licencia << endl;
    cout << "es_mayor && tiene_licencia: " << (es_mayor && tiene_licencia) << endl; // AND
    cout << "es_mayor || tiene_licencia: " << (es_mayor || tiene_licencia) << endl; // OR
    cout << "!es_mayor: " << (!es_mayor) << endl;  // NOT
    
    // PRECEDENCIA DE OPERADORES
    cout << "\n--- PRECEDENCIA ---" << endl;
    int resultado1 = 2 + 3 * 4;        // Multiplicación primero
    int resultado2 = (2 + 3) * 4;      // Paréntesis primero
    
    cout << "2 + 3 * 4 = " << resultado1 << endl;
    cout << "(2 + 3) * 4 = " << resultado2 << endl;
    
    // OPERADOR TERNARIO
    cout << "\n--- OPERADOR TERNARIO ---" << endl;
    int edad = 18;
    string mensaje = (edad >= 18) ? "Mayor de edad" : "Menor de edad";
    cout << "Edad: " << edad << " → " << mensaje << endl;
    
    // OPERADORES BIT A BIT (BONUS)
    cout << "\n--- OPERADORES BIT A BIT ---" << endl;
    int p = 5;  // 101 en binario
    int q = 3;  // 011 en binario
    
    cout << "p = " << p << " (101 binario)" << endl;
    cout << "q = " << q << " (011 binario)" << endl;
    cout << "p & q = " << (p & q) << " (AND bit a bit)" << endl;
    cout << "p | q = " << (p | q) << " (OR bit a bit)" << endl;
    cout << "p ^ q = " << (p ^ q) << " (XOR bit a bit)" << endl;
    cout << "~p = " << (~p) << " (NOT bit a bit)" << endl;
    
    return 0;
}

/*
 * RESUMEN DE OPERADORES:
 * 
 * ARITMÉTICOS:
 * +, -, *, /, % (módulo)
 * 
 * ASIGNACIÓN:
 * =, +=, -=, *=, /=, %=
 * 
 * INCREMENTO/DECREMENTO:
 * ++, -- (pre y post)
 * 
 * COMPARACIÓN:
 * ==, !=, <, >, <=, >=
 * 
 * LÓGICOS:
 * && (AND), || (OR), ! (NOT)
 * 
 * TERNARIO:
 * condición ? valor_si_true : valor_si_false
 * 
 * PRECEDENCIA (de mayor a menor):
 * 1. () paréntesis
 * 2. ++, -- (post)
 * 3. ++, --, ! (pre)
 * 4. *, /, %
 * 5. +, -
 * 6. <, >, <=, >=
 * 7. ==, !=
 * 8. &&
 * 9. ||
 * 10. ?:
 * 11. =, +=, -=, etc.
 */

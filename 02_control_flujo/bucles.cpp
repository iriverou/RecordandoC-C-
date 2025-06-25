/*
 * CONTROL DE FLUJO EN C++
 * Tema: Bucles (Loops)
 * 
 * Aquí aprenderás sobre:
 * - for loop
 * - while loop
 * - do-while loop
 * - break y continue
 * - Bucles anidados
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "=== BUCLES EN C++ ===" << endl << endl;
    
    // FOR LOOP BÁSICO
    cout << "--- FOR LOOP BÁSICO ---" << endl;
    cout << "Contando del 1 al 5:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << "Número: " << i << endl;
    }
    
    cout << "\nContando hacia atrás:" << endl;
    for (int i = 5; i >= 1; i--) {
        cout << "Número: " << i << endl;
    }
    
    // FOR CON DIFERENTES INCREMENTOS
    cout << "\n--- FOR CON DIFERENTES INCREMENTOS ---" << endl;
    cout << "Números pares del 0 al 10:" << endl;
    for (int i = 0; i <= 10; i += 2) {
        cout << i << " ";
    }
    cout << endl;
    
    cout << "Potencias de 2 hasta 64:" << endl;
    for (int i = 1; i <= 64; i *= 2) {
        cout << i << " ";
    }
    cout << endl;
    
    // WHILE LOOP
    cout << "\n--- WHILE LOOP ---" << endl;
    int contador = 1;
    cout << "Usando while para contar hasta 5:" << endl;
    while (contador <= 5) {
        cout << "Contador: " << contador << endl;
        contador++;
    }
    
    // WHILE CON CONDICIÓN MÁS COMPLEJA
    cout << "\nSuma acumulativa hasta llegar a 20 o más:" << endl;
    int suma = 0;
    int numero = 1;
    while (suma < 20) {
        suma += numero;
        cout << "Sumando " << numero << ", total: " << suma << endl;
        numero++;
    }
    
    // DO-WHILE LOOP
    cout << "\n--- DO-WHILE LOOP ---" << endl;
    int opcion;
    do {
        cout << "\nMenú:" << endl;
        cout << "1. Opción A" << endl;
        cout << "2. Opción B" << endl;
        cout << "3. Salir" << endl;
        cout << "Selecciona una opción (simulado): ";
        
        // Simulamos la entrada del usuario
        static int simulacion = 0;
        simulacion++;
        if (simulacion == 1) opcion = 1;
        else if (simulacion == 2) opcion = 2;
        else opcion = 3;
        
        cout << opcion << endl;
        
        switch (opcion) {
            case 1:
                cout << "Ejecutando Opción A..." << endl;
                break;
            case 2:
                cout << "Ejecutando Opción B..." << endl;
                break;
            case 3:
                cout << "¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opción no válida" << endl;
        }
    } while (opcion != 3);
    
    // BREAK Y CONTINUE
    cout << "\n--- BREAK Y CONTINUE ---" << endl;
    cout << "Números del 1 al 10, saltando el 5 y parando en el 8:" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            cout << "(Saltando el 5)" << endl;
            continue;  // Salta a la siguiente iteración
        }
        if (i == 8) {
            cout << "(Parando en el 8)" << endl;
            break;     // Sale del bucle
        }
        cout << "Número: " << i << endl;
    }
    
    // BÚSQUEDA CON BREAK
    cout << "\nBuscando el número 7 en una secuencia:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << "Revisando: " << i << endl;
        if (i == 7) {
            cout << "¡Encontrado el 7!" << endl;
            break;
        }
    }
    
    // BUCLES ANIDADOS
    cout << "\n--- BUCLES ANIDADOS ---" << endl;
    cout << "Tabla de multiplicar (3x3):" << endl;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << i << " x " << j << " = " << (i * j) << "\t";
        }
        cout << endl;
    }
    
    // PATRÓN CON ASTERISCOS
    cout << "\nPatrón de asteriscos:" << endl;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    // FOR INFINITO (CON BREAK)
    cout << "\n--- FOR CON BREAK CONDICIONAL ---" << endl;
    cout << "Secuencia de Fibonacci hasta 50:" << endl;
    int a = 0, b = 1;
    for (;;) {  // For infinito
        if (a > 50) break;
        cout << a << " ";
        int temp = a + b;
        a = b;
        b = temp;
    }
    cout << endl;
    
    // EJEMPLO PRÁCTICO: VALIDACIÓN DE ENTRADA
    cout << "\n--- VALIDACIÓN CON WHILE ---" << endl;
    int edad_usuario;
    cout << "Ingresa tu edad (entre 1 y 120): ";
    
    // Simulamos entrada inválida primero
    edad_usuario = -5;  // Simulación
    cout << edad_usuario << " (simulado)" << endl;
    
    while (edad_usuario < 1 || edad_usuario > 120) {
        cout << "Edad inválida. Ingresa una edad entre 1 y 120: ";
        edad_usuario = 25;  // Simulamos entrada válida
        cout << edad_usuario << " (simulado)" << endl;
    }
    cout << "Edad válida: " << edad_usuario << " años" << endl;
    
    // SUMA DE NÚMEROS EN UN RANGO
    cout << "\n--- SUMA EN RANGO ---" << endl;
    int inicio = 1, fin = 10;
    int suma_total = 0;
    
    cout << "Sumando números del " << inicio << " al " << fin << ":" << endl;
    for (int i = inicio; i <= fin; i++) {
        suma_total += i;
        if (i < fin) {
            cout << i << " + ";
        } else {
            cout << i << " = " << suma_total << endl;
        }
    }
    
    // CONTAR DÍGITOS
    cout << "\n--- CONTAR DÍGITOS ---" << endl;
    int numero_grande = 12345;
    int temp = numero_grande;
    int digitos = 0;
    
    cout << "Contando dígitos de " << numero_grande << ":" << endl;
    while (temp > 0) {
        digitos++;
        cout << "Dígito encontrado: " << (temp % 10) << endl;
        temp /= 10;
    }
    cout << "Total de dígitos: " << digitos << endl;
    
    return 0;
}

/*
 * BUCLES - RESUMEN:
 * 
 * FOR LOOP:
 * for (inicialización; condición; incremento) {
 *     // código a repetir
 * }
 * - Usa cuando sepas cuántas veces repetir
 * 
 * WHILE LOOP:
 * while (condición) {
 *     // código a repetir
 *     // no olvides modificar la condición
 * }
 * - Usa cuando no sepas exactamente cuántas veces repetir
 * 
 * DO-WHILE LOOP:
 * do {
 *     // código a repetir
 * } while (condición);
 * - Se ejecuta al menos una vez
 * - Útil para menús y validaciones
 * 
 * CONTROL DE FLUJO:
 * - break: sale del bucle inmediatamente
 * - continue: salta a la siguiente iteración
 * 
 * BUCLES ANIDADOS:
 * - Un bucle dentro de otro
 * - Útil para matrices, tablas, patrones
 * 
 * BUENAS PRÁCTICAS:
 * - Asegúrate de que la condición eventualmente sea false
 * - Evita bucles infinitos accidentalmente
 * - Usa nombres descriptivos para variables de control
 * - Considera el rendimiento en bucles anidados
 * - Inicializa variables antes del bucle
 * 
 * PATRONES COMUNES:
 * - Sumar/acumular valores
 * - Buscar elementos
 * - Validar entrada del usuario
 * - Generar patrones/tablas
 * - Procesar secuencias de datos
 */

/*
 * CONTROL DE FLUJO EN C++
 * Tema: Estructuras Condicionales
 * 
 * Aquí aprenderás sobre:
 * - if, else if, else
 * - Operador ternario
 * - switch-case
 * - Condiciones anidadas
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "=== ESTRUCTURAS CONDICIONALES ===" << endl << endl;
    
    // IF BÁSICO
    cout << "--- IF BÁSICO ---" << endl;
    int edad = 18;
    cout << "Edad: " << edad << endl;
    
    if (edad >= 18) {
        cout << "Eres mayor de edad" << endl;
    }
    
    // IF-ELSE
    cout << "\n--- IF-ELSE ---" << endl;
    int numero = -5;
    cout << "Número: " << numero << endl;
    
    if (numero >= 0) {
        cout << "El número es positivo o cero" << endl;
    } else {
        cout << "El número es negativo" << endl;
    }
    
    // IF-ELSE IF-ELSE
    cout << "\n--- IF-ELSE IF-ELSE ---" << endl;
    double promedio = 85.5;
    cout << "Promedio: " << promedio << endl;
    
    if (promedio >= 90) {
        cout << "Calificación: A (Excelente)" << endl;
    } else if (promedio >= 80) {
        cout << "Calificación: B (Muy bueno)" << endl;
    } else if (promedio >= 70) {
        cout << "Calificación: C (Bueno)" << endl;
    } else if (promedio >= 60) {
        cout << "Calificación: D (Suficiente)" << endl;
    } else {
        cout << "Calificación: F (Reprobado)" << endl;
    }
    
    // CONDICIONES MÚLTIPLES
    cout << "\n--- CONDICIONES MÚLTIPLES ---" << endl;
    int dia = 15;
    int mes = 12;
    cout << "Fecha: " << dia << "/" << mes << endl;
    
    if (mes == 12 && dia >= 15) {
        cout << "¡Ya casi es Navidad!" << endl;
    } else if (mes == 12 || mes == 1) {
        cout << "Es temporada navideña" << endl;
    } else {
        cout << "No es época navideña" << endl;
    }
    
    // OPERADOR TERNARIO
    cout << "\n--- OPERADOR TERNARIO ---" << endl;
    int x = 10, y = 20;
    cout << "x = " << x << ", y = " << y << endl;
    
    int mayor = (x > y) ? x : y;
    cout << "El mayor es: " << mayor << endl;
    
    string resultado = (x % 2 == 0) ? "par" : "impar";
    cout << "x es " << resultado << endl;
    
    // SWITCH-CASE
    cout << "\n--- SWITCH-CASE ---" << endl;
    int opcion = 2;
    cout << "Opción seleccionada: " << opcion << endl;
    
    switch (opcion) {
        case 1:
            cout << "Has elegido: Crear archivo" << endl;
            break;
        case 2:
            cout << "Has elegido: Abrir archivo" << endl;
            break;
        case 3:
            cout << "Has elegido: Guardar archivo" << endl;
            break;
        case 4:
        case 5:  // Casos que ejecutan el mismo código
            cout << "Has elegido: Opciones avanzadas" << endl;
            break;
        default:
            cout << "Opción no válida" << endl;
            break;
    }
    
    // SWITCH CON CARACTERES
    cout << "\n--- SWITCH CON CARACTERES ---" << endl;
    char calificacion = 'B';
    cout << "Calificación: " << calificacion << endl;
    
    switch (calificacion) {
        case 'A':
        case 'a':
            cout << "¡Excelente trabajo!" << endl;
            break;
        case 'B':
        case 'b':
            cout << "Muy buen trabajo" << endl;
            break;
        case 'C':
        case 'c':
            cout << "Trabajo satisfactorio" << endl;
            break;
        case 'D':
        case 'd':
            cout << "Necesitas mejorar" << endl;
            break;
        case 'F':
        case 'f':
            cout << "No aprobaste" << endl;
            break;
        default:
            cout << "Calificación no válida" << endl;
    }
    
    // CONDICIONES ANIDADAS
    cout << "\n--- CONDICIONES ANIDADAS ---" << endl;
    int temperatura = 25;
    bool esta_soleado = true;
    cout << "Temperatura: " << temperatura << "°C" << endl;
    cout << "¿Está soleado? " << (esta_soleado ? "Sí" : "No") << endl;
    
    if (temperatura > 20) {
        if (esta_soleado) {
            cout << "¡Perfecto para ir a la playa!" << endl;
        } else {
            cout << "Buen clima, aunque nublado" << endl;
        }
    } else {
        if (temperatura < 0) {
            cout << "¡Está helando!" << endl;
        } else {
            cout << "Hace frío, abrígate" << endl;
        }
    }
    
    // EJEMPLO PRÁCTICO: CALCULADORA DE IMC
    cout << "\n--- CALCULADORA DE IMC ---" << endl;
    double peso = 70.0;  // kg
    double altura = 1.75; // metros
    
    double imc = peso / (altura * altura);
    cout << "Peso: " << peso << " kg" << endl;
    cout << "Altura: " << altura << " m" << endl;
    cout << "IMC: " << imc << endl;
    
    cout << "Clasificación: ";
    if (imc < 18.5) {
        cout << "Bajo peso" << endl;
    } else if (imc < 25.0) {
        cout << "Peso normal" << endl;
    } else if (imc < 30.0) {
        cout << "Sobrepeso" << endl;
    } else {
        cout << "Obesidad" << endl;
    }
    
    return 0;
}

/*
 * ESTRUCTURAS CONDICIONALES - RESUMEN:
 * 
 * IF-ELSE:
 * if (condición) {
 *     // código si es true
 * } else if (otra_condición) {
 *     // código si otra_condición es true
 * } else {
 *     // código si todas son false
 * }
 * 
 * OPERADOR TERNARIO:
 * resultado = condición ? valor_si_true : valor_si_false;
 * 
 * SWITCH-CASE:
 * switch (variable) {
 *     case valor1:
 *         // código
 *         break;
 *     case valor2:
 *         // código
 *         break;
 *     default:
 *         // código por defecto
 * }
 * 
 * OPERADORES LÓGICOS:
 * - && (AND): ambas condiciones true
 * - || (OR): al menos una condición true
 * - ! (NOT): invierte la condición
 * 
 * CUÁNDO USAR QUÉ:
 * - if-else: condiciones complejas o rangos
 * - switch: comparar variable con valores específicos
 * - operador ternario: asignaciones simples
 * 
 * BUENAS PRÁCTICAS:
 * - Usa llaves {} siempre, incluso para una línea
 * - Indenta correctamente para legibilidad
 * - No olvides break en switch
 * - Usa default en switch cuando sea apropiado
 * - Evita condiciones muy anidadas
 */

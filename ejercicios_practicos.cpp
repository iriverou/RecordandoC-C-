/*
 * EJERCICIOS PRÁCTICOS - C++ BÁSICO
 * 
 * Aquí encontrarás ejercicios para practicar los conceptos básicos.
 * Cada ejercicio tiene su función correspondiente.
 * Descomenta las llamadas en main() para probar cada ejercicio.
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// PROTOTIPOS DE FUNCIONES
void ejercicio1_calculadora();
void ejercicio2_numeros_primos();
void ejercicio3_palindromo();
void ejercicio4_fibonacci();
void ejercicio5_ordenamiento_burbuja();
void ejercicio6_juego_adivinanza();
void ejercicio7_estadisticas_array();
void ejercicio8_contador_palabras();
void ejercicio9_matriz_transpuesta();
void ejercicio10_validador_password();

int main() {
    cout << "=== EJERCICIOS PRÁCTICOS DE C++ ===" << endl << endl;
    
    cout << "Descomenta las funciones que quieras probar:" << endl << endl;
    
    // Ejercicio 1: Calculadora básica
    ejercicio1_calculadora();
    
    // Ejercicio 2: Números primos
    // ejercicio2_numeros_primos();
    
    // Ejercicio 3: Verificar palíndromo
    // ejercicio3_palindromo();
    
    // Ejercicio 4: Secuencia de Fibonacci
    // ejercicio4_fibonacci();
    
    // Ejercicio 5: Ordenamiento burbuja
    // ejercicio5_ordenamiento_burbuja();
    
    // Ejercicio 6: Juego de adivinanza
    // ejercicio6_juego_adivinanza();
    
    // Ejercicio 7: Estadísticas de array
    // ejercicio7_estadisticas_array();
    
    // Ejercicio 8: Contador de palabras
    // ejercicio8_contador_palabras();
    
    // Ejercicio 9: Transponer matriz
    // ejercicio9_matriz_transpuesta();
    
    // Ejercicio 10: Validador de contraseña
    // ejercicio10_validador_password();
    
    return 0;
}

// EJERCICIO 1: CALCULADORA BÁSICA
void ejercicio1_calculadora() {
    cout << "--- EJERCICIO 1: CALCULADORA BÁSICA ---" << endl;
    
    double num1, num2;
    char operador;
    
    cout << "Ingresa una operación (ej: 5.5 + 3.2): ";
    
    // Simulamos entrada para el ejemplo
    num1 = 10.5;
    operador = '*';
    num2 = 4.0;
    cout << num1 << " " << operador << " " << num2 << endl;
    
    cout << "Resultado: ";
    switch(operador) {
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            if(num2 != 0) {
                cout << num1 / num2 << endl;
            } else {
                cout << "Error: División por cero" << endl;
            }
            break;
        case '%':
            if(num2 != 0) {
                cout << (int)num1 % (int)num2 << " (módulo de enteros)" << endl;
            } else {
                cout << "Error: División por cero" << endl;
            }
            break;
        default:
            cout << "Operador no válido" << endl;
    }
    cout << endl;
}

// EJERCICIO 2: NÚMEROS PRIMOS
void ejercicio2_numeros_primos() {
    cout << "--- EJERCICIO 2: NÚMEROS PRIMOS ---" << endl;
    
    auto es_primo = [](int n) {
        if (n <= 1) return false;
        if (n <= 3) return true;
        if (n % 2 == 0 || n % 3 == 0) return false;
        
        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) {
                return false;
            }
        }
        return true;
    };
    
    int limite = 50;
    cout << "Números primos hasta " << limite << ":" << endl;
    
    for (int i = 2; i <= limite; i++) {
        if (es_primo(i)) {
            cout << i << " ";
        }
    }
    cout << endl << endl;
}

// EJERCICIO 3: VERIFICAR PALÍNDROMO
void ejercicio3_palindromo() {
    cout << "--- EJERCICIO 3: VERIFICAR PALÍNDROMO ---" << endl;
    
    auto es_palindromo = [](string str) {
        // Convertir a minúsculas y quitar espacios
        string limpia = "";
        for (char c : str) {
            if (c != ' ') {
                limpia += tolower(c);
            }
        }
        
        // Verificar si es palíndromo
        int n = limpia.length();
        for (int i = 0; i < n / 2; i++) {
            if (limpia[i] != limpia[n - 1 - i]) {
                return false;
            }
        }
        return true;
    };
    
    vector<string> palabras = {"radar", "hola", "anita lava la tina", "12321", "abc"};
    
    for (const string& palabra : palabras) {
        cout << "\"" << palabra << "\" ";
        if (es_palindromo(palabra)) {
            cout << "ES palíndromo" << endl;
        } else {
            cout << "NO es palíndromo" << endl;
        }
    }
    cout << endl;
}

// EJERCICIO 4: SECUENCIA DE FIBONACCI
void ejercicio4_fibonacci() {
    cout << "--- EJERCICIO 4: SECUENCIA DE FIBONACCI ---" << endl;
    
    int n = 10;
    cout << "Primeros " << n << " números de Fibonacci:" << endl;
    
    if (n >= 1) cout << "0 ";
    if (n >= 2) cout << "1 ";
    
    int a = 0, b = 1;
    for (int i = 3; i <= n; i++) {
        int siguiente = a + b;
        cout << siguiente << " ";
        a = b;
        b = siguiente;
    }
    cout << endl << endl;
}

// EJERCICIO 5: ORDENAMIENTO BURBUJA
void ejercicio5_ordenamiento_burbuja() {
    cout << "--- EJERCICIO 5: ORDENAMIENTO BURBUJA ---" << endl;
    
    int numeros[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(numeros) / sizeof(numeros[0]);
    
    cout << "Array original: ";
    for (int i = 0; i < n; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;
    
    // Algoritmo de ordenamiento burbuja
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                // Intercambiar
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }
    
    cout << "Array ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl << endl;
}

// EJERCICIO 6: JUEGO DE ADIVINANZA
void ejercicio6_juego_adivinanza() {
    cout << "--- EJERCICIO 6: JUEGO DE ADIVINANZA ---" << endl;
    
    int numero_secreto = 42;  // En un juego real, sería aleatorio
    int intentos = 0;
    int adivinanza;
    const int max_intentos = 5;
    
    cout << "¡Adivina el número entre 1 y 100!" << endl;
    cout << "Tienes " << max_intentos << " intentos." << endl;
    
    // Simulamos algunos intentos
    vector<int> intentos_simulados = {50, 30, 40, 42};
    
    for (int intento_sim : intentos_simulados) {
        intentos++;
        adivinanza = intento_sim;
        
        cout << "Intento " << intentos << ": " << adivinanza << endl;
        
        if (adivinanza == numero_secreto) {
            cout << "¡Felicidades! Adivinaste en " << intentos << " intentos." << endl;
            break;
        } else if (adivinanza < numero_secreto) {
            cout << "Muy bajo. Intenta con un número mayor." << endl;
        } else {
            cout << "Muy alto. Intenta con un número menor." << endl;
        }
        
        if (intentos >= max_intentos) {
            cout << "Se acabaron los intentos. El número era: " << numero_secreto << endl;
            break;
        }
    }
    cout << endl;
}

// EJERCICIO 7: ESTADÍSTICAS DE ARRAY
void ejercicio7_estadisticas_array() {
    cout << "--- EJERCICIO 7: ESTADÍSTICAS DE ARRAY ---" << endl;
    
    int datos[] = {15, 22, 8, 19, 31, 7, 12, 25, 18, 9};
    int n = sizeof(datos) / sizeof(datos[0]);
    
    cout << "Datos: ";
    for (int i = 0; i < n; i++) {
        cout << datos[i] << " ";
    }
    cout << endl;
    
    // Calcular estadísticas
    int suma = 0;
    int maximo = datos[0];
    int minimo = datos[0];
    
    for (int i = 0; i < n; i++) {
        suma += datos[i];
        if (datos[i] > maximo) maximo = datos[i];
        if (datos[i] < minimo) minimo = datos[i];
    }
    
    double promedio = (double)suma / n;
    
    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Máximo: " << maximo << endl;
    cout << "Mínimo: " << minimo << endl;
    cout << "Rango: " << (maximo - minimo) << endl;
    cout << endl;
}

// EJERCICIO 8: CONTADOR DE PALABRAS
void ejercicio8_contador_palabras() {
    cout << "--- EJERCICIO 8: CONTADOR DE PALABRAS ---" << endl;
    
    string texto = "C++ es un lenguaje de programación potente y versátil";
    cout << "Texto: \"" << texto << "\"" << endl;
    
    // Contar palabras
    int palabras = 0;
    bool en_palabra = false;
    
    for (char c : texto) {
        if (c != ' ' && c != '\t' && c != '\n') {
            if (!en_palabra) {
                palabras++;
                en_palabra = true;
            }
        } else {
            en_palabra = false;
        }
    }
    
    // Contar caracteres (sin espacios)
    int caracteres_sin_espacios = 0;
    for (char c : texto) {
        if (c != ' ') {
            caracteres_sin_espacios++;
        }
    }
    
    cout << "Número de palabras: " << palabras << endl;
    cout << "Número de caracteres (total): " << texto.length() << endl;
    cout << "Número de caracteres (sin espacios): " << caracteres_sin_espacios << endl;
    cout << endl;
}

// EJERCICIO 9: TRANSPONER MATRIZ
void ejercicio9_matriz_transpuesta() {
    cout << "--- EJERCICIO 9: TRANSPONER MATRIZ ---" << endl;
    
    int matriz[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    int transpuesta[4][3];
    
    cout << "Matriz original (3x4):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    
    // Transponer
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }
    
    cout << "\nMatriz transpuesta (4x3):" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cout << transpuesta[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

// EJERCICIO 10: VALIDADOR DE CONTRASEÑA
void ejercicio10_validador_password() {
    cout << "--- EJERCICIO 10: VALIDADOR DE CONTRASEÑA ---" << endl;
    
    auto validar_password = [](const string& password) {
        bool tiene_minuscula = false;
        bool tiene_mayuscula = false;
        bool tiene_numero = false;
        bool tiene_especial = false;
        bool longitud_ok = password.length() >= 8;
        
        for (char c : password) {
            if (c >= 'a' && c <= 'z') tiene_minuscula = true;
            if (c >= 'A' && c <= 'Z') tiene_mayuscula = true;
            if (c >= '0' && c <= '9') tiene_numero = true;
            if (c == '!' || c == '@' || c == '#' || c == '$' || 
                c == '%' || c == '&' || c == '*') tiene_especial = true;
        }
        
        return longitud_ok && tiene_minuscula && tiene_mayuscula && 
               tiene_numero && tiene_especial;
    };
    
    vector<string> passwords = {
        "123456",
        "Password123",
        "Pass123!",
        "MiPassword123!",
        "abc"
    };
    
    cout << "Requisitos: Al menos 8 caracteres, mayúscula, minúscula, número y carácter especial" << endl << endl;
    
    for (const string& pass : passwords) {
        cout << "Contraseña: \"" << pass << "\" - ";
        if (validar_password(pass)) {
            cout << "VÁLIDA ✓" << endl;
        } else {
            cout << "INVÁLIDA ✗" << endl;
        }
    }
    cout << endl;
}

/*
 * EJERCICIOS ADICIONALES PARA PRACTICAR:
 * 
 * 1. Crear un programa que convierta temperaturas (Celsius, Fahrenheit, Kelvin)
 * 2. Implementar un sistema de calificaciones con promedios
 * 3. Crear un juego de piedra, papel, tijera
 * 4. Hacer un programa que maneje un inventario simple
 * 5. Implementar búsqueda binaria en un array ordenado
 * 6. Crear una calculadora de IMC con categorización
 * 7. Hacer un programa que simule una cuenta bancaria
 * 8. Implementar el cifrado César para strings
 * 9. Crear un generador de tablas de multiplicar
 * 10. Hacer un programa que analice la frecuencia de letras en un texto
 * 
 * DESAFÍOS AVANZADOS:
 * - Implementar el algoritmo de ordenamiento quicksort
 * - Crear un programa que resuelva ecuaciones cuadráticas
 * - Hacer un sistema de gestión de estudiantes
 * - Implementar un convertidor de bases numéricas
 * - Crear un analizador de texto que cuente vocales y consonantes
 */

/*
 * FUNCIONES EN C++
 * Tema: Parámetros por Referencia y Sobrecarga
 * 
 * Aquí aprenderás sobre:
 * - Parámetros por valor vs por referencia
 * - Punteros como parámetros
 * - Sobrecarga de funciones
 * - Funciones inline
 */

#include <iostream>
#include <string>
using namespace std;

// PROTOTIPOS DE FUNCIONES
void por_valor(int x);
void por_referencia(int& x);
void por_puntero(int* x);
void intercambiar(int& a, int& b);
void intercambiar_punteros(int* a, int* b);

// SOBRECARGA DE FUNCIONES (mismo nombre, diferentes parámetros)
int maximo(int a, int b);
double maximo(double a, double b);
int maximo(int a, int b, int c);

// FUNCIÓN PARA MODIFICAR ARRAYS
void llenar_array(int arr[], int tamaño, int valor);
void mostrar_array(int arr[], int tamaño);

// FUNCIONES CON STRINGS
void modificar_string_valor(string str);
void modificar_string_referencia(string& str);

// FUNCIÓN INLINE (sugerencia al compilador para optimización)
inline int cuadrado(int x) {
    return x * x;
}

int main() {
    cout << "=== PARÁMETROS Y SOBRECARGA ===" << endl << endl;
    
    // PARÁMETROS POR VALOR
    cout << "--- PARÁMETROS POR VALOR ---" << endl;
    int numero = 10;
    cout << "Antes de llamar por_valor: " << numero << endl;
    por_valor(numero);
    cout << "Después de llamar por_valor: " << numero << endl;
    
    // PARÁMETROS POR REFERENCIA
    cout << "\n--- PARÁMETROS POR REFERENCIA ---" << endl;
    int numero2 = 10;
    cout << "Antes de llamar por_referencia: " << numero2 << endl;
    por_referencia(numero2);
    cout << "Después de llamar por_referencia: " << numero2 << endl;
    
    // PARÁMETROS POR PUNTERO
    cout << "\n--- PARÁMETROS POR PUNTERO ---" << endl;
    int numero3 = 10;
    cout << "Antes de llamar por_puntero: " << numero3 << endl;
    por_puntero(&numero3);  // Pasamos la dirección
    cout << "Después de llamar por_puntero: " << numero3 << endl;
    
    // INTERCAMBIAR VALORES CON REFERENCIAS
    cout << "\n--- INTERCAMBIAR CON REFERENCIAS ---" << endl;
    int a = 5, b = 8;
    cout << "Antes: a = " << a << ", b = " << b << endl;
    intercambiar(a, b);
    cout << "Después: a = " << a << ", b = " << b << endl;
    
    // INTERCAMBIAR VALORES CON PUNTEROS
    cout << "\n--- INTERCAMBIAR CON PUNTEROS ---" << endl;
    int c = 15, d = 25;
    cout << "Antes: c = " << c << ", d = " << d << endl;
    intercambiar_punteros(&c, &d);
    cout << "Después: c = " << c << ", d = " << d << endl;
    
    // SOBRECARGA DE FUNCIONES
    cout << "\n--- SOBRECARGA DE FUNCIONES ---" << endl;
    cout << "Máximo entre 5 y 8: " << maximo(5, 8) << endl;
    cout << "Máximo entre 3.14 y 2.71: " << maximo(3.14, 2.71) << endl;
    cout << "Máximo entre 10, 20 y 15: " << maximo(10, 20, 15) << endl;
    
    // MODIFICAR ARRAYS
    cout << "\n--- MODIFICAR ARRAYS ---" << endl;
    int numeros[5];
    
    cout << "Array inicial:" << endl;
    mostrar_array(numeros, 5);
    
    llenar_array(numeros, 5, 7);
    cout << "Array después de llenarlo con 7s:" << endl;
    mostrar_array(numeros, 5);
    
    // STRINGS POR VALOR VS REFERENCIA
    cout << "\n--- STRINGS POR VALOR VS REFERENCIA ---" << endl;
    string mensaje = "Hola";
    
    cout << "String original: " << mensaje << endl;
    modificar_string_valor(mensaje);
    cout << "Después de modificar por valor: " << mensaje << endl;
    
    modificar_string_referencia(mensaje);
    cout << "Después de modificar por referencia: " << mensaje << endl;
    
    // FUNCIÓN INLINE
    cout << "\n--- FUNCIÓN INLINE ---" << endl;
    int x = 4;
    cout << "Cuadrado de " << x << " = " << cuadrado(x) << endl;
    
    return 0;
}

// DEFINICIONES DE FUNCIONES

// Parámetro por valor - no modifica el original
void por_valor(int x) {
    cout << "Dentro de por_valor, x = " << x << endl;
    x = x * 2;
    cout << "Dentro de por_valor, x modificado = " << x << endl;
}

// Parámetro por referencia - modifica el original
void por_referencia(int& x) {
    cout << "Dentro de por_referencia, x = " << x << endl;
    x = x * 2;
    cout << "Dentro de por_referencia, x modificado = " << x << endl;
}

// Parámetro por puntero - modifica el original
void por_puntero(int* x) {
    cout << "Dentro de por_puntero, *x = " << *x << endl;
    *x = *x * 2;
    cout << "Dentro de por_puntero, *x modificado = " << *x << endl;
}

// Intercambiar dos valores usando referencias
void intercambiar(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Intercambiar dos valores usando punteros
void intercambiar_punteros(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// SOBRECARGA: máximo de dos enteros
int maximo(int a, int b) {
    return (a > b) ? a : b;
}

// SOBRECARGA: máximo de dos doubles
double maximo(double a, double b) {
    return (a > b) ? a : b;
}

// SOBRECARGA: máximo de tres enteros
int maximo(int a, int b, int c) {
    int temp = (a > b) ? a : b;
    return (temp > c) ? temp : c;
}

// Llenar array con un valor específico
void llenar_array(int arr[], int tamaño, int valor) {
    for (int i = 0; i < tamaño; i++) {
        arr[i] = valor;
    }
}

// Mostrar contenido del array
void mostrar_array(int arr[], int tamaño) {
    cout << "Array: ";
    for (int i = 0; i < tamaño; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Modificar string por valor (no afecta el original)
void modificar_string_valor(string str) {
    str += " Mundo";
    cout << "Dentro de función por valor: " << str << endl;
}

// Modificar string por referencia (afecta el original)
void modificar_string_referencia(string& str) {
    str += " Mundo";
    cout << "Dentro de función por referencia: " << str << endl;
}

/*
 * PARÁMETROS Y SOBRECARGA - RESUMEN:
 * 
 * PARÁMETROS POR VALOR:
 * - Se copia el valor del argumento
 * - Cambios no afectan la variable original
 * - Usa más memoria para tipos grandes
 * 
 * PARÁMETROS POR REFERENCIA:
 * - Se pasa la referencia a la variable original
 * - Cambios SÍ afectan la variable original
 * - Más eficiente para tipos grandes
 * - Sintaxis: tipo& nombre
 * 
 * PARÁMETROS POR PUNTERO:
 * - Se pasa la dirección de memoria
 * - Cambios SÍ afectan la variable original
 * - Permite pasar nullptr
 * - Sintaxis: tipo* nombre, usar *nombre para acceder al valor
 * 
 * SOBRECARGA DE FUNCIONES:
 * - Mismo nombre, diferentes parámetros
 * - Diferente número de parámetros O
 * - Diferentes tipos de parámetros
 * - NO se puede sobrecargar solo por tipo de retorno
 * 
 * ARRAYS COMO PARÁMETROS:
 * - Siempre se pasan por referencia (como puntero)
 * - Cambios afectan el array original
 * - Necesitas pasar el tamaño por separado
 * 
 * FUNCIÓN INLINE:
 * - Sugerencia al compilador para expandir en línea
 * - Puede mejorar rendimiento para funciones pequeñas
 * - Solo sugerencia, el compilador decide
 * 
 * CUÁNDO USAR QUÉ:
 * - Por valor: tipos pequeños que no necesitas modificar
 * - Por referencia: tipos grandes o cuando necesitas modificar
 * - Por puntero: cuando necesitas nullptr o aritmética de punteros
 * 
 * BUENAS PRÁCTICAS:
 * - Usa const& para parámetros grandes que no modificas
 * - Usa referencias en lugar de punteros cuando sea posible
 * - Nombra funciones sobrecargadas con lógica similar
 * - Documenta si la función modifica los parámetros
 */

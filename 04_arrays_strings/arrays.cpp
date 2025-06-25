/*
 * ARRAYS Y STRINGS EN C++
 * Tema: Arrays Unidimensionales y Multidimensionales
 * 
 * Aquí aprenderás sobre:
 * - Declaración e inicialización de arrays
 * - Acceso a elementos
 * - Arrays multidimensionales
 * - Recorrido de arrays
 * - Arrays como parámetros de funciones
 */

#include <iostream>
#include <algorithm>  // Para sort, find, etc.
#include <numeric>    // Para accumulate
using namespace std;

// Prototipos de funciones
void mostrar_array(int arr[], int tamaño, string nombre = "Array");
void mostrar_matriz(int** matriz, int filas, int columnas);
int buscar_elemento(int arr[], int tamaño, int elemento);
void ordenar_array(int arr[], int tamaño);

int main() {
    cout << "=== ARRAYS EN C++ ===" << endl << endl;
    
    // DECLARACIÓN E INICIALIZACIÓN DE ARRAYS
    cout << "--- DECLARACIÓN E INICIALIZACIÓN ---" << endl;
    
    // Diferentes formas de declarar arrays
    int numeros1[5];                           // Array sin inicializar
    int numeros2[5] = {1, 2, 3, 4, 5};        // Array completamente inicializado
    int numeros3[5] = {10, 20};               // Parcialmente inicializado (resto = 0)
    int numeros4[] = {100, 200, 300, 400};    // Tamaño determinado automáticamente
    
    // Inicializar array elemento por elemento
    for (int i = 0; i < 5; i++) {
        numeros1[i] = (i + 1) * 10;  // 10, 20, 30, 40, 50
    }
    
    mostrar_array(numeros1, 5, "numeros1");
    mostrar_array(numeros2, 5, "numeros2");
    mostrar_array(numeros3, 5, "numeros3");
    mostrar_array(numeros4, 4, "numeros4");
    
    // ACCESO Y MODIFICACIÓN DE ELEMENTOS
    cout << "\n--- ACCESO Y MODIFICACIÓN ---" << endl;
    int datos[3] = {5, 10, 15};
    
    cout << "Array original: ";
    mostrar_array(datos, 3, "datos");
    
    // Modificar elementos individuales
    datos[0] = 50;      // Primer elemento
    datos[1] += 10;     // Segundo elemento (incrementar)
    datos[2] *= 2;      // Tercer elemento (duplicar)
    
    cout << "Array modificado: ";
    mostrar_array(datos, 3, "datos");
    
    // RECORRIDO CON DIFERENTES TIPOS DE BUCLES
    cout << "\n--- RECORRIDO DE ARRAYS ---" << endl;
    int valores[] = {2, 4, 6, 8, 10, 12};
    int tamaño = sizeof(valores) / sizeof(valores[0]);  // Calcular tamaño
    
    cout << "Recorrido con for tradicional:" << endl;
    for (int i = 0; i < tamaño; i++) {
        cout << "valores[" << i << "] = " << valores[i] << endl;
    }
    
    cout << "\nRecorrido con range-based for (C++11):" << endl;
    for (int valor : valores) {
        cout << "Valor: " << valor << endl;
    }
    
    // OPERACIONES COMUNES CON ARRAYS
    cout << "\n--- OPERACIONES COMUNES ---" << endl;
    int numeros[] = {15, 3, 9, 1, 12, 7, 20};
    int n = sizeof(numeros) / sizeof(numeros[0]);
    
    mostrar_array(numeros, n, "Array original");
    
    // Encontrar máximo y mínimo
    int maximo = numeros[0];
    int minimo = numeros[0];
    int suma = 0;
    
    for (int i = 0; i < n; i++) {
        if (numeros[i] > maximo) maximo = numeros[i];
        if (numeros[i] < minimo) minimo = numeros[i];
        suma += numeros[i];
    }
    
    cout << "Máximo: " << maximo << endl;
    cout << "Mínimo: " << minimo << endl;
    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << (double)suma / n << endl;
    
    // BUSCAR ELEMENTO
    cout << "\n--- BÚSQUEDA EN ARRAY ---" << endl;
    int elemento_buscar = 9;
    int posicion = buscar_elemento(numeros, n, elemento_buscar);
    
    if (posicion != -1) {
        cout << "Elemento " << elemento_buscar 
             << " encontrado en posición " << posicion << endl;
    } else {
        cout << "Elemento " << elemento_buscar << " no encontrado" << endl;
    }
    
    // ORDENAMIENTO
    cout << "\n--- ORDENAMIENTO ---" << endl;
    int* numeros_copia = new int[n];
    
    // Copiar array
    for (int i = 0; i < n; i++) {
        numeros_copia[i] = numeros[i];
    }
    
    mostrar_array(numeros_copia, n, "Antes de ordenar");
    ordenar_array(numeros_copia, n);
    mostrar_array(numeros_copia, n, "Después de ordenar");
    
    // Liberar memoria
    delete[] numeros_copia;
    
    // ARRAYS MULTIDIMENSIONALES (MATRICES)
    cout << "\n--- ARRAYS MULTIDIMENSIONALES ---" << endl;
    
    // Matriz 3x3
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    cout << "Matriz 3x3:" << endl;
    mostrar_matriz((int**)matriz, 3, 3);
    
    // Modificar elementos de la matriz
    matriz[1][1] = 50;  // Elemento central
    cout << "\nMatriz después de cambiar elemento central:" << endl;
    mostrar_matriz((int**)matriz, 3, 3);
    
    // SUMA DE MATRICES
    cout << "\n--- SUMA DE MATRICES ---" << endl;
    int matriz_a[2][2] = {{1, 2}, {3, 4}};
    int matriz_b[2][2] = {{5, 6}, {7, 8}};
    int matriz_suma[2][2];
    
    // Sumar matrices
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matriz_suma[i][j] = matriz_a[i][j] + matriz_b[i][j];
        }
    }
    
    cout << "Matriz A:" << endl;
    mostrar_matriz((int**)matriz_a, 2, 2);
    cout << "Matriz B:" << endl;
    mostrar_matriz((int**)matriz_b, 2, 2);
    cout << "Suma A + B:" << endl;
    mostrar_matriz((int**)matriz_suma, 2, 2);
    
    // ARRAY DE CARACTERES (STRING ESTILO C)
    cout << "\n--- ARRAY DE CARACTERES ---" << endl;
    char nombre[20] = "Juan";
    char apellido[] = "Pérez";
    
    cout << "Nombre: " << nombre << endl;
    cout << "Apellido: " << apellido << endl;
    
    // Recorrer array de caracteres
    cout << "Letras del nombre: ";
    for (int i = 0; nombre[i] != '\0'; i++) {  // '\0' marca el final
        cout << nombre[i] << " ";
    }
    cout << endl;
    
    return 0;
}

// DEFINICIONES DE FUNCIONES

// Mostrar contenido de un array
void mostrar_array(int arr[], int tamaño, string nombre) {
    cout << nombre << ": ";
    for (int i = 0; i < tamaño; i++) {
        cout << arr[i];
        if (i < tamaño - 1) cout << ", ";
    }
    cout << endl;
}

// Mostrar matriz
void mostrar_matriz(int** matriz, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

// Buscar elemento en array (búsqueda lineal)
int buscar_elemento(int arr[], int tamaño, int elemento) {
    for (int i = 0; i < tamaño; i++) {
        if (arr[i] == elemento) {
            return i;  // Retorna la posición
        }
    }
    return -1;  // No encontrado
}

// Ordenar array usando burbuja (simple)
void ordenar_array(int arr[], int tamaño) {
    for (int i = 0; i < tamaño - 1; i++) {
        for (int j = 0; j < tamaño - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Intercambiar elementos
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

/*
 * ARRAYS - RESUMEN:
 * 
 * DECLARACIÓN:
 * tipo nombre[tamaño];                    // Sin inicializar
 * tipo nombre[tamaño] = {val1, val2, ...}; // Con valores iniciales
 * tipo nombre[] = {val1, val2, ...};       // Tamaño automático
 * 
 * ACCESO:
 * - Índices empiezan en 0
 * - nombre[índice] para acceder/modificar
 * - Cuidado con índices fuera de rango (no hay verificación)
 * 
 * TAMAÑO:
 * - sizeof(array) / sizeof(array[0])
 * - O pasar tamaño como parámetro
 * 
 * ARRAYS MULTIDIMENSIONALES:
 * - tipo nombre[filas][columnas]
 * - Acceso: nombre[fila][columna]
 * - Se almacenan en memoria de forma contigua
 * 
 * ARRAYS COMO PARÁMETROS:
 * - Se pasan como punteros (por referencia)
 * - Necesitas pasar el tamaño por separado
 * - Los cambios afectan el array original
 * 
 * LIMITACIONES:
 * - Tamaño fijo en tiempo de compilación
 * - No se puede obtener tamaño dentro de función
 * - No hay verificación de límites
 * - No se pueden asignar arrays completos con =
 * 
 * ALTERNATIVAS MODERNAS:
 * - std::array (tamaño fijo, más seguro)
 * - std::vector (tamaño dinámico)
 * 
 * OPERACIONES COMUNES:
 * - Recorrido con for
 * - Búsqueda lineal
 * - Ordenamiento
 * - Encontrar máximo/mínimo
 * - Suma/promedio de elementos
 * 
 * BUENAS PRÁCTICAS:
 * - Inicializa arrays al declararlos
 * - Valida índices antes de usar
 * - Usa const cuando no modificas el array
 * - Considera usar std::vector para casos más avanzados
 * - Documenta el significado de las dimensiones en matrices
 */

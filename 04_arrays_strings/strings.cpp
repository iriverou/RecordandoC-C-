/*
 * ARRAYS Y STRINGS EN C++
 * Tema: Manejo de Strings (C-style y std::string)
 * 
 * Aquí aprenderás sobre:
 * - Strings estilo C (arrays de char)
 * - std::string (clase string)
 * - Manipulación de strings
 * - Funciones comunes de strings
 * - Comparación y búsqueda
 */

#include <iostream>
#include <string>     // Para std::string
#include <cstring>    // Para funciones de C-strings
#include <cctype>     // Para funciones de caracteres
#include <algorithm>  // Para transform, reverse, etc.
using namespace std;

// Prototipos
void mostrar_cstring(const char str[]);
int longitud_cstring(const char str[]);
void copiar_cstring(char destino[], const char origen[]);

int main() {
    cout << "=== STRINGS EN C++ ===" << endl << endl;
    
    // STRINGS ESTILO C (C-STRINGS)
    cout << "--- STRINGS ESTILO C ---" << endl;
    
    char nombre1[20] = "Juan";           // Array de caracteres
    char nombre2[] = "María";            // Tamaño automático
    char nombre3[10];                    // Sin inicializar
    
    cout << "nombre1: " << nombre1 << endl;
    cout << "nombre2: " << nombre2 << endl;
    
    // Copiar string manualmente
    const char* fuente = "Carlos";
    copiar_cstring(nombre3, fuente);
    cout << "nombre3 (copiado): " << nombre3 << endl;
    
    // Longitud de C-string
    cout << "Longitud de nombre1: " << longitud_cstring(nombre1) << endl;
    cout << "Longitud con strlen: " << strlen(nombre1) << endl;
    
    // FUNCIONES DE C-STRING
    cout << "\n--- FUNCIONES DE C-STRING ---" << endl;
    char cadena1[50] = "Hola ";
    char cadena2[] = "Mundo";
    
    cout << "cadena1: " << cadena1 << endl;
    cout << "cadena2: " << cadena2 << endl;
    
    // Concatenar strings
    strcat(cadena1, cadena2);
    cout << "Después de strcat: " << cadena1 << endl;
    
    // Comparar strings
    char str1[] = "abc";
    char str2[] = "abc";
    char str3[] = "xyz";
    
    cout << "Comparando \"" << str1 << "\" con \"" << str2 << "\": " 
         << strcmp(str1, str2) << " (0 = iguales)" << endl;
    cout << "Comparando \"" << str1 << "\" con \"" << str3 << "\": " 
         << strcmp(str1, str3) << " (negativo = str1 < str3)" << endl;
    
    // STD::STRING (CLASE STRING)
    cout << "\n--- STD::STRING ---" << endl;
    
    string mensaje = "¡Hola C++!";
    string nombre = "Ana";
    string apellido = "García";
    
    cout << "mensaje: " << mensaje << endl;
    cout << "nombre: " << nombre << endl;
    cout << "apellido: " << apellido << endl;
    
    // OPERACIONES BÁSICAS CON STD::STRING
    cout << "\n--- OPERACIONES BÁSICAS ---" << endl;
    
    // Concatenación con +
    string nombre_completo = nombre + " " + apellido;
    cout << "Nombre completo: " << nombre_completo << endl;
    
    // Concatenación con +=
    string saludo = "Hola ";
    saludo += nombre;
    saludo += "!";
    cout << "Saludo: " << saludo << endl;
    
    // Longitud
    cout << "Longitud de mensaje: " << mensaje.length() << endl;
    cout << "Longitud con size(): " << mensaje.size() << endl;
    
    // Acceso a caracteres individuales
    cout << "Primer carácter de mensaje: " << mensaje[0] << endl;
    cout << "Último carácter: " << mensaje[mensaje.length() - 1] << endl;
    cout << "Carácter en posición 2: " << mensaje.at(2) << endl;
    
    // MODIFICACIÓN DE STRINGS
    cout << "\n--- MODIFICACIÓN DE STRINGS ---" << endl;
    
    string texto = "Programación";
    cout << "Texto original: " << texto << endl;
    
    // Cambiar un carácter
    texto[0] = 'p';  // Minúscula
    cout << "Después de cambiar primer carácter: " << texto << endl;
    
    // Agregar al final
    texto.push_back('!');
    cout << "Después de push_back: " << texto << endl;
    
    // Insertar en posición específica
    texto.insert(0, "¡");
    cout << "Después de insertar al inicio: " << texto << endl;
    
    // SUBCADENAS
    cout << "\n--- SUBCADENAS ---" << endl;
    
    string frase = "Aprendiendo C++ es divertido";
    cout << "Frase original: " << frase << endl;
    
    // Extraer subcadena
    string subcadena = frase.substr(12, 3);  // Desde posición 12, 3 caracteres
    cout << "Subcadena (posición 12, 3 chars): " << subcadena << endl;
    
    string desde_posicion = frase.substr(15);  // Desde posición 15 hasta el final
    cout << "Desde posición 15: " << desde_posicion << endl;
    
    // BÚSQUEDA EN STRINGS
    cout << "\n--- BÚSQUEDA EN STRINGS ---" << endl;
    
    string texto_busqueda = "El gato subió al tejado del vecino";
    cout << "Texto: " << texto_busqueda << endl;
    
    // Buscar subcadena
    size_t posicion = texto_busqueda.find("gato");
    if (posicion != string::npos) {
        cout << "\"gato\" encontrado en posición: " << posicion << endl;
    } else {
        cout << "\"gato\" no encontrado" << endl;
    }
    
    // Buscar desde una posición específica
    size_t pos_del = texto_busqueda.find("del", 0);
    cout << "Primera ocurrencia de \"del\": " << pos_del << endl;
    
    pos_del = texto_busqueda.find("del", pos_del + 1);
    if (pos_del != string::npos) {
        cout << "Segunda ocurrencia de \"del\": " << pos_del << endl;
    }
    
    // COMPARACIÓN DE STRINGS
    cout << "\n--- COMPARACIÓN DE STRINGS ---" << endl;
    
    string str_a = "apple";
    string str_b = "banana";
    string str_c = "apple";
    
    cout << "str_a: " << str_a << endl;
    cout << "str_b: " << str_b << endl;
    cout << "str_c: " << str_c << endl;
    
    cout << "str_a == str_c: " << (str_a == str_c) << endl;
    cout << "str_a != str_b: " << (str_a != str_b) << endl;
    cout << "str_a < str_b: " << (str_a < str_b) << " (orden alfabético)" << endl;
    
    // CONVERSIÓN Y TRANSFORMACIÓN
    cout << "\n--- CONVERSIÓN Y TRANSFORMACIÓN ---" << endl;
    
    string original = "Hola Mundo";
    string minusculas = original;
    string mayusculas = original;
    
    // Convertir a minúsculas
    transform(minusculas.begin(), minusculas.end(), minusculas.begin(), ::tolower);
    cout << "Minúsculas: " << minusculas << endl;
    
    // Convertir a mayúsculas
    transform(mayusculas.begin(), mayusculas.end(), mayusculas.begin(), ::toupper);
    cout << "Mayúsculas: " << mayusculas << endl;
    
    // Revertir string
    string reverso = original;
    reverse(reverso.begin(), reverso.end());
    cout << "Reverso: " << reverso << endl;
    
    // CONVERSIÓN ENTRE TIPOS
    cout << "\n--- CONVERSIÓN ENTRE TIPOS ---" << endl;
    
    // String a número
    string numero_str = "123";
    int numero_int = stoi(numero_str);
    cout << "String \"" << numero_str << "\" como int: " << numero_int << endl;
    
    string decimal_str = "45.67";
    double numero_double = stod(decimal_str);
    cout << "String \"" << decimal_str << "\" como double: " << numero_double << endl;
    
    // Número a string
    int edad = 25;
    string edad_str = to_string(edad);
    cout << "Int " << edad << " como string: \"" << edad_str << "\"" << endl;
    
    // EJEMPLO PRÁCTICO: VALIDAR EMAIL
    cout << "\n--- VALIDACIÓN SIMPLE DE EMAIL ---" << endl;
    
    string email = "usuario@ejemplo.com";
    cout << "Email a validar: " << email << endl;
    
    bool tiene_arroba = email.find('@') != string::npos;
    bool tiene_punto = email.find('.') != string::npos;
    bool longitud_ok = email.length() >= 5;
    
    if (tiene_arroba && tiene_punto && longitud_ok) {
        cout << "Email parece válido" << endl;
    } else {
        cout << "Email no válido" << endl;
    }
    
    // EJEMPLO: CONTAR PALABRAS
    cout << "\n--- CONTAR PALABRAS ---" << endl;
    
    string frase_palabras = "C++ es un lenguaje poderoso";
    cout << "Frase: " << frase_palabras << endl;
    
    int palabras = 1;  // Al menos hay una palabra si no está vacía
    for (char c : frase_palabras) {
        if (c == ' ') {
            palabras++;
        }
    }
    
    cout << "Número de palabras: " << palabras << endl;
    
    return 0;
}

// DEFINICIONES DE FUNCIONES

// Mostrar C-string carácter por carácter
void mostrar_cstring(const char str[]) {
    cout << "Caracteres: ";
    for (int i = 0; str[i] != '\0'; i++) {
        cout << "'" << str[i] << "' ";
    }
    cout << endl;
}

// Calcular longitud de C-string manualmente
int longitud_cstring(const char str[]) {
    int longitud = 0;
    while (str[longitud] != '\0') {
        longitud++;
    }
    return longitud;
}

// Copiar C-string manualmente
void copiar_cstring(char destino[], const char origen[]) {
    int i = 0;
    while (origen[i] != '\0') {
        destino[i] = origen[i];
        i++;
    }
    destino[i] = '\0';  // Terminar string
}

/*
 * STRINGS - RESUMEN:
 * 
 * C-STRINGS (ARRAYS DE CHAR):
 * - char str[] = "texto";
 * - Terminan con '\0' (carácter nulo)
 * - Funciones en <cstring>: strlen, strcpy, strcat, strcmp
 * - Tamaño fijo, manejo manual de memoria
 * - Más propenso a errores
 * 
 * STD::STRING:
 * - #include <string>
 * - Tamaño dinámico, manejo automático de memoria
 * - Muchos métodos útiles
 * - Más seguro y fácil de usar
 * 
 * OPERACIONES COMUNES CON STD::STRING:
 * - Concatenación: +, +=
 * - Longitud: length(), size()
 * - Acceso: [], at()
 * - Modificación: insert(), push_back(), etc.
 * - Subcadenas: substr()
 * - Búsqueda: find(), rfind()
 * - Comparación: ==, !=, <, >, etc.
 * 
 * CONVERSIONES:
 * - String a número: stoi(), stod(), stof()
 * - Número a string: to_string()
 * - C-string a string: constructor automático
 * - String a C-string: c_str()
 * 
 * FUNCIONES DE CARACTERES (<cctype>):
 * - tolower(), toupper(): convertir case
 * - isdigit(), isalpha(): verificar tipo
 * - isspace(): verificar espacios
 * 
 * ALGORITMOS ÚTILES (<algorithm>):
 * - transform(): aplicar función a cada elemento
 * - reverse(): revertir string
 * - sort(): ordenar caracteres
 * 
 * BUENAS PRÁCTICAS:
 * - Prefiere std::string sobre C-strings
 * - Usa const string& en parámetros para evitar copias
 * - Verifica string::npos en búsquedas
 * - Valida entrada del usuario
 * - Usa métodos específicos (find vs recorrido manual)
 * 
 * CASOS DE USO COMUNES:
 * - Procesamiento de texto
 * - Validación de entrada
 * - Parseo de datos
 * - Manipulación de nombres/rutas de archivos
 * - Construcción de mensajes dinámicos
 */

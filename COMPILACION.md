# Cómo Compilar y Ejecutar los Programas

## Requisitos Previos

Para compilar y ejecutar estos programas necesitas:

### Windows:
1. **MinGW-w64** (recomendado)
   - Descarga desde: https://www.mingw-w64.org/
   - O instala a través de MSYS2: https://www.msys2.org/

2. **Visual Studio** con C++ Build Tools
   - Descarga: https://visualstudio.microsoft.com/vs/community/

3. **Code::Blocks** (IDE con compilador incluido)
   - Descarga: http://www.codeblocks.org/

### Verificar Instalación
Abre PowerShell o CMD y ejecuta:
```bash
g++ --version
```

Si ves información de la versión, está correctamente instalado.

## Comandos de Compilación

### Compilación Básica
```bash
g++ -o programa archivo.cpp
```

### Compilación con C++11 o superior
```bash
g++ -std=c++11 -o programa archivo.cpp
g++ -std=c++14 -o programa archivo.cpp
g++ -std=c++17 -o programa archivo.cpp
```

### Compilación con Debugging
```bash
g++ -g -o programa archivo.cpp
```

### Compilación con Warnings
```bash
g++ -Wall -Wextra -o programa archivo.cpp
```

### Compilación Completa (Recomendada)
```bash
g++ -std=c++17 -Wall -Wextra -g -o programa archivo.cpp
```

## Ejemplos Específicos

### Para Windows (PowerShell/CMD):

#### Compilar Hola Mundo:
```bash
cd "01_fundamentos"
g++ -o hola_mundo hola_mundo.cpp
hola_mundo.exe
```

#### Compilar Variables y Tipos:
```bash
g++ -std=c++17 -o variables variables_tipos.cpp
.\variables.exe
```

#### Compilar Ejercicios Prácticos:
```bash
g++ -std=c++17 -Wall -o ejercicios ejercicios_practicos.cpp
.\ejercicios.exe
```

### Para casos con múltiples archivos:
```bash
g++ -std=c++17 -o programa archivo1.cpp archivo2.cpp archivo3.cpp
```

## Estructura de Comandos por Carpeta

### 📁 01_fundamentos
```bash
cd 01_fundamentos
g++ -o hola_mundo hola_mundo.cpp && hola_mundo.exe
g++ -o variables variables_tipos.cpp && variables.exe
g++ -o operadores operadores.cpp && operadores.exe
g++ -o entrada_salida entrada_salida.cpp && entrada_salida.exe
```

### 📁 02_control_flujo
```bash
cd 02_control_flujo
g++ -o condicionales condicionales.cpp && condicionales.exe
g++ -o bucles bucles.cpp && bucles.exe
```

### 📁 03_funciones
```bash
cd 03_funciones
g++ -o funciones_basicas funciones_basicas.cpp && funciones_basicas.exe
g++ -o parametros_sobrecarga parametros_sobrecarga.cpp && parametros_sobrecarga.exe
```

### 📁 04_arrays_strings
```bash
cd 04_arrays_strings
g++ -o arrays arrays.cpp && arrays.exe
g++ -o strings strings.cpp && strings.exe
```

## Script de Compilación Automática (Batch)

Crea un archivo `compilar.bat` en la carpeta raíz:

```batch
@echo off
echo Compilando todos los programas...

cd 01_fundamentos
g++ -std=c++17 -Wall -o hola_mundo hola_mundo.cpp
g++ -std=c++17 -Wall -o variables variables_tipos.cpp
g++ -std=c++17 -Wall -o operadores operadores.cpp
g++ -std=c++17 -Wall -o entrada_salida entrada_salida.cpp
cd ..

cd 02_control_flujo
g++ -std=c++17 -Wall -o condicionales condicionales.cpp
g++ -std=c++17 -Wall -o bucles bucles.cpp
cd ..

cd 03_funciones
g++ -std=c++17 -Wall -o funciones_basicas funciones_basicas.cpp
g++ -std=c++17 -Wall -o parametros_sobrecarga parametros_sobrecarga.cpp
cd ..

cd 04_arrays_strings
g++ -std=c++17 -Wall -o arrays arrays.cpp
g++ -std=c++17 -Wall -o strings strings.cpp
cd ..

g++ -std=c++17 -Wall -o ejercicios ejercicios_practicos.cpp

echo Compilación completada!
pause
```

## Solución de Problemas Comunes

### Error: 'g++' no se reconoce como comando
**Solución**: Agregar MinGW al PATH del sistema
1. Busca "Variables de entorno" en Windows
2. Edita la variable PATH
3. Agrega la ruta donde está instalado MinGW (ej: `C:\mingw64\bin`)

### Error: undefined reference
**Problema**: Falta enlazar librerías o archivos
**Solución**: 
```bash
g++ -o programa archivo1.cpp archivo2.cpp
```

### Errores de compilación
**Revisa**:
- Sintaxis correcta
- Includes necesarios
- Nombres de variables y funciones
- Llaves y paréntesis balanceados

### El programa se cierra inmediatamente
**Solución**: Agrega al final del main():
```cpp
cout << "Presiona Enter para continuar...";
cin.get();
```

## Herramientas Adicionales

### IDEs Recomendados:
- **Visual Studio Code** (con extensión C++)
- **Code::Blocks**
- **Dev-C++**
- **CLion** (JetBrains, de pago)
- **Visual Studio Community**

### Extensiones útiles para VS Code:
- C/C++ (Microsoft)
- C++ Intellisense
- Code Runner
- CMake Tools

## Depuración (Debugging)

### Compilar con información de debug:
```bash
g++ -g -o programa archivo.cpp
```

### Usar con depurador:
```bash
gdb programa.exe
```

Comandos básicos de GDB:
- `run`: ejecutar programa
- `break main`: poner breakpoint en main
- `step`: ejecutar línea por línea
- `print variable`: ver valor de variable
- `quit`: salir

## Optimización

### Para código de producción:
```bash
g++ -O2 -o programa archivo.cpp
```

### Niveles de optimización:
- `-O0`: sin optimización (default)
- `-O1`: optimización básica
- `-O2`: optimización recomendada
- `-O3`: optimización agresiva
- `-Os`: optimizar para tamaño

¡Ahora puedes empezar a compilar y ejecutar los programas de la guía! 🚀

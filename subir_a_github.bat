# Script para subir a GitHub
# Ejecuta estos comandos uno por uno en PowerShell desde la carpeta del proyecto

# 1. Inicializar repositorio Git
git init

# 2. Agregar todos los archivos
git add .

# 3. Hacer el primer commit
git commit -m "Guía completa de C/C++ - Primera versión

- Fundamentos básicos (variables, operadores, entrada/salida)
- Control de flujo (condicionales, bucles)
- Funciones (básicas, parámetros, sobrecarga)
- Arrays y strings (manipulación, búsqueda, ordenamiento)
- 10 ejercicios prácticos con soluciones
- Guía de compilación detallada"

# 4. Agregar origin remoto
git remote add origin https://github.com/iriverou/RecordandoC-C-.git

# 5. Crear y cambiar a rama main
git branch -M main

# 6. Subir al repositorio
git push -u origin main

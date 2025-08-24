# Caso 1 - rquitectura del Computador y Representación de Datos

### ISIS 1311 -Tecnología e Infraestructura de Cómputo 

---

## Integrantes

- Laura Sofia Vallejo - 202312975 
- Santiago Rodríguez Mora – 202110332 

---

## Estructura del proyecto (resumen)

- **bin/**: ejecutables generados.
- **data/**: archivos de datos.
  - **input/**: imágenes BMP colores para pruebas.
  - **output/**:
    - **c/**: salidas generadas usando la función en C.
    - **asm/**: salidas generadas usando la función en ensamblador.
- **docs/**: documentación del proyecto.
  - **informe/**: aquí va el informe final del caso.
  - **informe/anexos/**: contiene el enunciado del proyecto.
  - **pila/**: imágenes/diagramas utilizados para ilustrar la pila del procedimiento.
- **src/**: código fuente.
  - **c/**:
    - `bitmap.c`: código base entregado (lectura/escritura BMP y versión en C de `convertir_a_grises`).
    - `bitmap_asm.c`: integración de la versión en ensamblador.
  - **asm/**:
    - `convertir_a_grises.inc`: implementación de la función en ensamblador.


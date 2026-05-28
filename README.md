*Este proyecto ha sido creado como parte del currículo de 42 por saperez-.*

#  Libft

##  Descripción

Libft es una librería escrita en C que reimplementa una serie de funciones estándar de la libc, además de añadir utilidades propias y una primera aproximación al trabajo con listas enlazadas.

El objetivo principal del proyecto es comprender el funcionamiento interno de funciones fundamentales del lenguaje C, profundizar en la gestión de memoria dinámica y desarrollar hábitos de programación más limpios, reutilizables y mantenibles.

Durante el desarrollo del proyecto se trabajan conceptos como:

- Manipulación de cadenas y memoria.
- Uso correcto de punteros.
- Gestión de memoria dinámica.
- Casting de tipos.
- Modularidad y reutilización de código.
- Creación y manipulación de listas enlazadas.

La librería generada (`libft.a`) servirá posteriormente como base reutilizable para futuros proyectos del currículo de 42.

---

##  Instrucciones

### Compilación

Para compilar la librería:

```bash
make
```

### Comandos disponibles

| Comando | Acción |
|----------|---------|
| `make` | Compila la librería `libft.a` |
| `make clean` | Elimina los archivos objeto |
| `make fclean` | Elimina objetos y librería |
| `make re` | Recompila todo desde cero |

---

### Uso

Una vez compilada la librería, cualquier programa puede enlazarse utilizando:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft
```

---

##  Características principales

### Funciones básicas

Reimplementación de funciones estándar de la libc relacionadas con:

- cadenas de caracteres,
- memoria,
- conversión de tipos,
- comprobaciones de caracteres,
- escritura en descriptores de archivo.

---

### Funciones adicionales

Funciones auxiliares diseñadas para facilitar futuros desarrollos y fomentar la reutilización de código:

- división de cadenas,
- concatenación segura,
- creación de substrings,
- iteración sobre strings,
- manipulación dinámica de memoria.

---

### Listas enlazadas

Implementación de listas enlazadas simples mediante la estructura `t_list`, incluyendo:

- creación de nodos,
- inserción al inicio y final,
- eliminación de nodos,
- limpieza completa de listas,
- iteración y mapeo sobre listas.

---

##  Algoritmos y estructuras de datos

### Gestión de memoria

Gran parte del proyecto gira en torno al uso correcto de memoria dinámica mediante `malloc`, `free` y funciones relacionadas.

Las implementaciones buscan:

- evitar fugas de memoria,
- proteger frente a comportamientos indefinidos,
- gestionar correctamente casos límite,
- y devolver resultados coherentes incluso ante errores de asignación.

En funciones como `ft_split` o `ft_substr`, se prioriza la seguridad en memoria liberando correctamente recursos ya reservados en caso de fallo parcial.

---

### Complejidad y eficiencia

Las funciones han sido desarrolladas intentando minimizar:

- recorridos innecesarios,
- duplicación de lógica,
- asignaciones redundantes de memoria.

Siempre que ha sido posible, se han reutilizado funciones previamente implementadas para mantener un código modular y legible.

---

### Listas enlazadas

La estructura de datos utilizada es una lista enlazada simple:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

La elección de listas enlazadas permite comprender cómo gestionar estructuras dinámicas en memoria sin necesidad de tamaños fijos, facilitando:

- inserciones dinámicas,
- eliminación eficiente de nodos,
- recorrido secuencial flexible.

Aunque presentan peor acceso aleatorio que arrays tradicionales, son especialmente útiles cuando el tamaño de los datos cambia constantemente.

---

##  Recursos

### Documentación y referencias

- Manuales del sistema (`man`)
- IBM Documentation (`IBM.com/docs`)
- Documentación oficial del lenguaje C
- Material y apuntes de Campus 42

---

### Uso de IA

La inteligencia artificial se ha utilizado únicamente como apoyo conceptual y de documentación, principalmente para:

- comprender determinados valores de retorno,
- aclarar comportamientos específicos de funciones estándar,
- revisar casos límite relacionados con memoria dinámica,
- mejorar la claridad y organización de la documentación.

En particular, fue útil para analizar el comportamiento de `calloc` en situaciones especiales relacionadas con tamaños nulos y gestión posterior mediante `free`.

No se ha utilizado IA para generar automáticamente el proyecto completo ni sustituir el proceso de aprendizaje y desarrollo personal.

---

##  Estructura del proyecto

```text
libft/
├── ft_*.c
├── Makefile
├── libft.h
└── README.md
```

---

##  Aprendizajes

Este proyecto me ha permitido:

- comprender mejor la memoria dinámica,
- mejorar el uso de punteros,
- aprender a estructurar una librería reutilizable,
- escribir código más modular y mantenible,
- introducirme en estructuras dinámicas como las listas enlazadas.

---

<div align="right">

**Campus 42 Madrid**  
 Mayo de 2026

</div>
# Serpientes y Escaleras en C (Tablero Visual)

Este es un proyecto de nivel **intermedio-bajo** desarrollado en C. A diferencia de una implementación básica, esta versión genera un tablero dinámico de 10x10 en la consola que permite rastrear visualmente el movimiento de los jugadores en tiempo real.

## 🚀 Características del Juego
* **Tablero 10x10 Dinámico:** Renderizado en consola con alineación automática de casillas.
* **Sistema de Colisiones:** Lógica programada para detectar escaleras (beneficios) y serpientes (penalizaciones).
* **Multijugador Local:** Soporte para dos jugadores con sistema de turnos alternados.
* **Lógica de Dados:** Uso de `rand()` y `time.h` para asegurar lanzamientos aleatorios y justos.

## 🛠️ Requisitos
* Compilador **GCC** (GNU Compiler Collection).

## 💻 Compilación y Ejecución

Copia y pega el comando según tu sistema para probar el juego:

| Sistema Operativo | Comando de Compilación | Comando de Ejecución |
| :--- | :--- | :--- |
| **Windows** | `gcc game.c -o game.exe` | `./game.exe` |
| **Linux** | `gcc game.c -o game` | `./game` |

<img width="719" height="885" alt="imagen" src="https://github.com/user-attachments/assets/a6dc2d20-2cfc-43b8-bf6c-0ca5000bb33d" />


## 🧠 Conceptos Técnicos Aplicados
Como estudiante de **Sistemas Computacionales**, este proyecto integra:
1. **Algoritmos de Renderizado:** Uso de bucles `for` anidados y aritmética modular para imprimir una cuadrícula simétrica.
2. **Modularización:** Separación de la lógica de dibujo (`dibujarTablero`) de la lógica de juego (`main`).
3. **Control de Estado:** Gestión de variables de posición y validación de límites (no exceder la casilla 100).

## 👤 Autor
**Wilfrido Cruz Merlin** *Estudiante de Ingeniería en Sistemas Computacionales*

---
*Este proyecto forma parte de mi portafolio de aprendizaje en lenguaje C.*

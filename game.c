#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función para dibujar el tablero 10x10 en consola
void dibujarTablero(int p1, int p2) {
    printf("\n========= TABLERO (10x10) =========\n");
    for (int i = 100; i >= 1; i--) {
        // Lógica para mostrar jugadores o número de casilla
        if (i == p1 && i == p2) printf("[P1P2]");
        else if (i == p1) printf("[ P1 ]");
        else if (i == p2) printf("[ P2 ]");
        else printf("[%3d]", i);

        // Salto de línea cada 10 casillas para formar la cuadrícula
        if ((i - 1) % 10 == 0) printf("\n");
    }
    printf("====================================\n");
}

// Función para mover al jugador si cae en serpiente o escalera
int verificarCasilla(int posicion){
    // Escaleras (suben)
    if(posicion == 3) return 22;
    if(posicion == 5) return 8;
    if(posicion == 20) return 41;
    if(posicion == 45) return 70;

    // Serpientes (bajan)
    if(posicion == 27) return 1;
    if(posicion == 50) return 5;
    if(posicion == 66) return 24;
    if(posicion == 99) return 10;

    return posicion;
}

int main(){
    int pos1 = 1, pos2 = 1; // Empezamos en la casilla 1
    int turno = 1; 
    int dado;

    srand(time(NULL));

    printf("\n-- Bienvenido a Serpientes y Escaleras (C Edition) --\n");
    printf("El primero en llegar a 100 gana.\n");

    while (pos1 < 100 && pos2 < 100){
        dibujarTablero(pos1, pos2);
        
        printf("\nEs el turno del jugador %d. Presiona Enter para lanzar el dado...", turno);
        getchar(); 

        dado = (rand() % 6) + 1;
        printf("Lanzaste un: %d\n", dado);

        if(turno == 1){
            pos1 += dado;
            if(pos1 > 100) pos1 = 100;
            
            int nuevaPos = verificarCasilla(pos1);
            if(nuevaPos > pos1) printf("Genial! Subiste por una escalera a la casilla %d.\n", nuevaPos);
            else if(nuevaPos < pos1) printf("Oh no! Una serpiente te bajo a la casilla %d.\n", nuevaPos);
            
            pos1 = nuevaPos;
            printf("Posicion actual Jugador 1: [%d]\n", pos1);
            turno = 2; 
        } else {
            pos2 += dado;
            if(pos2 > 100) pos2 = 100;
            
            int nuevaPos = verificarCasilla(pos2);
            if(nuevaPos > pos2) printf("Genial! Subiste por una escalera a la casilla %d.\n", nuevaPos);
            else if(nuevaPos < pos2) printf("Oh no! Una serpiente te bajo a la casilla %d.\n", nuevaPos);
            
            pos2 = nuevaPos;
            printf("Posicion actual Jugador 2: [%d]\n", pos2);
            turno = 1;
        }
    }

    // Resultado final con tablero actualizado
    dibujarTablero(pos1, pos2);
    if(pos1 >= 100) printf("\nFELICIDADES JUGADOR 1! Has ganado el juego!\n");
    else printf("\nFELICIDADES JUGADOR 2! Has ganado el juego!\n");

    return 0;
}
#include <iostream>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>
#include <cmath>
#include <cstdlib>

using namespace std;


//dimensiones de la ventana
const int WIDTH = 800, HEIGHT = 600;
//dimensiones de los pixeles
const int dw = 8, dh = 16;

//convertir datos a int
void concertir(int p[2], float x, float y) {
	p[0] = int(x) / dw;
	p[1] = int(y) / dh;
}

void concertir(int p[2], int x, int y) {
	p[0] = x / dw;
	p[1] = y/ dh;
}


//Funcion dibujar

void drawpoint(char plano[HEIGHT / dh][WIDTH / dw], int A, int B, char c)
{
	B = HEIGHT / dh - 1 - B;
	if (A < 0 || B < 0 || A >= WIDTH / dw || B >= HEIGHT / dh) return;
	plano[B][A] = c;
}

main() {

	return 0;
}
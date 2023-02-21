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


void concertir(int p[2], float x, float y) {
	p[0] = int(x) / dw;
	p[1] = int(y) / dh;
}

main() {

	return 0;
}
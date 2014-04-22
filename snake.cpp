#include <stdio.h>
#define V 21
#define H 65
#define N 100 //longitud de la serpiente

struct TSnk{
	int x, y; //posicion absoluta
	int ModX, ModY; //posicion relativa 
	char imagen; //ver lo que sucede en cada momento
};

struct TFrt{
	int x, y; //posicion de la fruta
};



//creacion del lugar del juego
void intro_campo(char campo[V][H]){

	for (int i = 0; i < V; i++){
		for (int j = 0; j < H; j++){
			if (i == 0 || i == V - 1){
				campo[i][j] = '=';
			}
			else if (j == 0 || j == H -1){
			 campo[i][j] = '|';
			}
			else {
				campo[i][j] = ' ';
			}
		}
	}
}

//metera todos los datos en la matriz del lugar del juego
void intro_datos(char campo[V][H], int tam){
	//crear coordenadas x e y del resto de la serpiente

	for (int i = 0; i < tam; i++){
		snake[i].x =
	} 

}


void inicio(int *tam, char campo[V][H]){
//coordenadas de la cabeza de la serpiente
	snake[0].x = 32;
	snake[0].y = 10;

//tamanio de la serpiente
	*tam = 4;

//coordenadas fruta
	srand(time(NULL));

	fruta.x = rand() % (H - 1);
	fruta.y = rand() % (V - 1);

//para casos extremosp
	while(fruta.x == 0){
		fruta.x = rand() % (H - 1);
	}
	while(fruta.y == 0){
		fruta.y = rand() % (V - 1);
	}
//movimiento de la serpiente
	for (int i=0; i< *tam; i++){
		snake[i].ModX = 1;
		snake[i].ModY = 0;
	}

	intro_campo(campo);
	intro_datos(campo, *tam);
}


int main(int argc, char const *argv[]){
	
	struct TSnk snake [N];
	struct TFrt fruta;

	int tam;//tamno en cada momento
	char campo[V][H]; //matriz donde estaran todos los elementos

	inicio(&tam, campo);//iniciar todos los elementos	
	return EXIT_SUCCESS;
}
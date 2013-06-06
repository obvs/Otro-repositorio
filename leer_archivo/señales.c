#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>

void rutina(int);

int Fmain(){

	signal(SIGINT,rutina);
	signal(SIGUSR1,rutina);

	while(1){
		printf("Hola Mundo\n");
	}
return 0;
}

void rutina(int i){

	switch (i){

	case SIGINT : printf("llego SIGINT");
	break;
	case SIGUSR1: printf("llego SIGUSR1");
	break;

	}

}



// cuando necesito saber el pid de un proceso que se esta ejecuatando dentro de eclipse escribo lo sgte: pidof ./el_ejecutable

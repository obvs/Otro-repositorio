/*
 * señales2.c
 *
 *  Created on: 04/06/2013
 *      Author: utnso
 */
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void print(int signal){
	printf("SIGUSR1!!!!");

}

int Pmain(int argc, char **argv) {
	signal(SIGUSR1,print);
	raise(SIGUSR1);

	while(1){

		usleep(1000);
	}

	return EXIT_SUCCESS;
}

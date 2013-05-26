/*
 * time.c
 *
 *  Created on: 19/05/2013
 *      Author: utnso
 */

/*
 * hora_Actual.c
 *
 *  Created on: 19/05/2013
 *      Author: utnso
 */



/*
 * hora.c
 *
 *  Created on: 18/05/2013
 *      Author: utnso
 */

#include <stdio.h>
#include <stdlib.h>
#include <commons/temporal.h>


int Gmain(void){

	char *tiempo;

	tiempo=temporal_get_string_time();

	puts(tiempo);

	free(tiempo);


	return 0;

}


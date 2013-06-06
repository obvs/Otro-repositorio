/*
 * read_personaje.c
 *
 *  Created on: 28/05/2013
 *      Author: utnso
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <commons/config.h>
#include <commons/string.h>
#include <commons/collections/list.h>
#include <commons/log.h>

int main(){

	t_config * persona_1 = config_create("/home/utnso//archivo_personajes/mario");

	t_log * loger_personaje = log_create("personaje.log","PERSONAJE",0,LOG_LEVEL_TRACE);
    log_trace(loger_personaje,"los de independiente se van a la B");
    log_debug(loger_personaje,"y no vuelven massss");


    //char ** niveles = config_get_array_value(persona_1,"planDeNiveles");



  typedef struct {

	  char *nombre;
	  char *simbolo;
	  char ** plan_de_niveles ;
	  int  vidas;
	  char * orquestador ;


  } arch_personaje;

   arch_personaje * personaje = malloc(sizeof(arch_personaje));
   personaje->simbolo=config_get_string_value(persona_1,"simbolo");
   personaje->nombre=config_get_string_value(persona_1,"nombre");
   personaje->orquestador=config_get_string_value(persona_1,"orquestador");
   personaje->vidas=config_get_int_value(persona_1,"vidas");
   personaje->plan_de_niveles=config_get_array_value(persona_1,"planDeNiveles");

   char ** niveles = personaje->plan_de_niveles;

   int i=0 ;

   printf("%s\n",personaje->simbolo);
   printf("%s\n",personaje->orquestador);


    while(niveles[i]!='\0'){

    	char *cadena2 = "obj";
    	char *cadena = string_duplicate(cadena2);
        char *cadena1 = string_duplicate(niveles[i]);

        string_append_with_format(&cadena,"[%s]",cadena1); // aca le damos formato : obj[NivelX] para que lo pueda buscar en el arch de config

    char ** obje = config_get_array_value(persona_1,cadena);

        int j=0;
       	 while(obje[j]!='\0'){
        	printf("%s",obje[j]);

        		 j++;
         	 }
        printf("\n");
  	  i++;
   }
return 0;
}







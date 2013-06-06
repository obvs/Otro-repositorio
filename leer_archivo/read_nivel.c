#include <stdio.h>
#include <string.h>
#include <commons/config.h>
#include <commons/string.h>
#include <commons/collections/list.h>

int Cmain(void){

	t_config *  archivo = config_create("/home/utnso//archivos_de_nivel/nivel1");

	char * nombre = config_get_string_value(archivo,"Nombre");
	char * caja1  = config_get_string_value(archivo,"caja1");
	char * caja2  = config_get_string_value(archivo,"caja2");
    char * caja3  = config_get_string_value(archivo,"caja3");

    //////////////
/*    int i=1;
    char* mensaje=malloc(sizeof(10));
    sprintf(mensaje,"caja%d",i);
    t_list* cajas= list_create();


    t_caja unaCaja=(t_caja*)malloc(sizeof(t_caja));
    unaCaja->nombre=vec[0];
    unaCaja->Simbolo=vec[1];

    void _imprimirCajas(t_caja * unaCaja) {
    	printf("Nombre=%s",unaCaja->nombre);
    	printf("Nombre=%s",unaCaja->nombre);
    	printf("Nombre=%s",unaCaja->nombre);
    	printf("Nombre=%s",unaCaja->nombre);
    	printf("Nombre=%s",unaCaja->nombre);
    }
    list_iterate(cajas,(void*)_imprimirCajas);




    list_add(cajas,unaCaja);
    /////////////
*/
   //char** aP = string_get_string_as_array(nombre);

    char ** vec = string_split(caja1,",");

    printf("%s\n",caja2);
    printf("%s\n",caja3);
    printf("%s\n",caja1);

      int i;

	for(i=1;i<strlen(caja1);i++){

	  printf("%s\n",vec[i]);

    }


	return 0;

}

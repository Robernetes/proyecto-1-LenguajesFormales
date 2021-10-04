#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char c[100];
  int i;
  int estado = 0, estadoAnterior;
  int contA = 0, cont = 0;
  printf("Ingresa la cadena: ");
  scanf("%s", c);

  int len;
  len = strlen(c);
  printf("EstadoInicial = %d\n",estado);
  for (i=0; i<len; i++){
    if(c[i] != 'b' && c[i] != 'a'){
      printf("\nCadena rechazada");
      estado = -1;
      exit(0);
    }
    if(c[i]=='b' && estado == 0){
      estado = 0;
      printf("%c ---> Estado: %d\n", c[i], estado);
    }else if(c[i]=='b' && estado == 1){
      estado = 1;
      estadoAnterior = estado;
      printf("%c ---> Estado: %d\n", c[i], estado);
    }else if(c[i]=='b' && estado == 2){
      estado = 2;
      estadoAnterior = estado;
      printf("%c ---> Estado: %d\n", c[i], estado);
    }else if(c[i]=='a' && estado == 0){
      estado = 1;
      estadoAnterior = estado;
      printf("%c ---> Estado: %d\n", c[i], estado);
    }else if(c[i]=='a' && estado == 1){
      estado = 2;
      estadoAnterior = estado;
      printf("%c ---> Estado: %d\n", c[i], estado);
    }else if(c[i]=='a' && estado == 2){
      estado = 0;
      estadoAnterior = estado;
      printf("%c ---> Estado: %d\n", c[i], estado);
    }
    cont++;
  }
  
  if( cont == len && estado == 0){
    printf("\nCadenaa Aceptada");
    printf("\nCadena: %s",c);
    printf("\nLenght: %d",len);
  }else{
    printf("\nCadena rechazada");
  }

  return 0;
}

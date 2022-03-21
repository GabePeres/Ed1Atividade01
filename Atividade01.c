#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char vetor_string[30];
  int numero_converter= 7;
  int temp;

  itoa(numero_converter,vetor_string,2); //Resultado certo, porém em String
  temp=atoi(vetor_string);//111 => cento e onze
  printf("%i\n",temp );

}

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct{
  char carne[100];
  int validade;
}Churras; 

void swap(Churras *valor1, Churras *valor2){
  Churras temp = *valor1;
  *valor1 = *valor2;
  *valor2 = temp;
}
void bubble_sort(Churras *valores, int tamanho){

  if (tamanho < 1) return;
  int i;
  for( i = 0; i < tamanho; i++){
    if (valores[i].validade > valores[i + 1].validade){
      swap(&valores[i], &valores[i + 1]);
    }
  }

  bubble_sort(valores, tamanho - 1); 
}
int main() {
 int E ;
 int j;
 char resultados[1000][100];
 while(scanf("%d",&E)!= EOF){
   Churras roberto[E];
   int i;
   for(i=0; i<E ;i++){   
     Churras craudio;
     scanf("%s %d",craudio.carne,&craudio.validade);
     roberto[i] = craudio;   
   }
  bubble_sort( roberto, E-1);
  for ( i = 0; i < E ;i++){

    }
  printf("%s ", roberto[i].carne);
  }
  printf("\n"); 

  return 0;
}

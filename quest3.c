//Gere um vetor aleatoriamente com até 100 números. 
//Depois conte quantos deles são pares, mostre o vetor e a quantidade de números pares encontrados

#include<stdio.h>
#include<windows.h>

int main(){
  system("cls");

  int SIZE = 100;
  int cont = 0;

   int array[SIZE];
   for (int i=0; i < SIZE; i++){
    
    array[i] = rand()%100;
  printf("\n%d: inseriu %d",i,array[i]);
   if (array[i] %2 == 0){
    cont++;
    printf("\n numero e par");
   }

   }

  for (int i = 0; i < SIZE; i++)
  {
    printf("\n%d",array[i]);
  }
  printf("\na quantidade de vezes em que foi contado os numeros pares foi de %d",cont);
  return 0;
}


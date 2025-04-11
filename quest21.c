#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main(){

  system("cls");
  SetConsoleOutputCP(65001);
  int quant;
  printf("qual a quantidade de produtos em estoque: ");
  scanf("%d",&quant);

  float soma = 0;
  for (int i=0;i<quant;i++){
    float valor;
    printf("qual o valor do %d° produtos R$",i+1);
    scanf("%f",&valor);
    soma+=valor;
  }
  float media=soma/quant;
  printf("o valor da media e %f ",media);
  
}
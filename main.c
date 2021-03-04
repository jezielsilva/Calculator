#include <stdio.h>
#include <stdlib.h>
float opcao, numero, numero1, resultado;
int vetor[100], i=0, key;

void armazena(float numero){
  vetor[i] = numero;
  i++;
}
void soma(numero, numero1){
  resultado = numero+numero1;
  printf("A soma e: %2.f\n", resultado);
  armazena(resultado);
}
void subtracao(numero, numero1){
  resultado = numero-numero1;
  printf("A subtracao e: %2.f\n", resultado);
  armazena(resultado);
}
void multiplicacao(numero, numero1){
  resultado = numero*numero1;
  printf("A multiplicacao e: %2.f\n", resultado);
  armazena(resultado);
}
void divisao(numero, numero1){
  resultado = numero/numero1;
  printf("A divisao e: %2.f\n", resultado);
  armazena(resultado);
}

int main() {
  printf(">>> CALCULATOR <<< \n\n");
  printf("1 - SOMA\n");
  printf("2 - SUBTRACAO \n");
  printf("3 - MULTIPLICACAO \n");
  printf("4 - DIVISAO \n");
  printf("0 - RESULTADOS \n");
  scanf("%f", &opcao);
  
  if(opcao == 1){
    resultado = 0;
    printf(">>> SOMA <<<\n\n");
    printf("Digite os numeros para a soma:\n");
    scanf("%f", &numero);
    scanf("%f", &numero1);
    soma(numero, numero1);
    main();
  }
  if(opcao == 2){
    resultado = 0;
    printf(">>> SUBTRACAO <<<\n\n");
    printf("Digite os numeros para a subtracao:\n");
    scanf("%f", &numero);
    scanf("%f", &numero1);
    subtracao(numero, numero1);
    main();
  }
  if(opcao == 3){
    resultado = 0;
    printf(">>> MULTIPLICACAO <<<\n\n");
    printf("Digite os numeros para a multiplicacao:\n");
    scanf("%f", &numero);
    scanf("%f", &numero1);
    multiplicacao(numero, numero1);
    main();
  }
  if(opcao == 4){
    resultado = 0;
    printf(">>> DIVISAO <<<\n\n");
    printf("Digite os numeros para a divisao:\n");
    scanf("%f", &numero);
    scanf("%f", &numero1);
    divisao(numero, numero1);
    main();
  }
  if(opcao == 0){
    for(i=0;i<=100;i++){
      if(vetor[i]!= 0){
        printf("%d - ", vetor[i]);
      }
    }
  }
}
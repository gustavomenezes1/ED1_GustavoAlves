#include<stdio.h>

int main(void){
   float a,b,c;
   float valor;
   float aux;

   printf("<< Loteria >>\n");
   printf("Bol�o jogador 1 R$: ");
   scanf("%f",&a);
   printf("Bol�o jogador 2 R$: ");
   scanf("%f",&b);
   printf("Bol�o jogador 3 R$: ");
   scanf("%f",&c);
   printf("Informe o valor do pr�mio:");
   scanf("%f",&valor);

   aux = valor/(a+b+c);

   printf("Jogador 1 receber� R$: %.1f\n",a*aux);
   printf("Jogador 2 receber� R$: %.1f\n",b*aux);
   printf("Jogador 3 receber� R$: %.1f\n",c*aux);

    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	float aumento, salario;
	 int funcionario;
   printf("Digite seu salario:");
   scanf("%f",&salario);
   printf("Seu salario e %f\n",salario);
   if (salario>=0.0&&salario<=400.00)   { aumentos=0.15;salario=salario+(aumento*salario); }
   if (salario>=400.01&&salario<=700.0) { aumentos=0.12;salario=salario+(aumento*salario); }
   if (salario>=700.01&&salario<=1000.0) { aumentos=0.10;salario=salario+(aumento*salario); }
   if (salario>=1000.01&&salario<=1800.0) { aumentos=0.07;salario=salario+(aumento*salario); }
   if (salario>=1800.01&&salario<=2500.0) { aumentos=0.04;salario=salario+(aumento*salario); }
   if (salario>2500) aumento=0;
   printf(" %f e o seu salario ficou igual a %f\n", funcionario,salario,aumento);
   }

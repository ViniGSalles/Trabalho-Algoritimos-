#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	float A, r, h, pi, lata, qtd, Custo;
	scanf("&f",&r);
	scanf("%f",&h);
	pi=3.14;
	A = (pi*r*r) + (2*pi*r*h);
	printf("Valor da area: %f \n",A)/
	lata = A/(5*3);
	qtd = ceil(lata);
	printf("Quantidade de latas: %f \n", qtd);
	Custo = qtd*50;
	printf("Custo da compra de tinta: %f \n", Custo);
}

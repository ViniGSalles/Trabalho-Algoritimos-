#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	int cedula, n100, n50, n20, n10, n5, n2, n1;
	printf("insira o valor da cedula \n");
	scanf("%d",&cedula);
	n100 = cedula/100;
	cedula = cedula%100;
	n50 = cedula/50;
	cedula= cedula%50;
	n20 = cedula/20;
	cedula = cedula%20;
	n10 = cedula/10;
	cedula = cedula%10;
	n5 = cedula/5;
	cedula = cedula%5;
	n2 = cedula/2;
	cedula = cedula%2;
	n1 = cedula/1;
	cedula = cedula%1;
	printf("%d nota de 100\n%d nota de 50\n%d nota de 20\n%d nota de 10\n%d nota de 5\n%d nota de 2\n%d nota de 1",n100, n50, n20, n10, n5, n2, n1);
}

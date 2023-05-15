#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	float c1, c2, H;
	printf("Primeito cateto");
	scanf("%f",&c1);
	printf("Segundo cateto");
	scanf("%f",&c2);
	H=(c1*c2)+(c2*c2);
	printf("O valor da hipotenusa %f", sqrt(H));
}

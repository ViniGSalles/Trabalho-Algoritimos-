#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	float x, y, consumo;
	printf("Indique a distancia que o veiculo percorreu em Km: \n");
	scanf("%f",&x);
	printf("Indique o consumo gasto de gasolina: \n ");
	scanf("%f",&y);
	consumo = x/y;
	printf("O valor do consumo medio: %f \n", consumo);
}

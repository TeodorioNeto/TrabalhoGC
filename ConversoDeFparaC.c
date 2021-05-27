#include<stdio.h>


int main()
{
	float temperaturaC,temperaturaF;
	
	printf("Insira a temperatura em Fahrenheit:\n");
	
	scanf("%f",&temperaturaF);
	
	temperaturaC=(temperaturaF-32)/1.8;
	
	printf("%.2f graus Fahrenheit = %.2f graus Celsius.\n",temperaturaF,temperaturaC);
}
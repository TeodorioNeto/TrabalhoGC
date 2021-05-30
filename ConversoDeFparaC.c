#include<stdio.h>


int main()
{
	float temperaturaC,temperaturaF;
	
	
	temperaturaF=100;
	
	temperaturaC=(temperaturaF-32)/1.8;
	
	printf("%.2f graus Fahrenheit = %.2f graus Celsius.\n",temperaturaF,temperaturaC);
}

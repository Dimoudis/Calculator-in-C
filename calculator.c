#include <stdio.h>
#include <stdlib.h>

double x, y;
char op;

int main (){
	
	printf("Valte ton telesti (+, -, *, /): ");
	scanf("%c",&op);
	
	printf("\nValte ton 1o arithmo: ");
	scanf("%lf",&x);
	
	printf("\nValte ton 2o arithmo: ");
	scanf("%lf",&y);	
	
	switch(op)
	{
	case '+':
		printf("%.2f + %.2f = %.2f",x,y,(x+y));
		break;
		
	case '-':
		printf("%.2f - %.2f = %.2f",x,y,(x-y));
		break;
		
	case '/':
		if(y!=0.0)
			printf("%.2f / %.2f = %.2f",x,y,(x/y));
		else
			printf("\nDe mporeis na dieresis me to 0!");
		break;
		
	case '*':
		printf("%.2f * %.2f = %.2f",x,y,(x*y));
		break;
		
	default:
		printf("Lathos telestis!");
	}
}





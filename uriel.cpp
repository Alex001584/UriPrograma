#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main()
{
	
	printf("-----------QUESADILLAS DEL URIEL-------------\n");
	float chorizo,quesa,dia;
	
	do
	{
		printf("al uriel le gusta el chorizo, cuanto chorizo compro? (en g)\n");
		scanf("%f",&chorizo);
		
		quesa=round(chorizo/5);
		dia=round(quesa/7);
		
		printf("el uriel comeria quesadillas por %0.0f dias con tu miseria",dia);
			
	}
	
	
}

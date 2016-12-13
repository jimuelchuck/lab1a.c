#include<stdio.h>
#include<math.h>

int main()
{
	int number1, number2, number3, Average;
	
	printf("Enter grade 1= ");
	scanf("%d", &number1);
	printf("Enter grade 2= ");
	scanf("%d", &number2);
	printf("Enter grade 3= ");
	scanf("%d", &number3);
	printf("%d", Average=(number1+number2+number3)/3);
}

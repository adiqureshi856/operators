#include <stdio.h>
#include <stdlib.h>
int main() {
	 int n1;
	 int n2;
	 printf("\n Enter first number");
	 scanf("%d",&n1);
	 printf("\n Enter Second number");
	 scanf("%d",&n2);
	int sum= n1+n2;	
	int diff= n1-n2;
	int prod = n1* n2;
	int quot = n1/n2;
	printf("\n Sum of two numbers = %d", sum);
	printf("\n Difference of two numbers = %d", diff);
	printf("\n product of two numbers = %d", prod);
	printf("\n Divison of two numbers = %d", quot);
				return 0;
}

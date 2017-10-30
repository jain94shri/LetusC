#include <stdio.h>

int main()
{
	int C,D,temp;
	printf("Enter the number at location C:");
	scanf("%d", &C);
	printf("Enter the number at location D:");
	scanf("%d", &D);
	temp=C;
	C=D;
	D=temp;
	printf("Number at location C is=%d\n", C);
	printf("Number at location D is=%d\n", D);
	return 0;
}

#include <stdio.h>

int main()
{
	int base_sal=0, total_sal=0;
	printf("Enter the basic salary of Ramesh:=");
	scanf("%d", &base_sal);
	total_sal= .4*base_sal+.2*base_sal+base_sal;
	printf("Ramesh's total salary is:%d\n", total_sal);
	return 0;
}

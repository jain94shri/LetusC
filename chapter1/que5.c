#include <stdio.h>
#define pi 3.14
int main()
{
	float l=0,b=0,r=0;
	printf("Enter the length of rectangle:=");
	scanf("%f", &l);
	printf("\nEnter the breadth of rectangle:=");
	scanf("%f", &b);
	printf("\nEnter the radius of circle:=");
	scanf("%f", &r);
	printf("\nArea of rectangle is =%f\n",l*b);	
	printf("\nArea of circle is =%f\n",pi*r*r);
	printf("\n Perimeter of rectangle=%f\n",2*(b+l));
	printf("\n Perimeter of circle =%f\n",2*pi*r);
	return 0;
}

#include <stdio.h>

int main()
{
	float l,b;
	printf("Enter the dimesion of A0(length*breadth)");
	scanf("%f%f", &l,&b);
        for(int i=1; i <=8;i++){
	printf("Dimesion of A%d paper is : %.2f X  %.2f\n ", i ,l, b );
	b=b/2;
	}
	return 0;
}


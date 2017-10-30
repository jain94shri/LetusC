#include <stdio.h>

int main()
{
	float  temp=0;
	printf("Enter the temperature  (in Fahernheit ):=");
	scanf("%f", &temp);
	printf("Temperature in degree centgarde is :%f\n", (temp-32)*5/9);
	return 0;
}

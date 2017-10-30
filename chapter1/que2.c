#include <stdio.h>

int main()
{
	double distance=0;
	printf("Enter the distance between A and B city (in km ):=");
	scanf("%lf", &distance);
	printf("Distance in meters=%lf\n",1000*distance);
	printf("Distance in feet=%lf\n",3280.84*distance);
	printf("Distance in cm =%lf\n", 100000*distance);
	printf("Distance in inches=%lf\n", 39370.1*distance);
	return 0;
}

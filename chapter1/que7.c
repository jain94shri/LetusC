#include <stdio.h>

int main()
{
	float price=0, profit=0.0, cp=0.0;
	printf("Selling price for 15 items is :=");
	scanf("%f", &price);
	printf("Profit for 15 items is := ");
	scanf("%f", &profit);
	cp=(price-profit)/15;
	printf("Cost Price is for one item is =%f\n", cp);
	return 0;
}

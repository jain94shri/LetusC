#include <stdio.h>

int main()
{
	float sub1=0.0,sub2=0.0,sub3=0.0,sub4=0.0, sub5=0.0, aggregate=0.0;
	printf("Enter the marks in Subject 1 :=");
	scanf("%f",&sub1);
	if(sub1>100.0||sub1<0.0)
	goto err1;
	printf("\nEnter the marks in Subject 2 :=");
	scanf("%f",&sub2);
	if(sub2>100.0||sub2<0.0)
	goto err1;
	printf("\nEnter the marks in Subject 3 :=");		
	scanf("%f",&sub3);
	if(sub3>100.0||sub3<0.0)
	goto err1;
	printf("\nEnter the marks in Subject 4 :=");
	scanf("%f",&sub4);
	if(sub4>100.0||sub4<0.0)
	goto err1;
	printf("\nEnter the marks in Subject 5 :=");
	scanf("%f",&sub5);
	if(sub5>100.0||sub5<0.0)
	goto err1;
	aggregate=(sub1+sub2+sub3+sub4+sub5);
	printf("\nAggregate  marks are :=%.2f",aggregate);
	printf("\nPercentages obatained by student is :%.2f%%", aggregate*100/500);
err1:
	printf("\n please enter correct marks.");
	return 0;
}

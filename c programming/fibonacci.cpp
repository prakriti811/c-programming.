#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,a=0,b=1,next;
	printf("enter the number of fibonacci terms=");
	scanf("%d",&n);
	printf("Fibonacci series:");
	for(i=0;i<n;i++)
	{
		printf("%d",a);
		next=a+b;
		a=b;
		b=next;
	}
	printf("\n");
	return 0;
}

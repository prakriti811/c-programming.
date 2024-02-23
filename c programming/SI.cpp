#include<stdio.h>
#include<conio.h>
int main()
{
	int p,t,r,si;
	printf("enter the principle amount=");
	scanf("%d",&p);
	printf("enter the time=");
	scanf("%d",&t);
	printf("enter the rate=");
	scanf("%d",&r);
	si=(p*t*r)/100;
	printf("simple interest is=%d\n",si);
	getch();
	return 0;
	
}

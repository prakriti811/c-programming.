#include<stdio.h>
#include<conio.h>
int main()
{
	int n,sum=0;
	printf("enter the value of n=");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("sum of the series=%d\n",n,sum);
	getch();
	return 0;
}

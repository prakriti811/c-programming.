//Find the largest number among the three numbers
#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,z;
	printf("enter any three numbers=");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y&&x>z)
	{
		printf("x is largest=%d",x);
	}
	else if(y>x&&y>z)
	{
		printf("y is the largest=%d",y);
	}
	else
	{
		printf("z is largest=%d",z);
	}
	getch();
	return 0;
}

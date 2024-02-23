#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("enter a number=");
	scanf("%d",&n);
	if(n==0)
	{
		printf("0 is neither negative nor positive\n");}
		else if(n<0)
		{
			printf("%d is negative\n",n);
		}else{
			printf("%d is positive\n",n);
		}
		getch();
		return 0;
}


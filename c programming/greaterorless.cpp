#include<stdio.h>
#include<conio.h>
int main()
{
	int num,N1,N2;
	printf("enter a number=");
	scanf("%d",&num);
	printf("enter N1=");
	scanf("%d",&N1);
	printf("enter N2=");
	scanf("%d",&N2);
	if(num>N1 && num<N2 && num%7==0)
	{
		printf("%d satisfies the condition",num);
	}else{
		printf("%d does not satisfy the conditions",num);
	}
	getch();
	return 0;
}

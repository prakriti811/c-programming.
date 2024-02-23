#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i=0,a,b;
	printf("enter a number=");
	scanf("%d",&num);
	printf("prime factors are %d",num);
	while (i<=num)
	{
		b=0;
		if(num%i==0)
		{
			a=1;
			while(a<=1)
			{
				if(i%a==0)
				b++;
				
				a++;
			}
			if(b==2)
			printf("%d\n",i);
			
			i++;
		}
	}
	getch();
	return 0;
}

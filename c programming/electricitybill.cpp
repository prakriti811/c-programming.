#include<stdio.h>
#include<conio.h>
int main()
{
	int units;
	float bill=0;
	printf("enter the number of units consumed=");
	scanf("%d",&units);
	if(units<=20)
	{
		bill=units*80;
	}else if(units<=120){
		bill=20*8+100*8+(units-120)*10;
	}
	printf("electricity bill=rs.%2f\n",bill);
	getch();
	return 0;
}

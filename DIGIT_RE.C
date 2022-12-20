#include<stdio.h>
#include<conio.h>
int sum=0,num=0;
int digit(int n)
{
	if(n>0)
	{
		sum = sum + (n%10);
		digit(n/10);
	}
	return(sum);
}

void main()
{
	clrscr();
	printf("Enter the number");
	scanf("%d",&num);

	sum = digit(num);

	printf("The Number OF All Digit Is %d",sum);
	getch();
}


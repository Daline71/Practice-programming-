#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,i,value1,value2;
	printf("Enter two numbers:  ");
	scanf("%d%d",&a,&b);
	if(a>b)
    {
    	for(i=1;i<=b;i++)
    	{
    		if((a%i==0)&&(b%i==0))
    		value1==i;
		}
		printf("\nGratest common divisor is:  %d",value1);
	}
	else
	{
	    for(i=1;i<=a;i++)
    	{
    		if((a%i==0)&&(b%i==0))
    		value2==i;
		}
		printf("\nGratest common divisor is:  %d",value2);	
	}
	return 0;
}

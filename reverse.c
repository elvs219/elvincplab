/*             Program to find the reverse of a number

AUTHOR: ELVIN SEBASTIAN
DATE: 13/02/19*/


#include <stdio.h>
void main()
	{
		int number,rev=0,rem;
		printf("enter the number:");
		scanf("%d",&number);
		while(number!=0)
			{
				rem=number%10;
				rev=rev*10+rem;
				number=number/10;
			}
		printf("reverse of number is %d",rev);
	}

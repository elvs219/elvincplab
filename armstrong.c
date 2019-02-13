/*          Program to find whether a number is armstrong number

AUTHOR: ELVIN SEBASTIAN
DATE: 13/02/19*/


#include <stdio.h>
void main()
	{
		int number,cube=0,rem,copy;
		printf("enter the number:");
		scanf("%d",&number);
		copy=number;
		while(number!=0)
			{
				rem=number%10;
				cube=cube+(rem*rem*rem);
				number=number/10;
			}
		if(copy==cube)
			printf("%d is armstrong number",copy);
		else
			printf("%d is not armstrong number",copy);
			
	}

/*          Program to find whether a number is palindrome

AUTHOR: ELVIN SEBASTIAN
DATE: 13/02/19*/



#include <stdio.h>
void main()
	{
		int number,rev=0,rem,copy;
		printf("enter the number:");
		scanf("%d",&number);
		copy=number;
		while(number!=0)
			{
				rem=number%10;
				rev=rev*10+rem;
				number=number/10;
			}
		if(rev==copy)
			printf("%d is palindrome",copy);
		else
			printf("%d is not palindrome",copy);
			
	}

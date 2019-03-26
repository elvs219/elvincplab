/*Write a program to receive an integer and find its octal equivalent.


AUTHOR: ELVIN SEBASTIAN
DATE: 06/03/19*/


#include <stdio.h>
void main()
	{
		int number,i,rem,octal=0;
		printf("enter the integer:");
		scanf("%d",&number);
		i=1;
		while(number!=0)
			{
				rem=number%8;
				octal=octal+rem*i;
				number=number/8;
				i=i*10;
			}
		printf("%d",octal);
	}

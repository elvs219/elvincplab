/*          Write a function to find the binary equivalent of a given decimal integer and display it.

AUTHOR: ELVIN SEBASTIAN
DATE: 20/03/19*/

#include <stdio.h>
void binary(int num);
void main()
	{
		int number;
		printf("enter the integer:");
		scanf("%d",&number);
		binary(number);
	}

void binary(int num)
	{
		int i=1,binary=0,rem;
		while(num!=0)
			{
				rem=num%2;
				binary=binary+rem*i;
				num=num/2;
				i=i*10;
			}
		printf("%d",binary);
	}

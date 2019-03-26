/*          Program to find whether sum of series

AUTHOR: ELVIN SEBASTIAN
DATE: 06/03/19*/



#include <stdio.h>
void main()
	{
		float sum=0,i=1,fact=1;
		while(i<=7)
			{
				fact=fact*i;
				sum=sum+(1/fact);
				i=i+1;
			}

		printf("sum of series is %f",sum);
			
	}

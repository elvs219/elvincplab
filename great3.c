/*             Program to find the greatest of 3 nos

AUTHOR: ELVIN SEBASTIAN
DATE: 06/02/19*/


#include <stdio.h>
void main()
{
	int num1,num2,num3;
	printf("enter num1,num2,num3:");
	scanf("%d%d%d",&num1,&num2,&num3);
/*check whether num1 is greater than num2 and num3*/
	if(num1>num2 & num1>num3)
		{
			printf(" %d is greater", num1);
		}
	/*check whether num2 is greater than num1 and num3*/
	else
		{
			if(num2>num1 & num2>num3)
				printf(" %d is greater", num2);
			else
				printf(" %d is greater", num3);
		}
}

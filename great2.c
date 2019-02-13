/*             Program to find the greatest of 2 nos

AUTHOR: ELVIN SEBASTIAN
DATE: 06/02/19*/


#include <stdio.h>
void main()
{
	int num1,num2;
	printf("enter num1 and num2:");
	scanf("%d%d",&num1,&num2);
	/*check whether num1 is greater than num2*/
	if(num1>num2)
		{
		printf(" %d is greater", num1);
		}
	else
		{
		printf(" %d is greater", num2);
		}
}

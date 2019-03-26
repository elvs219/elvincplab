/*          Multiplication table
AUTHOR: ELVIN SEBASTIAN
DATE: 06/03/19*/



#include <stdio.h>
void main()
	{
		int num,i=1,pro;
		printf("enter num");
		scanf("%d",&num);
		for(i=1;i<=10;i++)
			{
				pro=num*i;
				printf("%d * %d = %d\n",num,i,pro);
			}
			
	}

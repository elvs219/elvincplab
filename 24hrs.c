/* Write a program to print 24 hours of a day with suitable suffixes like AM, PM , Noon and Midnight.

Example:

12 Midnight

1 AM

.

.

.

.

12 Noon

..

.

.

.5 PM  */

#include <stdio.h>
void main()
{
	int i,j;
	printf("12 Midnight\n");
	for (i=1;i<12;i++)
		{
			printf("%d am\n",i); 
		}
	printf("12 Noon\n");
	for (j=1;j<12;j++)
		{
			printf("%d pm\n",j); 
		}
}
	


/*          Write a function that receives marks received by a student in 3 subjects and returns the average and percentage of these marks. Call this function from main( ) and print the results in main( ).

AUTHOR: ELVIN SEBASTIAN
DATE: 20/03/19*/

#include <stdio.h>
void marks(int M1,int M2, int M3);
void main()
	{
		int m1,m2,m3;
		float avg,per;
		printf("enter m1,m2,m3 out of 50: ");
		scanf("%d%d%d",&m1,&m2,&m3);
		marks(m1,m2,m3);
			
	}

void marks(int M1,int M2, int M3)
	{
		float avg,sum,per;
		sum=M1+M2+M3;
		avg=sum/3;
		per=(avg/50)*100;
		printf("avg is %f\npercentage is %f",avg,per);
	}


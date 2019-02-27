/*Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter .For example, the area of the rectangle with length =5 and breadth=4 is greater than its perimeter.

AUTHOR: ELVIN SEBASTIAN
DATE: 20/02/19 */

#include <stdio.h>
void main()
{
	float length,breadth,area,perimeter;
	printf("enter length & breadth: ");
	scanf("%f%f",&length,&breadth);
	area=length*breadth;
	perimeter=2*(length+breadth);
	if(area>perimeter)
		{
		printf("area of rectangle is greater than its perimeter");
		}
	else
		{
		printf("perimeter of rectangle is greater than its area");
		}
}

/*          Write a function which receives a float and an int from main( ), finds the product of these two and returns the product which is printed through main( ).

AUTHOR: ELVIN SEBASTIAN
DATE: 20/03/19*/

#include <stdio.h>
float product(float a,int b);
float main()
	{
		float a,prod;
		int b;
		printf("enter a and b: ");
		scanf("%f%d",&a,&b);
		prod=product(a,b);
		printf("product of %f & %d is %f",a,b,prod);
			
	}

float product(float a,int b)
	{
		float c;
		c=a*b;
		return c;
	}

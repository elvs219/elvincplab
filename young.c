/*If ages of Ram, Shyam and Ajay are input through the keyboard. Write a programme to determine the youngest of the three.*/

#include <stdio.h>
void main()
{
	int age1,age2,age3;
	printf("Enter Ages: ");
	scanf("%d%d%d",&age1,&age2,&age3);
	if(age1<age2 && age1<age3 )
		{
		printf("Ram is youngest");
		}
	if(age2<age1 && age2<age3 )
		{
		printf("Shyam is youngest");
		}
	if(age3<age1 && age3<age2 )
		{
		printf("Ajay is youngest");
		}
}

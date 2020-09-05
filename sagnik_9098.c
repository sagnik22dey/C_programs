#include<stdio.h>
int main()
{
	int maths,phys,chem;
	printf("Enter the marks in mathematics: ");
	scanf("%d",&maths);
	printf("Enter the marks in physics: ");
	scanf("%d",&phys);
	printf("Enter the marks in chemistry: ");
	scanf("%d",&chem);
	if(maths>=60 && phys>=50 && chem>=40 && ((maths+phys+chem)>=200 || (maths+phys))>=150)
	{
	printf("You are passed the criteria of marks\nYou are Elligible for Admission");
	}
	else
	{printf("You are not passed the criteria of marks\nYou are not Elligible for Admission");
	}
	return 0;
}

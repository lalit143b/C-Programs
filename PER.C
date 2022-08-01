#include<stdio.h>
#include<conio.h>
void main()
{
	float s1, s2, s3, s4, s5, tot, per;
	clrscr();
	printf("\nEnter Marks of Subject 1 Out of 100: ");
	scanf("%f",&s1);
	printf("\nEnter Marks of Subject 2 Out of 100: ");
	scanf("%f",&s2);
	printf("\nEnter Marks of Subject 3 Out of 100: ");
	scanf("%f",&s3);
	printf("\nEnter Marks of Subject 4 Out of 100: ");
	scanf("%f",&s4);
	printf("\nEnter Marks of Subject 5 Out of 100: ");
	scanf("%f",&s5);
	tot=s1+s2+s3+s4+s5;
	per=tot/5;
	printf("\nTotal Marks:%.2f",tot);
	printf("\nPercentage:%.2f%",per);
	printf("\n\n\n\n*********Press any key to EXIT**************");
	getch();
}

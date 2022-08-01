#include<stdio.h>
#include<conio.h>
void main()
{
	int n1, n2, n3, n4;
	clrscr();
	printf("\nEnter n1: ");
	scanf("%d",&n1);
	printf("\nEnter n2: ");
	scanf("%d",&n2);
	printf("\nEnter n3: ");
	scanf("%d",&n3);
	n4=n1;
	n2=n3;
	n3=n2;
	n3=n4;
	printf("\n n1: %d \n n2: %d \n n3: %d", n1,n2,n3);
	printf("\n\n\n\n*********Press any key to EXIT**************");
	getch();
}

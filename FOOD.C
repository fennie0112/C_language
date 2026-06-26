#include<stdio.h>
#include<conio.h>
void main()
{
	int food;
	clrscr();
	printf("Enter your food: ");
	scanf("%d",&food);
	switch(food){
		case 1:
			printf("Korean menu");
			break;
		case 2:
			printf("Mexican menu");
			break;
		case 3:
			printf("italian menu");
			break;
		case 4:
			printf("japanese menu");
			break;
		case 5:
			printf("indian  menu");
			break;
		default:
			printf("Your choice is invalid");


	}
	getch();
}
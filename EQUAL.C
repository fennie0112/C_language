/*AUTHOR = Fennie Tatmiya
  DOC    = June 24,2026
  OBJ    = Equal or not
  */ #include<stdio.h>
     #include<conio.h>
     void main() {
     int hi;
     int bye;
     clrscr();

     printf("enter a value for num1 = ");
     scanf("%d",&hi);
     printf("\nenter a value for num2 = ");
     scanf("%d",&bye);

     if(hi==bye) {
	printf("num1 and num2 are equal");
     }

     else if(hi>bye) {
	printf("num1 is greater than num2");
     }

     else {
	printf("num1 is less tan num2");
     }

      getch();
     }

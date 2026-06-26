/*AUTHOR =  Fennie Tatmiya
  DOC    =  June 24,2026
  OBJ    =  Psitive or Negative
  */#include<stdio.h>
    #include<conio.h>
    void main() {
    int n;
    clrscr();

    printf("enter a value of number = ");
    scanf("%d",&n);

    if(n>=0)
    {
	  printf("Number is Positive");
    }
    else {
	 printf("Number is Negative");
    }
    getch();
    }
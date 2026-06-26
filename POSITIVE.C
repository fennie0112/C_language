/*AUTHOR = Fennie Tatmiya
  DOC    = June 26,2026
  OBJ    = psitive or negative
  */#include<stdio.h>
    #include<conio.h>
    void main() {
    int a;
    clrscr();
    printf("enter a number = ");
    scanf("%d",&a);
    (a < 0)?printf("The number is Negative "):printf("The number is positive");
    getch();
    }
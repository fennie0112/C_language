/*AUTHOR = Fennie Tatmiya
  DOC    = June 26, 2026
  OBJ    = ternary operator
  */#include<stdio.h>
    #include<conio.h>
    void main() {
    int meow;
    clrscr();

    printf("Enter a Number = ");
    scanf("%d",&meow);

    (meow<0)? printf("-1"): (meow>0)?printf("1"):printf("0");
    getch();
    }



/*AUTHOR =  Fennie Tatmiya
  DOC    =  June 24,2026
  OBJ    =  Leap year
*/#include<stdio.h>
  #include<conio.h>
  void main() {
  int a;
  clrscr();
  printf("enter a year = ");
  scanf("%d",&a);
  if(a%4==0){
   printf("This is a leap year!");
   }else if (a%100==0){
   printf("This is Not a leap year!");
   } else if (a%400==0){
   printf("This is a Leap year!");
   }else{
   printf("This is not a leap year!");
   }getch();
   }

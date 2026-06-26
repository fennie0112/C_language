/*AUTHOR = Fennie Tatmiya
  DOC    = June 24, 2026
  OBJ    = Menu of starbuck
*/#include<stdio.h>
  #include<conio.h>

  void main(){

  int cate;
  int type;
  int quan;

  clrscr();

  printf("                     ======================");
  printf("\n                           STARBUCKS");
  printf("\n                     ======================");

  printf("\n1 = Coffee ");
  printf("\n2 = Tea");
  printf("\n3 = Milk");
  printf("\n4 = Juice");
  printf("\n5 = Water");
  printf("\n6 = Soda");

  printf("\n\nEnter your choice = ");
  scanf("%d",&cate);

  switch(cate) {
	 case 1:
	      printf("\n-----Coffee-----");
	      printf("\n1. Cappuccino");
	      printf("\n2. Espresso");
	      printf("\n3. latte");
	      printf("\n4. Americano");
	      printf("\n5. Matcha");

	      printf("\n\nEnter Item Number =");
	      scanf("%d",&type);

	      switch(type) {
		     case 1:
		     printf("\nyou chose cappucchino");
			    break;
		     case 2:
		     printf("\nyou chose espresso");
			   break;
		     case 3:
		     printf("\nyou chose Latte");
			   break;
		     case 4:
		     printf("\nyou chose Americano");
			   break;
		     case 5:
		     printf("\nyou chose Matcha");
			   break;
		     default:
		     printf("\ninvalid item choice");
		     }
			   break;


	 case 2:
	      printf("\n-----Tea-----");
	      printf("\n1. Green Tea");
	      printf("\n2. Black Tea");
	      printf("\n3. Herbal Tea");
	      printf("\n4. Chai Tea");
	      printf("\n5. Earl Grey Tea");

	      printf("\n\nEnter Item Number =");
	      scanf("%d",&type);

	      switch(type) {
		     case 1:
		     printf("\nyou chose Green Tea");
			    break;
		     case 2:
		     printf("\nyou chose black Tea");
			   break;
		     case 3:
		     printf("\nyou chose Herbal Tea");
			   break;
		     case 4:
		     printf("\nyou chose Chai Tea");
			   break;
		     case 5:
		     printf("\nyou chose Earl Grey Tea");
			   break;
		     default:
		     printf("\ninvalid item choice");
		     }
			   break;


	 case 3:
	      printf("\n-----Milk-----");
	      printf("\n1. Whole Milk");
	      printf("\n2. Skim Milk");
	      printf("\n3. Almond Milk");
	      printf("\n4. Oat Milk");
	      printf("\n5. Soya Milk");

	       printf("\n\nEnter Item Number =");
	      scanf("%d",&type);

	      switch(type) {
		     case 1:
		     printf("\nyou chose Whole Milk");
			    break;
		     case 2:
		     printf("\nyou chose skim Milk");
			   break;
		     case 3:
		     printf("\nyou chose soya Milk");
			   break;
		     case 4:
		     printf("\nyou chose almond Milk");
			   break;
		     case 5:
		     printf("\nyou chose Earl Oat Milk");
			   break;
		     default:
		     printf("\ninvalid item choice");
		     }
			   break;
	 case 4:
	     printf("\n-----Juice-----");
	      printf("\n1. Orange Juice");
	      printf("\n2. Apple Juice");
	      printf("\n3. Pineapple Juice");
	      printf("\n4. Grapefruit Juice");
	      printf("\n5.Cranberry Juice");

	      printf("\n\nEnter Item Number =");
	      scanf("%d",&type);

	      switch(type) {
		     case 1:
		     printf("\nyou chose Orange Juice");
			    break;
		     case 2:
		     printf("\nyou chose Apple Juice");
			   break;
		     case 3:
		     printf("\nyou chose Pineapple Juice");
			   break;
		     case 4:
		     printf("\nyou chose Grapefruit Juice");
			   break;
		     case 5:
		     printf("\nyou chose Cranberry Juice");
			   break;
		     default:
		     printf("\ninvalid item choice");
		     }
			   break;
	 case 5:
	     printf("\n-----Water-----");
	      printf("\n1. Still water");
	      printf("\n2. Sparklling water");
	      printf("\n3. Flavored water");
	      printf("\n4. Mineral water");
	      printf("\n5. Infused water");

	      printf("\n\nEnter Item Number =");
	      scanf("%d",&type);

	      switch(type) {
		     case 1:
		     printf("\nyou chose Still Water");
			    break;
		     case 2:
		     printf("\nyou chose sparkling Water");
			   break;
		     case 3:
		     printf("\nyou chose flavored Water");
			   break;
		     case 4:
		     printf("\nyou chose Mineral Water");
			   break;
		     case 5:
		     printf("\nyou chose Infused water");
			   break;
		     default:
		     printf("\ninvalid item choice");
		     }
			   break;
	 case 6:
	      printf("\n-----Soda-----");
	       printf("\n1. Cola");
	      printf("\n2. Lemon-Lime");
	      printf("\n3. Ginger Ale");
	      printf("\n4. Root Beer");
	      printf("\n5. Orange soda");

	      printf("\n\nEnter Item Number =");
	      scanf("%d",&type);

	      switch(type) {
		     case 1:
		     printf("\nyou chose Cola");
			    break;
		     case 2:
		     printf("\nyou chose Lemon-Lime soda");
			   break;
		     case 3:
		     printf("\nyou chose ginger Ale");
			   break;
		     case 4:
		     printf("\nyou chose Root beer");
			   break;
		     case 5:
		     printf("\nyou chose Orange soda");
			   break;
		     default:
		     printf("\ninvalid item choice");
		     }
			   break;
	      default:
		   printf("Invalid choice");
			 break; }

	 printf("\n\nplease enter the Quantity = ");
	 scanf("%d",&quan);

	 (quan<=1)?
	       printf("your order is %d cup.....")
			:printf("your order are %d cups");

	 printf("\n\nYour Order is successfully submitted...");
	 printf("\n\n<<<<<Thanks for visiting starbucks>>>>>>");




  getch();
  }

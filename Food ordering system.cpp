#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
void mainpage();
void main_menu();
void order();
void payment();



int main()
{   
	mainpage();
	system("cls");
	order();
	system("cls");
	payment();
	 

}

void mainpage()
{
  int process=0;
  system("cls");
  printf("\n");
  printf("\t\t\t\t    ---------------------------\n");
  printf("\t\t\t\t    |FAST FOOD ORDERING SYSTEM|\n");
  printf("\t\t\t\t    ---------------------------\n");
  printf("\n\n\n");
  printf("\t\t\t\t");
  printf("Prepared By    ");
  printf(":");
  printf("    Shivam kumar,Pravin singh");
  printf("\n\n");
  printf("\t\t\t\t");
  printf("Mini Project   ");
  printf(":");
  printf("   Fast Food Ordering System\n");
  printf("\n\n");
  printf("\t\t\t\t");
  printf("Guided By      ");
  printf(":");
  printf("      Prof. Ashish Ranjan Miahra");
  printf("\n\n");
  printf("\t\t\t\t    Press Enter to continue......");
  printf("\n\n");
  getchar();
}
void order()
	{
	char name[30],address[50], pizza1[]="Chicken Fazita" ,pizza2[]="Chicken Bar BQ" ,pizza3[]="Peri Peri" ,pizza4[]="Creamy Max", roll1[]="Chicken Chatni Roll", roll2[]="Chicken Mayo Roll", roll3[]="Veg Roll With Fries",bur1[]="Zinger Burger",bur2[]="Chicken Burger",bur3[]="veg Burger";
	char sand1[]="Club Sandwich", sand2[]="Chicken Crispy Sandwich", sand3[]="Extream Veg Sandwich";
	char bir1[]="Chicken Biryani", bir2[]="Prawn Biryani", bir3[]="veg Biryani" ;
	char gotostart;
	int choice=0,pchoice,pchoice1, quantity,gst,total;
	
   printf("\t\t\t\t\t----------Fast Food Ordering system-----------\n\nPlease Enter Your Name: ");
	gets(name);
    printf("Enter your address: ");
    gets(address);
	printf("Hello ");

	printf("%s",name);

    beginning:
   
	
    printf("\n\nWhat would you like to order?\n\n");
	printf("--------Menu--------\n\n");
	
    printf("1) Pizzas\n2) Burgers\n3) Sandwich\n4) Rolls\n5) Biryani\n\n");
    
    
	printf("Please Enter your Choice: ");

	scanf("%d",&choice);
	
		if(choice==1)
	 {
		printf("\n1)%s\n2)%s\n3)%s\n4)%s\n",pizza1,pizza2,pizza3,pizza4);
		printf("\nPlease Enter which Flavour would you like to have?:");
		scanf("%d",&pchoice);
		if(pchoice>=1 && pchoice<=5)
		{
			printf("\n1) Small Rs.150\n2) Regular Rs.200\n3) Large Rs.300\n");
		printf("\nChoose Size Please:");
			scanf("%d",&pchoice1);
			if(pchoice1>=1 && pchoice1<=3)
			printf("\nPlease Enter Quantity: ");
			scanf("%d",&quantity);
			int gst,total;
			switch(pchoice1)
			{
			case 1: choice = 150*quantity;
			break;

			case 2: choice = 200*quantity;
			break;

			case 3: choice = 300*quantity;
			break;


			}
			gst=.05*choice;
			total=gst+choice;
			switch (pchoice1)
			{
			 case 1:
			 printf("\t\t\t\t\t--------Your Order---------\n");
			 printf("\t\t\t\t\t%d",quantity);
			 printf(" %s ",pizza1);
			 printf("\n\t\t\t\t\tGst:%d",gst);
		
			 printf("\n\t\t\t\t\tYour Bill is:%d ",choice);
			 printf("\n\t\t\t\t\tGrand total:%d",total);
			 printf("\n\t\t\t\t\tYour Order Will be delivered in 40 Minutes");
			 
			 printf("\n\t\t\t\t\tThank you For Ordering \n");
			 break;
			 case 2:
			 printf("\t\t\t\t\t--------Your Order---------\n");
			 printf("%\t\t\t\t\t %d ",quantity);
			 printf("%s ",pizza2);
			 printf("\n\t\t\t\t\tGst:%d",gst);
				 printf("\n\t\t\t\t\tYour Bill is:%d ",choice);
			 printf("\n\t\t\t\t\tGrand total:%d",total);
			 printf("\n\t\t\t\t\tYour Order Will be delivered in 40 Minutes");
			 printf("\n\t\t\t\t\tThank you For Ordering \n");
			 break;
			 case 3:
			 printf("\t\t\t\t\t--------Your Order---------\n");
			 printf("\t\t\t\t\t%d ",quantity);
			 printf("%s ",pizza3);
			 printf("\n\t\t\t\t\tGst:%d",gst);
			 	 printf("\n\t\t\t\t\tYour Bill is:%d ",choice);
			 printf("\n\t\t\t\t\tGrand total:%d",total);
			 printf("\n\t\t\t\t\tYour Order Will be delivered in 40 Minutes");
			 printf("\n\t\t\t\t\tThank you For Ordering \n");
			 break;
			 case 4:
			 printf("\t\t\t\t\t--------Your Order---------\n");
			 printf("\t\t\t\t\t%d ",quantity);
			 printf("%s ",pizza4);
			printf("\n\t\t\t\t\tGst:%d",gst);
			 	 printf("\n\t\t\t\t\tYour Bill is:%d ",choice);
			 printf("\n\t\t\t\t\tGrand total:%d",total);
			 printf("\n\t\t\t\t\tYour Order Will be delivered in 40 Minutes");
			 printf("\n\t\t\t\t\tThank you For Ordering \n");
			 break;

			}
			printf("Would you like to order anything else? Y / N:");
			fflush(stdin);
			scanf("%c",&gotostart);
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
		
			}



		}

	 }

	 else if(choice==2)
	 {
		printf("\n1 %s Rs.60\n",bur1);
		printf("2 %s Rs.80\n",bur2);
		printf("3 %s Rs.100\n",bur3);
		//cout<<"4 "<<pizza4<<"\n";
		printf("\nPlease Enter which Burger you would like to have?: ");
		scanf("%d",&pchoice1);
		if(pchoice1>=1 && pchoice1<=3)
		{
			printf("\nPlease Enter Quantity: ");
			scanf("%d",&quantity);
			switch(pchoice1)
			{
			case 1: choice = 60*quantity;
			break;

			case 2: choice = 80*quantity;
			break;

			case 3: choice = 100*quantity;
			break;

			}
			int gst=.05*choice;
			int total=gst+choice;
			switch (pchoice1)
			{
			 case 1:
			 printf("\t\t\t\t\t--------Your Order---------\n");
			 printf("\t\t\t\t\t%d ",quantity);
			 printf("%s ",bur1);
			 printf("\n\t\t\t\t\tGst:%d",gst);
			  printf("\n\t\t\t\t\tYour Bill is:%d ",choice);
			 printf("\n\t\t\t\t\tGrand total:%d",total);
			 printf("\n\t\t\t\t\tYour Order Will be delivered in 40 Minutes");
			 printf("\nThank you For Ordering \n");
			 break;
			 case 2:
			 printf("\t\t\t\t\t--------Your Order---------\n");
			 printf("\t\t\t\t\t%d ",quantity);
			 printf("%s  ",bur2);
			 printf("\n\t\t\t\t\tGst:%d",gst);
			  printf("\n\t\t\t\t\tYour Bill is:%d ",choice);
			 printf("\n\t\t\t\t\tGrand total:%d",total);
			 printf("\n\t\t\t\t\tYour Order Will be delivered in 40 Minutes");
			 printf("\n\t\t\t\t\tThank you For Ordering\n");
			 break;
			 case 3:
			 printf("\t\t\t\t\t--------Your Order---------\n");
			 printf("\t\t\t\t\t%d ",quantity);
			 printf("%s ",bur3);
			 printf("\n\t\t\t\t\tGst:%d",gst);
			  printf("\n\t\t\t\t\tYour Bill is:%d ",choice);
			 printf("\n\t\t\t\t\tGrand total:%d",total);
			 printf("\n\t\t\t\t\tYour Order Will be delivered in 40 Minutes");
			 printf("\n\t\t\t\t\tThank you For Ordering \n");
			 break;


			}
			printf("\nWould you like to order anything else? Y / N:");
			fflush(stdin);
			scanf("%c",&gotostart);
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			}

 }
}
	else if(choice==3)
	 {
		printf("\n1 %s Rs.140\n",sand1);
		printf("2 %s Rs.100\n",sand2);
		printf("3 %s Rs.80\n",sand3);
		//cout<<"4 "<<pizza4<<"\n";
		printf("\nPlease Enter which Sandwich you would like to have?:");
		scanf("%d",&pchoice1);
		if(pchoice1>=1 && pchoice1<=3)
		{
			printf("\nPlease Enter Quantity: ");
			scanf("%d",&quantity);
			switch(pchoice1)
			{
			case 1: choice = 140*quantity;
			break;

			case 2: choice = 100*quantity;
			break;

			case 3: choice =80*quantity;
			break;

			}
			gst=.05*choice;
			total=gst+choice;
			switch (pchoice1)
			{
			 case 1:
			 printf("\t\t\t\t\t--------Your Order---------\n");
			 printf("\t\t\t\t\t%d ",quantity);
			 printf("%s ",sand1);
			 printf("\n\t\t\t\t\tGst:%d",gst);
			  printf("\n\t\t\t\t\tYour Bill is:%d ",choice);
			 printf("\n\t\t\t\t\tGrand total:%d",total);
			 printf("\n\t\t\t\t\tYour Order Will be delivered in 40 Minutes");
			 printf("\n\t\t\t\t\tThank you For Ordering \n");
			 break;
			 case 2:
			 printf("\t\t\t\t\t--------Your Order---------\n");
			 printf("\t\t\t\t\t%d ",quantity);
			 printf("%s  ",sand2);
		 printf("\n\t\t\t\t\tGst:%d",gst);
			 printf("\n\t\t\t\t\tYour Total Bill is %d \nYour Order Will be delivered in 40 Minutes",choice);

			 printf("\n\t\t\t\t\tThank you For Ordering \n");
			 break;
			 case 3:
			 printf("\t\t\t\t\t--------Your Order---------\n");
			printf("\t\t\t\t\t%d %s ",quantity,sand2);
		printf("\n\t\t\t\t\tGst:%d",gst);
		 printf("\n\t\t\t\t\tYour Bill is:%d ",choice);
			 printf("\n\t\t\t\t\tGrand total:%d",total);
			 printf("\n\t\t\t\t\tYour Order Will be delivered in 40 Minutes");
			 printf("\n\t\t\t\t\tThank you For Ordering \n");
			 break;


			}
			printf("Would you like to order anything else? Y / N:");
			fflush(stdin);
			scanf("%c",&gotostart);
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			
			}
			}
			}


	 else if(choice==4)
	 {
		printf("\n1 %s Rs.50 \n",roll1);
		printf("2 %s Rs.70 \n",roll2);
		printf("3 %s Rs.100 \n",roll3);
		//cout<<"4 "<<pizza4<<"\n";
		printf("\nPlease Enter which you would like to have?: ");
		scanf("%d",&pchoice1);
		if(pchoice1>=1 && pchoice1<=3)
		{
			printf("\nHow Much Rolls Do you want: ");
			scanf("%d",&quantity);
			switch(pchoice1)
			{
			case 1: choice = 50*quantity;
			break;

			case 2: choice = 70*quantity;
			break;

			case 3: choice = 100*quantity;
			break;

			}
			gst=.05*choice;
			total=gst+choice;
			switch (pchoice1)
			{
			 case 1:
			 printf("\t\t\t\t\t--------Your Order---------\n");
			 printf("\t\t\t\t\t%d ",quantity);
			 printf("%s ",roll1);
			 printf("\n\t\t\t\t\tGst:%d",gst);
			 printf("\n\t\t\t\t\tYour Bill is:%d ",choice);
			 printf("\n\t\t\t\t\tGrand total:%d",total);
			 printf("\n\t\t\t\t\tYour Order Will be delivered in 40 Minutes");
			 printf("\n\t\t\t\t\tThank you For Ordering \n");
			 break;
			 case 2:
			 printf("\t\t\t\t\t--------Your Order---------\n");
			 printf("\t\t\t\t\t%d",quantity);
			 printf("%s ",roll2);
			 printf("\n\t\t\t\t\tGst:%d",gst);
		     printf("\n\t\t\t\t\tYour Bill is:%d ",choice);
			 printf("\n\t\t\t\t\tGrand total:%d",total);
			 printf("\n\t\t\t\t\tYour Order Will be delivered in 40 Minutes");
			 printf("\n\t\t\t\t\tThank you For Ordering \n");
			 break;
			 case 3:
			 printf("\t\t\t\t\t--------Your Order---------\n");
			 printf("\t\t\t\t\t%d ",quantity);
			 printf("%s ",roll3);
			 printf("\n\t\t\t\t\tGst:%d",gst);
			 printf("\n\t\t\t\t\tYour Bill is:%d ",choice);
			 printf("\n\t\t\t\t\tGrand total:%d",total);
			 printf("\n\t\t\t\t\tYour Order Will be delivered in 40 Minutes");
			 printf("\n\t\t\t\t\tThank you For Ordering \n");
			 break;


			}
	printf("\nWould you like to order anything else? Y / N:");
			fflush(stdin);
			scanf("%c",&gotostart);
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
		
			}

 }
}
	else if(choice==5)
	 {
		printf("\n1 %s Rs.100\n",bir1);
		printf("2 %s Rs.220\n",bir2);
		printf("3 %s Rs.140\n",bir3);
		printf("\nPlease Enter which Biryani you would like to have?:");
		scanf("%d",&pchoice1);
		if(pchoice1>=1 && pchoice1<=3)
		{
			printf("\nPlease Enter Quantity: ");
			scanf("%d",&quantity);
			switch(pchoice1)
			{
			case 1: choice = 160*quantity;
			break;

			case 2: choice = 220*quantity;
			break;

			case 3: choice = 140*quantity;
			break;

			}
			gst=.05*choice;
			total=gst+choice;
			switch (pchoice1)
			{
			 case 1:
			 printf("\t\t\t\t\t--------Your Order---------\n");
			 printf("\t\t\t\t\t%d ",quantity);
			printf("%s ",bir1);
			printf("\n\t\t\t\t\tGst:%d",gst);
			 printf("\n\t\t\t\t\tYour Bill is:%d ",choice);
			 printf("\n\t\t\t\t\tGrand total:%d",total);
			 printf("\n\t\t\t\t\tYour Order Will be delivered in 40 Minutes");
			 printf("\n\t\t\t\t\tThank you For Ordering \n");
			 break;
			 case 2:
			 printf("\t\t\t\t\t--------Your Order---------\n");
			 printf("\t\t\t\t\t%d ",quantity);
			 printf("%s ",bir2);
			 printf("\n\t\t\t\t\tGst:%d",gst);
		 printf("\n\t\t\t\t\tYour Bill is:%d ",choice);
			 printf("\n\t\t\t\t\tGrand total:%d",total);
			 printf("\n\t\t\t\t\tYour Order Will be delivered in 40 Minutes");
			 printf("\n\t\t\t\t\tThank you For Ordering \n");
			 break;
			 case 3:
			 printf("\t\t\t\t\t--------Your Order---------\n");
			 printf("\t\t\t\t\t%d %s",quantity,bir3);
			 printf("\n\t\t\t\t\tGst:%d",gst);
			 printf("\n\t\t\t\t\tYour Bill is:%d ",choice);
			 printf("\n\t\t\t\t\tGrand total:%d",total);
			 printf("\n\t\t\t\t\tYour Order Will be delivered in 40 Minutes");
			 printf("\n\t\t\t\t\tThank you For Ordering \n");
			 break;


			}
			printf("Would you like to order anything else? Y / N:");
			fflush(stdin);
			scanf("%c",&gotostart);
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
			}
			}

			else
			{
			
				printf("Please Select Right Option: \n");
				printf("Would You like to Start the program again? Y / N: ") ;
				fflush(stdin);
				scanf("%c",&gotostart);

				if(gotostart=='Y' || gotostart=='y')
				{
				  goto beginning;
			  //return 0;
			}
			}

getch();
}
void payment()
{
	int mode,pin,card;
	printf("\t\t\t\t\tPayment page\n\n1.Cash\n2.Card\n\n");
	scanf("\t\t\t\t\t%d",&mode);
	switch(mode)
	{
		case 1:printf("Your order will be reach to you soon......\n");
		       printf("Thank you....\n");
		break;
		case 2:
			   printf("tEnter 16 digit card no.\n");
			   scanf("%d",&card);
			   printf("Enter pin\n");
			   
			   scanf("%d",&pin);
			   printf("Payment success\n");
			   printf("Thank you....");
		 break;
	   default:printf("wrong choice");
	}
}


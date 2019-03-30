#include<stdio.h>
#include<windows.h>
#define SIZE 11
#define textcolor(txt) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), txt)  
#define resetcolor() SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15)
#include<conio.h>

void shirts();
void display();
void all(int menu);
void Backing();
void purchase();
void pants();
void shoes();
void sock();
typedef struct a{
	char name[20];
	int price;
	int amount;
}BOX;
BOX store[SIZE];
char Cname[20],tel[20];

main(){
	srand(time(NULL));
	resetcolor();
	strcpy(store[0].name,"T-shrits");
	store[0].price=100;
	store[0].amount=0;
	
	strcpy(store[1].name,"Neck");
	store[1].price=150;
	store[1].amount=0;
	
	strcpy(store[2].name,"Shirt");
	store[2].price=120;
	store[2].amount=0;

	strcpy(store[3].name,"Short pants");
	store[3].price=280;
	store[3].amount=0;
	
	strcpy(store[4].name,"Jeans pants");
	store[4].price=900;
	store[4].amount=0;

	strcpy(store[5].name,"Long pants");
	store[5].price=350;
	store[5].amount=0;

	strcpy(store[6].name,"Sneakers");
	store[6].price=1200;
	store[6].amount=0;
	
	strcpy(store[7].name,"Sandal");
	store[7].price=900;
	store[7].amount=0;
	

	strcpy(store[8].name,"S");
	store[8].price=10;
	store[8].amount=0;
	
	strcpy(store[9].name,"M");
	store[9].price=12;
	store[9].amount=0;
	
	strcpy(store[10].name,"L");
	store[10].price=13;
	store[10].amount=0;
	textcolor(14);
	printf("\t------- ------ ---   -- ---------- ------- ---------- ----      \n");
	printf("\t------- ------ --- --   ---------- ------- ---------- --- \n");
	printf("\t--      --  -- ----        ---     --   --     --     ---\n");
	printf("\t--      --  -- ----        ---     -------     --     --- \n");
	printf("\t------- ------ --- --      ---     ------- ---------- ----------\n");
	printf("\t------- ------ ---   --    ---     --   -- ---------- ----------\n\n");
	resetcolor();
	
	printf("---------------------------------------------------------------------------\n");
	printf("--                     WELCOME COKTAIL CLOTHES                           --\n");
	printf("---------------------------------------------------------------------------\n\n");

	printf("My name is : ");
	scanf("%s",&Cname);
	printf("Phone number : ");
	scanf("%s",&tel);
	printf("\n");
	display();
	



}

void display()
{
	char menu;
	printf("------------ -----------  -----------  ---------- --------------   ------------\n");
	printf("- 1.SHIRTS - - 2.PANTS -  - 3.SHOES -  - 4.SOCK - - 5.Purchase -   - 6.Cancel -\n");
	printf("------------ -----------  -----------  ----------  --------------  ------------\n");	
	printf("please menu : ");
	scanf("%s",&menu);
	system("cls");
	
	if(menu=='6'){
		cancel();
	}
	
	else
	{
	all(menu);
	
	}
	
	
}

void cancel(){
		printf("Thankyou.");
		Sleep(1000);
		getch();
}

void all(int menu){
	int num,many;
	if(menu=='1')
	{
		shirts();
	}
	else if(menu =='5')
	{
		purchase();
	}
	
	else if(menu=='2')
	{
		pants();
	}
	
	else if(menu=='3')
	{
		shoes();
	}
	
	else if(menu=='4')
	{ 
		sock();
	}
	else
	{
	textcolor(12);
		printf("No choice.\n");
		int i ;
		for(i=0;i<=6;i++)
		{
			if(i == 0)
			{
				printf("Loading");
			}
			else
			{
				Sleep(500);
				printf("..");
			}
		}
		printf("\n");
		system("cls");
		resetcolor();
		display();
	}

}

void shirts(){
	char num;
	int money;
	printf("Please select your shirt.\n");
	printf("1.T-shirts 100 Bath.\n2.Neck 150 Bath.\n3.Shirt 125 Bath.\n4.Back\n");
	printf("please menu : ");
	scanf("%s",&num); 
		system("cls");
		if(num=='1')
		{
		printf("How many T-shirts ?\n");
		scanf("%d",&money);
		store[0].amount=store[0].amount+money;
		system("cls");
		shirts();
		
		}
		
		else if(num=='2')
		{
		printf("How many Neck ?\n");
		scanf("%d",&money);
		store[1].amount=store[1].amount+money;
		system("cls");
		shirts();
		
		}
		
		else if(num=='3')
		{
		printf("How many Shirt ?\n");
		scanf("%d",&money);	
		store[2].amount=store[2].amount+money;

		system("cls");
		shirts();
		
		}
		
		else if(num=='4')
		{
			Backing();
		}
		
		else
		{
			textcolor(12);
			system("cls");
			printf("No choice.\n");
			int i ;
			for(i=0;i<=6;i++)
			{
				if(i == 0)
				{
					printf("Loading");
				}
				else
				{
					Sleep(300);
					printf("..");
				}
			}
			printf("\n");
			system("cls");
			resetcolor();
			shirts();
		}	
		
	
}

void Backing()
{
	
	textcolor(rand()%12+1);
		system("cls");
		
			int i ;
			for(i=0;i<=7;i++)
			{
				if(i == 0)
				{
					printf("\tBacking");
				}
				else
				{
					Sleep(300);
					printf(".");
				}
			}
			printf("\n");
			system("cls");
			resetcolor();
		display();
		
}
		
void purchase()
{
	textcolor(10);
	int i;
	int sum=0;
	printf("<----- Bill Information ----->\n");
	char check = 'A';
	while(1)
	{
		printf("Are you member?. (Y/N)\n");
		scanf("%s",&check);
		if(check == 'Y')
		{
			printf("Discount 30%.\n");
			break;
			
		}
		else if(check == 'N')
		{
			printf("No discount.\n");
			break;
		}
		else
		{
			printf("No choice.\n");
		}
		
	}
	system("cls");
		
	printf("Name : %s\n",Cname);
	Sleep(500);
	printf("Tel : %s\n",tel);
	Sleep(500);
	for(i=0;i<SIZE;i++){
		if(store[i].amount>0)
		{
		int a = store[i].amount*store[i].price;
		printf("| %s\n",store[i].name);
		printf("| %i Bath\tAmount %i : %i Bath |\n------------------------------------\n",store[i].price,store[i].amount,store[i].price*store[i].amount);
		Sleep(500);
		sum=sum+a;
		}
	}
	textcolor(12);
	if(check == 'Y')
	{
		printf("\aTotal : %.2f Bath.\t Discount = %.2f Bath.",(float)sum-(sum*0.3),(float)(sum*0.3));
	}
	else
	{
		printf("\aTotal : %.2f Bath.",(float)sum);
	}
	
	resetcolor();
	
	getch();
}

void pants()
{
	char num;
	int money;
	printf("Please select your pants.\n");
	printf("1.Short pants 280 Bath.\n2.Jeans pants 900 Bath.\n3.Long pants 350 Bath.\n4.back \n");
	printf("please menu : ");
	scanf("%s",&num); 
		system("cls");
		if(num=='1')
		{
		printf("How many Short pants  ?\n");
		scanf("%d",&money);
		store[3].amount=store[3].amount+money;
		system("cls");
		pants();
		
		}
		
		else if(num=='2')
		{
		printf("How many Jeans pants ?\n");
		scanf("%d",&money);
		store[4].amount=store[4].amount+money;
		system("cls");
		pants();
		}
		
		else if(num=='3')
		{
		printf("How many Long pants ?\n");
		scanf("%d",&money);	
		store[5].amount=store[5].amount+money;

		system("cls");
		pants();
		
		}
		
		else if(num=='4')
		{
			Backing();
		}
		
		else
		{
			textcolor(12);
			system("cls");
			printf("No choice.\n");
			int i ;
			for(i=0;i<=6;i++)
			{
				if(i == 0)
				{
					printf("Loading");
				}
				else
				{
					Sleep(300);
					printf("..");
				}
			}
			printf("\n");
			system("cls");
			resetcolor();
			pants();
		}	
		
	
}
void shoes()
{
	char num;
	int money;
	printf("Please select your Shoes.\n");
	printf("1.Sneakers 1200 Bath\n2.Sandal 900 Bath\n3.back\n");
	printf("please menu : ");
	scanf("%s",&num); 
		system("cls");
		if(num=='1')
		{
		printf("How many Short Sneakers ?\n");
		scanf("%d",&money);
		store[6].amount=store[6].amount+money;
		system("cls");
		shoes();
		
		}
		
		else if(num=='2')
		{
		printf("How many Jeans Sandal ?\n");
		scanf("%d",&money);
		store[7].amount=store[7].amount+money;
		system("cls");
		shoes();
		}
		
		else if(num=='3')
		{
			Backing();
		}
		
		else
		{
			textcolor(12);
			system("cls");
			printf("No choice.\n");
			int i ;
			for(i=0;i<=6;i++)
			{
				if(i == 0)
				{
					printf("Loading");
				}
				else
				{
					Sleep(300);
					printf("..");
				}
			}
			printf("\n");
			system("cls");
			resetcolor();
			shoes();
		}	
}

void sock()
{
		char num;
	int money;
	printf("Please select your Sock.\n");
	printf("SIZE\n");
	printf("1.S 10 Bath.\n2.M 12 Bath.\n3.L 13 Bath.\n4.back\n");
	printf("please menu : ");
	scanf("%s",&num); 
		system("cls");
		if(num=='1')
		{
		printf("How many Short Sneakers ?\n");
		scanf("%d",&money);
		store[8].amount=store[8].amount+money;
		system("cls");
		sock();
		}
		
		else if(num=='2')
		{
		printf("How many Jeans Sandal ?\n");
		scanf("%d",&money);
		store[9].amount=store[9].amount+money;
		system("cls");
		sock();
		}
		
		else if(num=='3')
		{
		printf("How many Jeans Sandal ?\n");
		scanf("%d",&money);
		store[10].amount=store[10].amount+money;
		system("cls");
		sock();
		}
		
		else if(num=='4')
		{
			Backing();
		}
		
		else
		{
			textcolor(12);
			system("cls");
			printf("No choice.\n");
			int i ;
			for(i=0;i<=6;i++)
			{
				if(i == 0)
				{
					printf("Loading");
				}
				else
				{
					Sleep(300);
					printf("..");
				}
			}
			printf("\n");
			system("cls");
			resetcolor();
			sock();
		}	
}




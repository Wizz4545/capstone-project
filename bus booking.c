#include <stdio.h>
#include <stdlib.h>



struct passenger
{
	char name[20];
	char password[20];
	char password_2[20];
	
	
	
};
double log();

int main()
{

		//login info//
	//choose//
	printf("1. REGISTER YOUR ACCOUNT\n");
	printf("2. LOGIN IN TO YOUR ACCOUNT\n");
	printf("choose your login method, enter 1 or 2\n");
	int login ;
	scanf("%d", &login);
	//check//
	char name[20],password[20],namee[20],passwordd[20];
	if (login ==2)
	{
	//login
	printf("_________________________________________________ENTER YOUR LOGIN INFO__________________________________________________\n");
	
	printf("enter your name  ------------  ");
	scanf("%s", name);	
	printf("enter your password  ------------  ");
	scanf("%s", password);
	//register	
	}else if(login ==1)
	{
	printf("_______________________________________________CREATE YOUR ACCOUNT__________________________________________________\n");
	char name[20]  , password[20];
	printf("enter your name  ------------  ");
	scanf("%s", namee);	
	printf("enter your password  ------------  ");
	scanf("%s", passwordd);
	//store struct
	struct passenger p1;
	strcpy(p1.name,namee);
	strcpy(p1.password,passwordd);
	//file to store
	FILE * fpointer = fopen("loginfo.txt","w");
	fprintf(fpointer,"%s\n",p1.name);
	fprintf(fpointer,"%s",p1.password);
	
	fclose(fpointer);
	}
	log();
	//save info from file to variable
	FILE * fpointer = fopen("loginfo.txt","r");
	char rname[20], rpass[20];
	fgets(rname,25, fpointer);
	fgets(rpass,25, fpointer);
	fclose(fpointer);
	
	if (strcmp(rname, name) == 0 && strcmp(rpass, password) == 0)
	{
		busbook();
		printf("hiii");
	}else
	{
			busbook();
		
		
		
	}
		

}
void BUS()
{
	printf("_______________________________________________CHOOSE YOUR DESTINATION______________________________________________\n");
	printf("enter your destination in capital letters");
	
}


double log()
{
	//login info//
	//choose//
	printf("1. REGISTER YOUR ACCOUNT\n");
	printf("2. LOGIN IN TO YOUR ACCOUNT\n");
	printf("choose your login method, enter 1 or 2\n");
	int login ;
	scanf("%d", &login);
		//check//
	char name[20],password[20],namee[20],passwordd[20];
	if (login ==2)
	{
	//login
	printf("_________________________________________________ENTER YOUR LOGIN INFO__________________________________________________\n");
	
	printf("enter your name  ------------  ");
	scanf("%s", namee);	
	printf("enter your password  ------------  ");
	scanf("%s", passwordd);
	//register	
	}else if(login ==1)
	{
	printf("_______________________________________________CREATE YOUR ACCOUNT__________________________________________________\n");
	char name[20]  , password[20];
	printf("enter your name  ------------  ");
	scanf("%s", namee);	
	printf("enter your password  ------------  ");
	scanf("%s", passwordd);
	//store struct
	struct passenger p1;
	strcpy(p1.name,name);
	strcpy(p1.password,password);
	//file to store
	FILE * fpointer = fopen("loginfo.txt","w");
	fprintf(fpointer,"%s",p1.name);
	fprintf(fpointer,"%s",p1.password);
	
	fclose(fpointer);
	
	}
}
void busbook()
{
	int pass,seat,booked;

    char user[500];
   // printf("\n\t\t\t What is your  name ..: ");

    gets(user);
    printf("\n\t\t\t  User this number [123] for enter... ");
    scanf("%d",&pass);

    switch(pass)
    {
    case 123:
        printf("\n\t\t\t\t Welcome To Ticket Booking System. \n");
        printf("\n\t\t\t\t Available Seat = 6 Booked Seat = 0 \n");
        printf("\n\t\t\t\t Press 1 for Choose Your Seat \t Press Any Key ( except 1 ) For Exit... \n");
        printf("\n\t\t\t\t Enter your option... \t ===> ");

        scanf("%d",&seat);
        switch(seat)
        {
        case 1:
            printf("\n\t\t\t\t Sir, Please Select Your Seat Number. \n");
            printf("\n\t\t\t\t 1\t 2\t 3\t \n\n \t\t\t\t 4\t 5\t 6\t =>  ");

            scanf("%d",&booked);
            switch(booked)
            {
            case 1:
                printf("\n\t\t\t\t Congratulation. Sir, You Have Booked Seat = 1 \n",&user);
                printf("\n\t\t\t\t Available Seat = 5 \t Booked Seat = 1 \n");
                break;
            case 2:
                printf("\n\t\t\t\t  Congratulation. Sir, You Have Booked Seat = 2 \n",&user);
                printf("\n\t\t\t\t Available Seat = 5 \t Booked Seat = 1 \n");
                break;
            case 3:
                printf("\n\t\t\t\t  Congratulation. Sir, You Have Booked Seat = 3 \n",&user);
                printf("\n\t\t\t\t Available Seat = 5 \t Booked Seat = 1 \n");
                break;
            case 4:
                printf("\n\t\t\t\t You Have Booked Seat = 4 \n",&user);
                printf("\n\t\t\t\t Available Seat = 5 \t Booked Seat = 1 \n");
                break;
            case 5:
                printf("\n\t\t\t\t  Congratulation. Sir, You Have Booked Seat = 5 \n",&user);
                printf("\n\t\t\t\t Available Seat = 5 \t Booked Seat = 1 \n");
                break;
            case 6:
                printf("\n\t\t\t\t  Congratulation. Sir, You Have Booked Seat = 6 \n",&user);
                printf("\n\t\t\t\t Available Seat = 5 \t Booked Seat = 1 \n");
                break;
            default:
                printf("\n\t\t\t\t Sorry, Sir. This Seat Number Is Not Available Now. Please Try Others... ");
            }
            break;

        default:
            printf("\n\t\t\t\t Are You Sure Want To Exit... \n");
        }
        break;
        default:
            printf("\n\t\t\t\t Oops.. You Have Entered Wrong Keyword. \n");
    }
    getch();
}													
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
	int train_num;
	int num_of_seats;
	char name[100];
}pd;


void  reservation(void);
void viewdetails(void);
void cancel(void);
void specifictrain(int);
void login();

int main()
{
	
	
	system("CLS");
	printf("===========================================================");
	printf("                                                           ");
	printf("    welcome to karnataka railway ticket booking portal     ");
	printf("                                                           ");
	printf("===========================================================");
	login();
	int menu_choices;
	start:
	system("CLS");
	printf("===========================================================\n");
	printf("                TRAIN RESERVATION SYSTEM                   \n");
	printf("===========================================================\n");
	printf("1<<RESERVE A TICKET\n\n");
	printf("------------------------------------------------------------\n");
	printf("2<<VEIW AVAILABLE TRAINS\n\n");
	printf("------------------------------------------------------------\n");
	printf("3<<CANCEL RESERVATION\n\n");
	printf("------------------------------------------------------------\n");
	printf("4<<EXIT\n\n");
	printf("------------------------------------------------------------\n");
	scanf("%d",&menu_choices);
	switch(menu_choices)
	{
		case 1:
		reservation();
		break;
		case 2:
		viewdetails();
		printf("/n/n press any key to go back to main menu............");
		getch();
		break;
		case 3:
		cancel();
		break;
		case 4:
		return(0);
		default:
		printf("invalid key");
	}
	goto start;
	return(0);
}
void viewdetails(void)
{
	system("cls");
	printf("===========================================================");
	printf("\n trainno\ttrainname\t\t\tdestinations\t\tcharges\t\ttime\n");
	printf("-----------------------------------------------------------");
	printf("\n1001\tANJATA EXPRESS\tMANMAD TO SECUNDERBAD\t1500\t9AM");
	printf("\n1002\tBAGMATI EXPRESS\tMYSORE TO DARBHANGA\t1500\t10AM");
	printf("\n1003\tCHENNAI EXPRESS\tCHENNAI TO BOMBAY\t1500\t11AM");
	printf("\n1004\tSHATABDI EXPRESS\tBANGLORE TO CHENNAI\t1500\t12AM");
	printf("\n1005\tRAJDHANI EXPRESS\tCHEANNI TO DELHI\t1500\t1PM");
	printf("\n1006\tANJATA EXPRESS\tSECUNDERABAD TO MANMAD\t1500\t9PM");
	printf("\n1007\tBAGMATI EXPRESS\tDARBHANGA TO MYSORE\t1500\t10PM");
	printf("\n1008\tCHENNAI EXPRESS\tBOMBAY TO CHENNAI\t1500\t11PM");
	printf("\n1009\tSHATABDI EXPRESS\tCHENNAI TO BANGLORE\t1500\t12PM");
	printf("\n1010\tRAJDHANI EXPRESS\tDELHI TO CHENNAI\t1500\t1AM\n");
	printf("===========================================================");
}
void reservation(void)
{
	int charges;
	system("CLS");
	pd passdetails;
	FILE *fp;
	fp=fopen("seats_reserved.txt","a");
	
	printf("\nenter your name:");
	fflush(stdin); 
	 
	gets(passdetails.name);
	printf("\nenter number of seats: ");
	scanf("%d",&passdetails.num_of_seats);
	printf("\npress enter to veiw available trains");
	getch();
	system("CLS");
	viewdetails();
	printf("\n\nenter your train number: ");
	start1:
	scanf("%d",&passdetails.train_num);
	if(passdetails.train_num>=1001&&passdetails.train_num<=1010){
		system("CLS");
		printf("--------------------------------------------------\n");
		printf("                  TICKET                          \n");
		printf("--------------------------------------------------\n");
		printf("\nname: ");
		puts(passdetails.name);
		printf("number of seats:                  %d\n",passdetails.num_of_seats);
		specifictrain(passdetails.train_num);
		charges=1500*passdetails.num_of_seats;
		printf("\ncharges:                        %d\n",charges);
		printf("========================\n");
		printf("    reservation done     \n");
		printf("========================\n");
	

	}else{
		printf("invalid number");
		goto start1;
	}
	fclose(fp);
	getch();
	


}
void specifictrain(int train_num )
{
	
	if (train_num==1001)
	{
		printf("\nTrain:\t\t\tANJATA EXPRESS");
		printf("\nDestination:\t\tMANMAD TO SECUNDERBAD");
		printf("\nDeparture:\t\t9am ");
	}
	if (train_num==1002)
	{
		printf("\nTrain:\t\t\tBAGMATI EXPRESS");
		printf("\nDestination:\t\tMYSORE TO DARBHANGA");
		printf("\nDeparture:\t\t10Am");
	}
	if (train_num==1003)
	{
		printf("\nTrain:\t\t\tLA CHENNAI Express");
		printf("\nDestination:\t\tCHENNAI TO BOMBAY");
		printf("\nDeparture:\t\t11am");
	}
	if (train_num==1004)
	{
		printf("\nTrain:\t\t\tLA SHATABDI EXPRESS");
		printf("\nDestination:\t\tBANGLORE TO CHENNAI");
		printf("\nDeparture:\t\t12am ");
	}
	if (train_num==1005)
	{
		printf("\nTrain:\t\t\tRAJDHANI Express");
		printf("\nDestination:\t\tCHENNAI TO DELHI");
		printf("\nDeparture:\t\t1Pm");
	}
	if (train_num==1006)
	{
		printf("\ntrain:\t\t\tANJATA EXPRESS");
		printf("\nDestination:\t\tSECUNDERBAD to MANMAD");
		printf("\nDeparture:\t\t9Pm ");
	}
	if (train_num==1007)
	{
		printf("\ntrain:\t\t\tBAGMATI Express");
		printf("\nDestination:\t\tDARBHANGA TO MYSORE");
		printf("\nDeparture:\t\t10pm ");
	}
	if (train_num==1008)
	{
		printf("\ntrain:\t\t\tCHENNAI Express");
		printf("\n Destination:\t\tBOMBAY TO CHENNAIn");
		printf("\nDeparture:\t\t11pm ");
	}
	if (train_num==1009)
	{
		printf("\ntrain:\t\t\tSHATABDI EXPRESS");
		printf("\nDestination:\t\tCHENNAI TO BANGLORE");
		printf("\nDeparture:\t\t12pm ");
	}
	if (train_num==1010)
	{
		printf("\ntrain:\t\t\tRAJDHANI EXPRESS");
		printf("\nDestination:\t\tDELHI TO CHENNAI");
		printf("\nDeparture:\t\t1AM ");
	}
}
void login()
{

char username[100],password[100];
printf("\n===================login form================\n");
go:
printf("\nenter username: ");

gets(username);
printf("\nenter password: ");
gets(password);
if(strcmp(username,"user")==0 && strcmp(password,"pass")==0){
	printf("       your login has been succesful       \n ");
	printf("\npress enter to continue\n");
	getch();
	
}
else{
	printf("your username/password is incorrect\n");
	goto go;
	system("CLS");

 }
 

}
void cancel(void){
	
    printf("your reservation has been cancelled....thankyou ");
	printf("press any key to continue\n");
	getch();
	
}

	

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

//------------------------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------    Main Menu    ---------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------------
int main() {
	setlocale(LC_ALL, "english");
	
	//Global variables
	bool				loop = true;
	char				name = '\0';
	unsigned char		password = '\0';
	int					number = 0;
	unsigned int		id = 0;
	short int			control = 0;
	unsigned short int 	select = 0;
	long int			value = 0;
	unsigned long int	zip_code = 0;
	float				balance = 0;
	double				math = 0;
	long double			calculate = 0;
	
	do{
		printf("|----------------------------  Menu  ----------------------------|\n\n");
		printf("1 - The \"Z\" value\n");
		printf("2 - BMI (Body Mass Index)\n");
		printf("3 - Read 10 random values and print the value\n");
		printf("4 - Area of the Triangle\n");
		printf("5 - Movie Theater\n");
		printf("6 - Fahernheit X Celcius\n");
		printf("7 - Biggest, Smallest and Media\n");
		printf("8 - Matrix values\n");
		printf("9 - Registration\n");
		printf("10 - Functions\n");
		printf("11 - Recursion\n");
		printf("12 - Random choice\n\n");
		printf("0 - leave\n\n");
		printf("|----------------------------------------------------------------|\n");
		
		printf("\n\nSelect one option of the menu above: ");
		scanf("%d", &select);
		
		switch (select){
			case 1:
				//op1();
				printf("\n\nOpção %d foi elecionada.\n\n", select);
				system("pause");
				system("cls");
				break;
			case 2:
				//op2();
				printf("\n\nOpção %d foi elecionada.\n\n", select);
				system("pause");
				system("cls");
				break;
			case 3:
				//op3();
				printf("\n\nOpção %d foi elecionada.\n\n", select);
				system("pause");
				system("cls");
				break;
			case 4:
				//op4();
				printf("\n\nOpção %d foi elecionada.\n\n", select);
				system("pause");
				system("cls");
				break;
			case 5:
				//op5();
				printf("\n\nOpção %d foi elecionada.\n\n", select);
				system("pause");
				system("cls");
				break;
			case 6:
				//op6();
				printf("\n\nOpção %d foi elecionada.\n\n", select);
				system("pause");
				system("cls");
				break;
			case 7:
				//op7();
				printf("\n\nOpção %d foi elecionada.\n\n", select);
				system("pause");
				system("cls");
				break;
			case 8:
				//op8();
				printf("\n\nOpção %d foi elecionada.\n\n", select);
				system("pause");
				system("cls");
				break;
			case 9:
				//op9();
				printf("\n\nOpção %d foi elecionada.\n\n", select);
				system("pause");
				system("cls");
				break;
			case 10:
				//op10();
				printf("\n\nOpção %d foi elecionada.\n\n", select);
				system("pause");
				system("cls");
				break;
			case 11:
				//op11();
				printf("\n\nOpção %d foi elecionada.\n\n", select);
				system("pause");
				system("cls");
				break;
			case 12:
				//op12();
				printf("\n\nOpção %d foi elecionada.\n\n", select);
				system("pause");
				system("cls");
				break;
			case 0:
				printf("\n\nYou chosed the option \"0\"!\n\n");
				printf("The program is closing!\n");
				printf("See you!\n\n");
				loop = false;
				system("pause");
				system("cls");
				break;
			default:
				select = '\0';
				loop = true;
				printf("\n\nInvalid Option\n");
				printf("Please, chose some option of the menu.\n\n");
				system("pause");
				system("cls");
		};
	}while(loop == true);
	
	return 0;
};
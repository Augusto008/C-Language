#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>




//------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------     Functions     ---------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------     BMI Calculator (parameter by value)
double bmiCalc(double bmiResult){
	
	float height, weight = 0;
	
	printf("\n\nPlease enter your height(in meters): ");
	scanf("%f", &height);
	printf("Please enter your weight(in Kg): ");
	scanf("%f", &weight);
	
	bmiResult = weight / (height * height);
	
	return(bmiResult);
};




//------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------     Procedures     --------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------------

void op1(){		//--------------------------------------------------------     C language attributes
	
	bool	cycle = 1;
	int		selection = 0;

	do{
		printf("|-----------------------------------  The Operators  -----------------------------------|");
		printf("\n\nHere, you'll will see the types of variables and the operators working.");
		printf("\nTo initiate, please, chose one of the options below:");
		
		printf("\n\n1 _________________ =");
		
		printf("\n\nAritmetical Operators:");
		printf("\n2 _________________ +");
		printf("\n3 _________________ -");
		printf("\n4 _________________ *");
		printf("\n5 _________________ /");
		printf("\n6 _________________ %%");
		
		printf("\n\nRelational Operators:");
		printf("\n7 _________________ ==");
		printf("\n8 _________________ >");
		printf("\n9 _________________ >=");
		printf("\n10 ________________ <");
		printf("\n11 ________________ <=");
		printf("\n12 ________________ !=");
		
		printf("\n\nLogic Operators:");
		printf("\n13 ________________ &&");
		printf("\n14 ________________ ||");
		printf("\n15 ________________ !");
		
		printf("\n\n16 ________________ Rules between the operators and precedence order:");
		
		printf("\n\n17 ________________ Pre Increments and Post Increments:");
		
		printf("\n\n0 ________________ Return to main menu");
		
		printf("\n\n=> ");
		scanf("%d", &selection);
		
		system("cls");
		
		switch (selection) {
			case 1:
				printf("The operator \"=\" makes the relation between the value and the operator or between two operators.");
				printf("\nThis operator basically assign a value to a variable:");
				printf("\n\nFor example:");
				printf("\nnum = 10;			//The number \"10\" is assigned to the variable named as num");
				printf("\nname = \'A\';			//The letter \"A\" is assigned to the variable named as name by using simple quotes.");
				printf("\nnamed[] = \"Avalon\";		//The string \"Avalon\" is assigned to the array variable named as name by using double quotes.");
				printf("\nvariant = name;			//The variable variant recieves the value of the variable name.\n\n");
				break;
			case 2:
				printf("You choose the option %d.\n\n", selection);
				break;
			case 3:
				printf("You choose the option %d.\n\n", selection);
				break;
			case 4:
				printf("You choose the option %d.\n\n", selection);
				break;
			case 5:
				printf("You choose the option %d.\n\n", selection);
				break;
			case 6:
				printf("You choose the option %d.\n\n", selection);
				break;
			case 7:
				printf("You choose the option %d.\n\n", selection);
				break;
			case 8:
				printf("You choose the option %d.\n\n", selection);
				break;
			case 9:
				printf("You choose the option %d.\n\n", selection);
				break;
			case 10:
				printf("You choose the option %d.\n\n", selection);
				break;
			case 11:
				printf("You choose the option %d.\n\n", selection);
				break;
			case 12:
				printf("You choose the option %d.\n\n", selection);
				break;
			case 13:
				printf("You choose the option %d.\n\n", selection);
				break;
			case 14:
				printf("You choose the option %d.\n\n", selection);
				break;
			case 15:
				printf("You choose the option %d.\n\n", selection);
				break;
			case 16:
				printf("You choose the option %d.\n\n", selection);
				break;
			case 17:
				printf("You choose the option %d.\n\n", selection);
				break;
			case 0:
				cycle = 0;
				printf("Redirecting to the main menu");
				printf("\n\n...");
				break;
			default:
				selection = '\0';
				cycle = 1;
				printf("!!!!    INVALID OPTION    !!!!");
				printf("\n\nPlease, choose some option of the menu.\n\n");
		};
		system("pause");
		system("cls");
	}while(cycle == true);
};

void op2(){		//--------------------------------------------------------    BMI (Body Mass Index)
	
	char	looping = '\0';
	double	bmi = 0;
	
	do{
		system("cls");
		printf("|-----------------------------------  Body Mass Index  -----------------------------------|");
		printf("\n\nThis index is acquired by dividing the weight(in Kilogram) by the height(in meter) squared.");
		printf("\nThe levels of BMI are bellow:");
		printf("\n\nBMI classification:");
		printf("\nBMI <= 18.5				Under Weight");
		printf("\n18.5 < BMI <= 24.9			Normal Weight");
		printf("\n24.9 < BMI <= 29.9			Overweight");
		printf("\n29.9 < BMI <= 34.9			Obseity 1");
		printf("\n34.9 < BMI <= 39.9			Obesity 2");
		printf("\nBMI > 39.9				Obesity 3 or Morbid");
		printf("\n\n|-----------------------------------------------------------------------------------------|");
		
		bmi = bmiCalc(bmi);
		
		printf("\n\nYour BMI level is: %.1f", bmi);
		
		if (bmi <= 18.5) {
			printf("\nYou're under Weight\n\n");
		}else if (bmi > 18.5 && bmi <= 24.9){
			printf("\nYou're OK. Your BMI is normal.\n\n");
		}else if (bmi > 24.9 && bmi <= 29.9){
			printf("\nBe Careful. You are Overweight.\n\n");
		}else if (bmi > 29.9 && bmi <= 34.9){
			printf("\nCaution! You are in obesity level 1.\n\n");
		}else if (bmi > 34.9 && bmi <= 39.9){
			printf("\nDanger!\n You are in obesity level 2.\nYou need to see a doctor.\n\n");
		} else {
			printf("\nDANGER!!\nYou are in obesity leve 3.\nFor the sake of your health, please go to a Doctor!\n\n");
		};
		
		system("pause");
		
		do{
			system("cls");
			printf("Do you want to make another search? ");
			printf("\nEnter \"Y\" for YES or \"N\" for NO: ");
			scanf("%c", &looping);
			if (looping != 'y' && looping != 'Y' && looping != 'n' && looping != 'N') {
				looping = '\0';
				printf("\n\nINVALID OPTION\n\n");
				system("pause");
			};
		} while (looping != 'y' && looping != 'Y' && looping != 'n' && looping != 'N');
		
		system("cls");
	} while (looping == 'y' || looping == 'Y');
};




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
		printf("1 - C language operators\n");
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
				op1();
				break;
			case 2:
				op2();
				break;
			case 3:
				//op3();
				printf("\n\nYou chose the option %d.\n\n", select);
				break;
			case 4:
				//op4();
				printf("\n\nYou chose the option %d.\n\n", select);
				break;
			case 5:
				//op5();
				printf("\n\nYou chose the option %d.\n\n", select);
				break;
			case 6:
				//op6();
				printf("\n\nYou chose the option %d.\n\n", select);
				break;
			case 7:
				//op7();
				printf("\n\nYou chose the option %d.\n\n", select);
				break;
			case 8:
				//op8();
				printf("\n\nYou chose the option %d.\n\n", select);
				break;
			case 9:
				//op9();
				printf("\n\nYou chose the option %d.\n\n", select);
				break;
			case 10:
				//op10();
				printf("\n\nYou chose the option %d.\n\n", select);
				break;
			case 11:
				//op11();
				printf("\n\nYou chose the option %d.\n\n", select);
				break;
			case 12:
				//op12();
				printf("\n\nYou chose the option %d.\n\n", select);
				break;
			case 0:
				printf("\n\nYou chose the option \"0\"!\n\n");
				printf("The program is closing!\n");
				printf("See you!\n\n");
				loop = false;
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

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>




//------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------     Functions     ---------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------------

//Functions need to return the value of a counter saying how many operations were performed.

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

//--------------------------------------------------------     Biggest X Smallest (parameters by reference)
void bigSml(int *larger, int *lg_Position, float *lesser, float *ls_Position, float *plus, double *average){ //Receveing the address of the values by using pointers
	
	float	numbers[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '\0'};
	int		control = 0;
	
	for (control = 0; control < 10; control++) {
		printf("Enter with the %dst number: ", control + 1);
		scanf("%f", &numbers[control]);
		*plus += numbers[control];
		if(control == 0){
			*larger = numbers[control];
			*lesser = numbers[control];
		};
		if (numbers[control] > *larger){
			*larger = numbers[control];
			*lg_Position = control;
		};
		if(numbers[control] < *lesser){
			*lesser = numbers[control];
			*ls_Position = control;
		};
	};
	
	control = 0;
	*average = *plus / 10;
};

float areaCalc(float form){
	float res = 0;
	
	/*
	circle			            =>		area = pi * (radius * radius)		pi = 3.141592
	quatrefoil		          =>		area = 2 * (2 * pi * (radius * radius)) + (side * side)		area = dobro da área de dois semicírculos + área do quadrado interno
	semicircle		          =>		area = (pi * (radius * radius)) / 2
	curvilinear triangle		=>		searching...
	triangle		            =>		area = (base * height) / 2;
	square			            =>		area = side * side;
	trapezoid		            =>		area = ((biggerBase + smallerBase) * height) / 2;
	ellipse			            =>		area = (majorRadius * minorRadius) * pi;
	rectangle		            =>		area = width + height;
	pentagon	            	=>		area = 5 * ((side * height) / 2);
	hexagon            			=>		searching...
	*/
	
	return res;
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
				printf("The operator \"+\" it's responsable by the sum operation.");
				printf("\nThis operator basically sums the values around it:");
				printf("\n\nExamples:");
				printf("\nsum = 2 + 8;			//The variable \"sum\" recieves \"10\"\n");
				printf("\nsum = num1 + num2;		//\"sum\" recieves the sum between the variables \"num1\" and \"num2\"\n");
				printf("\nsum = sum + num1;		//\"sum\" recieves the sum between the variables \"sum1\" and \"num1\"\n");
				printf("\nsum += 8;			//\"sum\" adds \"8\" to the value of the variable \"sum\"\n");
				printf("\nsum = sum + sum;		//\"sum\" recieves the sum between the variable \"sum\" and itself\n\n");
				break;
			case 3:
				printf("The operator \"-\" it's responsable by the subtraction operation.");
				printf("\nThis operator basically subtract the value in the left by the value in the right.");
				printf("\n\nFor example:");
				printf("\nsub = 10 - 6;			//The variable \"sub\" recieves \"4\"\n");
				printf("\nsub = num1 - num2;		//\"sub\" recieves the subtraction of \"num1\" by \"num2\"\n");
				printf("\nsub = sub - num1;		//\"sub\" recieves the subtraction of \"sub\" by \"num1\"\n");
				printf("\nsub -= 2;			//\"sub\" recieves the subtraction of \"sub\" by \"num1\"\n");
				printf("\nsub = sub - sub;		//\"sub\" recieves the subtraction of \"num1\" by itself\n\n");
				break;
			case 4:
				printf("The operator \"*\" it's responsable by the multiplication operation.");
				printf("\nThis operator basically multiplicates the values around it:");
				printf("\n\nFor example:");
				printf("\nmult = 3 * 4;			//The variable \"mult\" recieves \"12\"\n");
				printf("\nmult = num1 * num2;		//\"mult\" recieves the multiplication between \"num1\" and \"num2\"\n");
				printf("\nmult = mult * num1;		//\"mult\" recieves the multiplication between \"mult\" and \"num1\"\n");
				printf("\nmult *= 2;			//\"mult\" recieves the multiplication between \"mult\" and \"2\"\n");
				printf("\nmult = mult * mult;		//\"mult\" recieves the multiplication between \"num1\" and itself\n\n");
				break;
			case 5:
				printf("The operator \"/\" it's responsable by the division operation.");
				printf("\nThis operator basically divides the value in it's left by the value in it's right:");
				printf("\n\nFor example:");
				printf("\ndiv = 9 / 3;			//The variable \"div\" recieves \"3\"\n");
				printf("\ndiv = num1 / num2;		//\"div\" recieves the division of \"num1\" by \"num2\"\n");
				printf("\ndiv = div / num1;		//\"div\" recieves the division of \"div\" by \"num1\"\n");
				printf("\ndiv /= 7;			//\"div\" recieves the division of \"div\" by \"7\"\n");
				printf("\ndiv = div / div;		//\"div\" recieves the division of \"div\" by itself\n\n");
				break;
			case 6:
				printf("The operator \"%%\" it's responsable by the module operation.");
				printf("\nThis operator basically return the rest of the division by the values around it.");
				printf("\n\nFor example:");
				printf("\nmod = 15 %% 8;			//The variable \"div\" recieves \"7\"\n");
				printf("\nmod = num1 %% num2;		//\"mod\" recieves the rest of the division of \"num1\" by \"num2\"\n");
				printf("\nmod = mult %% num1;		//\"mod\" recieves the rest of the division of \"mod\" by \"num1\"\n");
				printf("\nmod %%= 2;			//\"mod\" recieves the rest of the division of \"mod\" by \"2\"\n");
				printf("\nmod = mult %% mult;		//\"mod\" recieves the rest of the division of \"mod\" by itself\n\n");
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

void op3(){		//--------------------------------------------------------     Biggest X Smallest
	
	char	looping = '\0';
	int		b_Position, s_Position = 0;
	float	biggest, smallest, sum = 0;
	double	media = 0;
	
	do{
		printf("Enter with 10 digits.\n\n");
		
		bigSml(&b_Position, &s_Position, &biggest, &smallest, &sum, &media);
	
		printf("\n\nThe Smallest number is: %.2f and can be found in the %dst position of the array named as numbers.", smallest, s_Position);
		printf("\nThe media of the values in the array numbers is: %.2f", media);	
		printf("\nThe biggest number is %.2f and can be found in the %dst position of the array named as numbers.", biggest, b_Position);
		printf("\nThe sum of the values in the array numbers is: %.2f", sum);
		
		do{
			system("pause");
			system("cls");
			printf("\n\nDo you want to make another test?");
			printf("\nEnter \"Y\" for YES or \"N\" for NO: ");
			scanf("%c", &looping);
			if (looping != 'y' && looping != 'Y' && looping != 'n' && looping != 'N') {
				looping = '\0';
				printf("\n\nINVALID OPTION\n\n");
			};
		} while (looping != 'y' && looping != 'Y' && looping != 'n' && looping != 'N');
	} while (looping == 'y' || looping == 'Y');
	
	system("cls");
};

void op4(){		//--------------------------------------------------------    Area of the Triangle
	
	int		column, line, choseForm = 0;
	float	align = 0;
	float	areaValues[12][11];
	
	/*char	geometry[13][12] = 	{{"circle"}, 		//0
								{"quatrefoil"},		//1
								{"semicircle"}, 	//2
								{"curvilinear"}, 	//3
								{"triangle"}, 		//4
								{"triangle"}, 		//5
								{"square"}, 		//6
								{"trapezoid"}, 		//7
								{"ellipse"}, 		//8
								{"rectangle"}, 		//9
								{"pentagon"}, 		//10
								{"hexagon"}};		//11

	for (line = 0; line < 13; line++){
		
		if(line == 0 || line == 6){
			for (column = 6; column < 12; column++){
				geometry[line][column] = '\0';
			};
		} else if (line == 1 || line == 2){
			for (column < 12; column++){
				geometry[line][column] = '\0';
			};
		} else if (line == 3){
			for (column = 11; column < 12; column++){
				geometry[line][column] = '\0';
			};
		} else if (line == 4 || line == 5 || line == 10){
			for (column = 8; column < 12; column++){
				geometry[line][column] = '\0';
			};
		} else if (line == 7 || line == 9 || line == 11){
			for (column = 9; column < 12; column++){
				geometry[line][column] = '\0';
			};
		} else if (line == 8){
			for (column = 7; column < 12; column++){
				geometry[line][column] = '\0';
			};
		} else {
			for (column = 0; column < 12; column++){
				geometry[line][column] = '\0';
			};
		};
		
	};
	*/
	
	char geometry[13][12] =		{{'c',  'i',  'r',  'c',  'l',  'e',  '\0', '\0', '\0', '\0', '\0', '\0'}, 	//0 => circle
								{ 'q',  'u',  'a',  't',  'r',  'e',  'f',  'o',  'i',  'l',  '\0', '\0'},	//1 => quatrefoil
								{ 's',  'e',  'm',  'i',  'c',  'i',  'r',  'c',  'l',  'e',  '\0', '\0'}, 	//2 => semicircle
								{ 'c',  'u',  'r',  'v',  'i',  'l',  'i',  'n',  'e',  'a',  'r',  '\0'}, 	//3 => curciliear
								{ 't',  'r',  'i',  'a',  'n',  'g',  'l',  'e',  '\0', '\0', '\0', '\0'}, 	//4 => triangle
								{ 't',  'r',  'i',  'a',  'n',  'g',  'l',  'e',  '\0', '\0', '\0', '\0'}, 	//5 => triangle
								{ 's',  'q',  'u',  'a',  'r',  'e',  '\0', '\0', '\0', '\0', '\0', '\0'}, 	//6 => square
								{ 't',  'r',  'a',  'p',  'e',  'z',  'o',  'i',  'd',  '\0', '\0', '\0'}, 	//7 => trapezoid
								{ 'e',  'l',  'l',  'i',  'p',  's',  'e',  '\0', '\0', '\0', '\0', '\0'}, 	//8 => ellipse
								{ 'r',  'e',  'c',  't',  'a',  'n',  'g',  'l',  'e',  '\0', '\0', '\0'}, 	//9 => rectangle
								{ 'p',  'e',  'n',  't',  'a',  'g',  'o',  'n',  '\0', '\0', '\0', '\0'}, 	//10 => pentagon
								{ 'h',  'e',  'x',  'a',  'g',  'o',  'n',  '\0', '\0', '\0', '\0', '\0'},	//11 => hexagon
								{ '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0'}};	//12 => \0
	
	for (line = 0; line < 12; line++){
		for (column = 0; column < 11; column++){
			areaValues[line][column] = 0;
		};
	};
	
	printf("What geometric form do you want to found the value?");
	for(line = 0; line < 13; line++){
		if (line < 4){
			printf("\n%d ________________ ", line + 1);
		} else if (line == 4) {
			printf(" ");
		} else {
			printf("\n%d ________________ ", line);
		};
		for(column = 0; column < 12; column++){
			if(geometry[line][column] != '\0'){
				printf("%c", geometry[line][column]);
			} else {
				column = 12;
			};
		};
	};
	scanf("%d", &choseForm);
	
	//create loop and a condition to control amount of values into the matrix that contains results        &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
	areaValues[line][column] = areaCalc(align);

	system("pause");
	system("cls");
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
				op3();
				break;
			case 4:
				op4();
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

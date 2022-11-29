#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int main(){		//--------------------------------------------------------     Z Value
	
	setlocale(LC_ALL, "english");
	
	bool	cycle = 1;
	int		selection = 0;

	do{
		printf("|-----------------------------------  The Operators  -----------------------------------|");
		printf("\n\nHere, you'll will see the types of variables and the operators working.");
		printf("\nTo initiate, please, chose one of the options below:");
		
		printf("\n\nAssignment Operator:");
		printf("\n1 _________________ =");
		
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
	
	return 0;
};

// CS201 - Assignment 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Author: Usman Khan
//
//You should only get idea from this and create your programme.
//Otherwise you will get zero marks.

#include <iostream>
#include <stdlib.h> 
using namespace std;

void paper_generator(int,int);

int main()  // NOLINT(bugprone-exception-escape)
{
	//Prerequisites for the menu.
	int selection = 0;
	int number_of_questions;
	//We are using do-while loop beacuse we want to run this code again and again until the user want to exit.
	do
	{
		cout << "1: First Grade." << endl;
		cout << "2: Second Grade." << endl;
		cout << "3: Third Grade." << endl;
		cout << "4: Fourth Grade." << endl;
		cout << "5: Fifth Grade." << endl << endl; //Two endl for two lines.
		cout << "Please select the grade, use numbers 1 to 5: " ;
		cin >> selection;  //Getting input form the user.
		if (selection > 0 && selection < 6)
		{
			cout << endl << "Enter the number of questions you want to generate: " ;
			cin >> number_of_questions;
		}
		// Input completed now act on the input.
		switch (selection)
		{
		case 1:
			paper_generator(1,number_of_questions);
			break;
		case 2:
			paper_generator(2,number_of_questions);
			break;
		case 3:
			paper_generator(3,number_of_questions);
			break;
		case 4:
			paper_generator(4,number_of_questions);
			break;
		case 5:
			paper_generator(5,number_of_questions);
			break;
		default:
			cout << "Invalid input please try again." << endl << endl;
		}

		system("pause");
		cout << "Type 0 to Re-Run the program or type -1 to exit." << endl << endl;
		cin >> selection;
	}
	while (selection != -1);
	
	return 0;
}


void paper_generator(int grade_number, int number_of_questions)
{
	//Creating a grid.

	cout << "*********************************************************************" << endl << endl;
	
	//Generate the questions and print.
	//Using while loop to control the number of questions.
	int i = 0;
	int flag = 0;
	while (i <number_of_questions)
	{
		flag = rand()%2; //Flag will determine if the question will be addition or subtraction.
		// rand()%2 will return value 0 or 1.
		if (flag == 1) //If 1 we will generate question of addition.
		{
			int operator1, operator2;
			//generate number of digits according to grade. For this using switch.
			switch (grade_number)
			{
			case 1:
				operator1 = (10 + rand() % (99-10+1) );
				operator2 = (10 + rand() % (99-10+1) );
				cout << operator1 << " + " << operator2 << " = \t\t" << endl;
				break;
			case 2:
				operator1 = (100 + rand() % (999-100+1) );
				operator2 = (100 + rand() % (999-100+1) );
				cout << operator1 << " + " << operator2 << " = \t\t" << endl;
				break;
			case 3:
				operator1 = (1000 + rand() % (9999-1000+1) );
				operator2 = (1000 + rand() % (9999-1000+1) );
				cout << operator1 << " - " << operator2 << " = \t\t" << endl;
				break;
			case 4:
				operator1 = (10000 + rand() % (99999-10000+1) );
				operator2 = (10000 + rand() % (99999-10000+1) );
				cout << operator1 << " + " << operator2 << " = \t\t" << endl;
				break;
			case 5:
				operator1 = (100000 + rand() % (999999-100000+1) );
				operator2 = (100000 + rand() % (999999-100000+1) );
				cout << operator1 << " + " << operator2 << " = \t\t" << endl;
				break;

				//No need of default.
			}
		}
		else //else question of subtraction.
		{
			int operator1, operator2;
			//generate number of digits according to grade. For this using switch.
			switch (grade_number)
			{
			case 1:
				operator1 = (10 + rand() % (99-10+1) );
				operator2 = (10 + rand() % (99-10+1) );
				cout << operator1 << " - " << operator2 << " = \t\t" << endl;
				break;
			case 2:
				operator1 = (100 + rand() % (999-100+1) );
				operator2 = (100 + rand() % (999-100+1) );
				cout << operator1 << " - " << operator2 << " = \t\t" << endl;
				break;
			case 3:
				operator1 = (1000 + rand() % (9999-1000+1) );
				operator2 = (1000 + rand() % (9999-1000+1) );
				cout << operator1 << " - " << operator2 << " = \t\t" << endl;
				break;
			case 4:
				operator1 = (10000 + rand() % (99999-10000+1) );
				operator2 = (10000 + rand() % (99999-10000+1) );
				cout << operator1 << " - " << operator2 << " = \t\t" << endl;
				break;
			case 5:
				operator1 = (100000 + rand() % (999999-100000+1) );
				operator2 = (100000 + rand() % (999999-100000+1) );
				cout << operator1 << " - " << operator2 << " = \t\t" << endl;
				break;

				//No need of default.
			}
		}
		
		i++;
	}

	//closing grid.
	cout << endl << endl << "************************************************************" << endl << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

/*
Author: Karamveer Dhillon
File Name: Dhillon_Topic4_Quiz.cpp
Date: 12 March 2025
Description: This program takes the number score from the user and calculates the letter grade and quality point based on the score.
*/

// Imported the required libraries.
#include <iostream>

// used namespace std to avoid writing std:: before cout and cin.
using namespace std;

// declared the main function.
int main()
{
	// declared the integer variable to store the score.
	int Marks;

	// declared the character variable to store the letter grade.
	char Grade;

	// declared the string variable to store the quality point.
	string Quality_Point;

	// displayed the message to the user to enter the score and stored the input in "Marks".
	cout << "This program calculates the letter grade and quality point based on the score." << endl;
	cout << "" << endl;
	cout << "Please enter the score in the range of 0 to 100: " << endl;

	// stored the input in "Marks".
	cin >> Marks;

	// checked if the score is in the range of 0 to 100.
	if (Marks >= 0 && Marks <= 100)
	{
		// checked the score and assigned the letter grade based on the score.
		if (Marks >= 90)
		{
			Grade = 'A';
		}
		else if (Marks >= 80 && Marks < 90)
		{
			Grade = 'B';
		}
		else if (Marks >= 70 && Marks < 80)
		{
			Grade = 'C';
		}
		else if (Marks >= 60 && Marks < 70)
		{
			Grade = 'D';
		}
		else
		{
			Grade = 'F';
		}

		// assigned the quality point based on the letter grade using switch function.
		switch (Grade)
		{
		case 'A':
			Quality_Point = "4";
			break;
		case 'B':
			Quality_Point = "3";
			break;
		case 'C':
			Quality_Point = "2";
			break;
		case 'D':
			Quality_Point = "1";
			break;
		case 'F':
			Quality_Point = "none";
			break;
		}
	}
	// if the score is not in the range of 0 to 100 then displayed the error message
	// and asked to the user to enter the score again.
	else
	{
		cout << "The score is invalid." << endl;
		cout << "Please enter the score in the range of 0 to 100." << endl;
		cin >> Marks;

		// checked the score and assigned the letter grade based on the score.
		if (Marks >= 0 && Marks <= 100)
		{
			if (Marks >= 90)
			{
				Grade = 'A';
			}
			else if (Marks >= 80 && Marks < 90)
			{
				Grade = 'B';
			}
			else if (Marks >= 70 && Marks < 80)
			{
				Grade = 'C';
			}
			else if (Marks >= 60 && Marks < 70)
			{
				Grade = 'D';
			}
			else
			{
				Grade = 'F';
			}
			// assigned the quality point based on the letter grade using switch function.
			switch (Grade)
			{
			case 'A':
				Quality_Point = "4";
				break;
			case 'B':
				Quality_Point = "3";
				break;
			case 'C':
				Quality_Point = "2";
				break;
			case 'D':
				Quality_Point = "1";
				break;
			case 'F':
				Quality_Point = "none";
				break;
			}
		}
           // if the score is not in the range of 0 to 100 then displayed the error message.
	else cout << "The score is invalid." << endl;
	} 
    // Returned 0 to end the program.
	return 0;
}

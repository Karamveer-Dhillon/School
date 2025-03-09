/*Author: Karamveer Dhillon
 File Name: dhillon_Topic4_Lab1.cpp
 Date: Mar 05 2025
 Description: This program is guessing a random number between 1 and 10 and then asking the user to give a number between 1 and 10 and then compares the user's number with the random number and tells the user if the number is too high or too low or if the user guessed the number correctly.



*/

#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int main()
{

	srand((unsigned)time(0));
	int random_num = rand() % 10 + 1;
	
	string user_name;
	unsigned int user_num;

	cout << "Please write your full name" << endl;
	getline(cin, user_name);

	cout << "please enter a number between 1 and 10" << endl;
	cin >> user_num;
	
	if (user_num < 1 || user_num > 10)
	{
		cout << "Please enter a valid number between 1 and 10" << endl;
		cin >> user_num;
		
		if (user_num < 1 || user_num > 10)
		{
			cout << "Please enter a valid number between 1 and 10" << endl;
			cin >> user_num;
			
		}
		
	}
	
	
	if (user_num > random_num)
	{
		cout << "Too High !!" << endl;
		cout << "Please enter a new number between 1 and 10 again" << endl;
		cin >> user_num;
		
			if (user_num > random_num) cout << "Too High !!" << endl;
			if (user_num < random_num) cout << "Too Low !!" << endl;
			
			else if (user_num == random_num) cout << "You guessed it!!" << endl;
			
			
	}
		else if (user_num < random_num)
	{
		cout << "Too Low!!" << endl;
		cout << "Please enter a new number between 1 and 10" << endl;
		cin >> user_name;
		
		if (user_num > random_num) cout << "Too High !!" << endl;
		if (user_num < random_num) cout << "Too Low !!" << endl;
		else if (user_num == random_num) cout << "You guessed it!!" << endl;
	}
		else cout << "You guessed it!! " << endl;

	cout << "The number was " << random_num << endl;

	return 0;
}


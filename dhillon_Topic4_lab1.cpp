/*




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
		
	}
	else if (user_num > random_num)
	{
		cout << "Too High !!" << endl;
		cout << "Please enter a new number between 1 and 10" << endl;
		cin >> user_name;
	}
	else if (user_num < random_num)
	{
		cout << "Too Low!!" << endl;
		cout << "Please enter a new number between 1 and 10" << endl;
		cin >> user_name;
	}
	else cout << "You guessed it!! " << endl;

	cout << "The number was " << random_num << endl;

	return 0;
}


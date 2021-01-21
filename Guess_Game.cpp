#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void)
{
	int guess;
	char answer = 'y';

	srand(time(NULL)); //Creates numbers randomly
	while (answer == 'y')
	{
		int num = rand() % 100; //This will choose the created number between 0-100

		cout << "Guess a number between 0-100 : ";
		cin >> guess;

		while (guess != num)
		{
			if (guess < num){
				cout << guess <<" is less than the number" << endl;
			}
			else {
				cout << guess <<" is more than the number" << endl;
			}

			cout << "Guess again : ";
			cin >> guess;
		}

		cout << "Congratulations the number is " << num << endl;
		cout << "Would you like to play again ?" << endl << "(Yes: y, No: n) : ";
		cin >> answer;
	}
	cout << "Thank you for playing. See you again." << endl;

	return(0);
}
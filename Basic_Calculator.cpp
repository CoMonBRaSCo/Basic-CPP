#include <iostream>
using namespace std;

int main(void) 
{
	int num_1, num_2, outcome;
	bool calc;
	char oper, ans = 'y';

	while (ans == 'y')
	{
		cout << "Input an operation : ";
		cin >> num_1 >> oper >> num_2;

		calc = true;
		switch (oper)
		{
		case '+':
			outcome = num_1 + num_2;
			break;
		case '-':
			outcome = num_1 - num_2;
			break;
		case '*':
			outcome = num_1 * num_2;
			break;
		case '/':
			if (num_2 == 0) { //Cannot divide 0
				cout << "Dividend cannot be zero !!!" << endl;
				calc = false;
				break;
			}
			outcome = num_1 / num_2;
			break;
		case '%':
			outcome = num_1 % num_2;
			break;
		default:
			cout << "Wrong Operation !!!" << endl;
			calc = false;
			break;
		}

		if (calc) //if calc is true 
			cout << "= " << outcome << endl;

		cout << "Would you like to continue ?" << endl << "(Yes: y, No: n) : ";
		cin >> ans;		
	}

	return(0);
}

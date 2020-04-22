//invalid calculator v2 - update 
#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	float a, b, c, result;
	char act, act2, m;
mee:
	cout << "\nSelect mode\n! - for common mode, & - for advanced mode: "; 
	cin >> m;

	if (m == '!') //Common mode
	{
		cout << "You pick - COMMON MODE" << endl;

		cout << "What we will doing? (+, -, /, *): ";
		cin >> act;

		cout << "Enter the first num: ";
		cin >> a;

		cout << "Enter the second num: ";
		cin >> b;

		if (act == '+')
		{
			result = a + b;
		}
		else if (act == '-')
		{
			result = a - b;
		}
		else if (act == '/')
		{
			result = a / b;
		}
		else if (act == '*')
		{
			result = a * b;
		}
		else
		{
			cout << "Sorry, fatal error! :( " << endl;
			goto mee;
		}
		cout << "The result is: " << result;
		goto mee;
	} 
	else if (m == '&') //Advanced mode
	{
		cout << "You pick - ADVANCED MODE" << endl;
		cout << "\nEnter a+b+c or a-b-c or a+b-c or a-b+c: ";
		cin >> a;
		cin >> act;
		cin >> b;
		cin >> act2;
		cin >> c;
		if (act == '+' && act2 == '+')
		{
			result = a + b + c;
		}
		else if (act == '-' && act2 == '-')
		{
			result = a - b - c;;
		}
		else if (act == '+' && act2 == '-')
		{
			result = a + b - c;
		}
		else if (act == '-' && act2 == '+')
		{
			result = a - b + c;
		}
		else
		{
			cout << "Sorry! Fatal error!" << endl;
		}
		cout << "The result is : " << result << endl;
		goto mee;

		system("pause");
		return 0;
	}
}
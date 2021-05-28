//This is a c++ calculator program.

#include<iostream>
using namespace std;

int main()
{
	char ch;
	do {
		
		int num1, num2;
		cout << "Enter Two Numbers: ";
		cin >> num1 >> num2;
		cout << endl;
		
		cout <<"Enter an operator--> (+, -, *, /, %) or (X) to exit : ";
		cin >> ch;
		cout << endl;
		
		int res = 0;
	
		switch(ch)
		{
			case '+':
				res = num1 + num2;
				cout << "Result = " << res << endl;
				break;
				
			case '-':
				res = num1 - num2;
				cout << "Result = " << res << endl;
				break;
				
			case '*':
				res = num1 * num2;
				cout << "Result = " << res << endl;
				break;
				
			case '/':
				if(num2 != 0)
				{
					res = num1 / num2;
					cout << "Result = " << res << endl;
					break;
				}
				else
				{
					cout << "CANNOT DIVIDE BY ZERO!!! PLEASER ENTER A NON-ZERO NUMBER FOR 2nd NUMBER INPUT.";
					break;
				}
			
			// It is for calculating modulus.
			case '%':
				res = num1 % num2;
				cout << "Result = " << res << endl;
				break;
				
			case 'X':
				break;
				
			default :
				cout << "INVALID CHOICE!!! PLEASE ENTER CORRECT OPERATOR...";
				break;
		}
		cout << "\n----------------------------------------------------\n";
	}while(ch != 'X');
	
	
	return 0;
}

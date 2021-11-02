#include <iostream>

using namespace std;

int fact (int n) 
{
	if (n < 2)
		return 1;
	return n * fact(n - 1);
}

int main () 
{
	int x=0;
	
	do 
	{
		cout << "pls enter ur number(1-479001600)" << endl;
		cin >> x;
	} while (x < 1 || x>479001600);

	int cond = 0;
	int y = 0;

	for (int i = 0 ; i < 12 ; i++ ) 
	{
		if (fact(i + 1) == x) 
		{
			cond = 1;
			y = i + 1;
		}
	}

	if (cond == 1)
	{
		cout << "yes, ur number is factorial of " << y << endl;
	}
	else cout << "no, ur number isn`t a factorial of smt" << endl;


	system("pause");
	return 0;
}
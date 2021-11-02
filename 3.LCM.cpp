#include <iostream>

using namespace std;

int main () 
{
	int x, y, LCM;

	cout << "pls enter ur first number" << endl;
	cin >> x;
	cout << "pls enter ur second number" << endl;
	cin >> y;

	int cond = 0;
	int Max = x*y;

	for (int i = 1 ; i < Max+1 ; i++ ) 
	{
		if (i % x == 0) 
		{
			if (i % y == 0) 
			{
				cond = 1;
				LCM = i;
				break;
			}
		}
	}

	if (cond == 1)
	{
		cout << "ur LCM = " << LCM << endl;
	}

	else cout << "couldn`t find any LCM!!!" << endl;


	system("pause");
	return 0;
}
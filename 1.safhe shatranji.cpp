#include <iostream>

using namespace std;

int main () 
{
	int sefid = 35, siah = 36;
	int m, n;

	cout << "pls enter ur M(Row)" << endl;
	cin >> m;
	cout << "pls enter ur N(Column)" << endl;
	cin >> n;

	for (int i = 0 ; i < n ; i++ ) 
	{
		for (int j = 0 ; j < m ; j++ ) 
		{
			if (j % 2 == 0) cout << char(sefid);

			else cout << char(siah);
		}
		cout << endl;
	}




	system("pause");
	return 0;
}
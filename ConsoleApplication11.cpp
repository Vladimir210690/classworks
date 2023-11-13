#include <iostream>

using namespace std;

int col = 10;
int row = 10;

int main()
{
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{

			if (i * j == 0) {
				continue;
			}
			if (i * j < 10)
			{
				cout << "  " << i * j << " ";
			}
			else
				cout << " " << i * j << " ";
		
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}
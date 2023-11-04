#include <iostream>
using namespace std;
int main()
{
	int floors = 5;
	int cantsps = floors-1;
	// which floor
	for (int i = 0; i <= floors; i++)
    {
    	//spaces
    	for (int j = 0; j <= cantsps; j++)
    	{
            cout << ("  ");
        }

        // for floor
        for (int k = 1; k <= 2 * i + 1 ; k++)
        {
            cout << ("* ");
        }

        cout << endl;
		cantsps--;
    }

	//for the inverse of the triangle
	for (int i = floors-1; i >= 0; i--)
	{
		for (int k = 0; k < floors - i;k++)
		{
			cout << ("  ");
		}
		for (int j = 1; j <= 2 * i +1; j++)
		{
			cout << ("* ");
		}

		cout << endl;
	}

	return 0;
}


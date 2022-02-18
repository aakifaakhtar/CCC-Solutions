#include <iostream>
using namespace std;

int main()
{
    int x = 0, y = 9;
    int col = 0, row = 0;
    int cnt = 0;
	int h;
	int twoh;
	int j;

	//cout<< "Enter the height of the bowtie: "<<endl;
	cin >> h;

	twoh = h*2;
	y = twoh - 1;
	j = h/2;

    while (col < h)
    {
        while (row < twoh)
        {
            if (row <= x || row >= y)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }

            ++row;

        }

        if (row == twoh)
        {
            cout << endl;
            ++cnt;
        }

        if (cnt <= j)
        {
            x += 2;
            y -= 2;
        }
        else
        {
            x -= 2;
            y += 2;
        }

        row = 0;
        ++col;
    }
    return 0;
}

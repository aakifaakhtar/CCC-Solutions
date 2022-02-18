#include <iostream>
#include <string>
using namespace std;

int main() {

	int I, A, B, C;
	string a[20], b[20], c[20];

	cin >> I;

	while(I--)
	{
		cin >> A >> B >> C;
		cin.ignore();

		for(int i = 0 ; i <A; i++)
			getline(cin,a[i]);

		for(int i = 0 ; i <B; i++)
			getline(cin,b[i]);

		for(int i = 0 ; i <C; i++)
			getline(cin, c[i]);

		for(int i = 0 ; i <A; i++)
			for(int j = 0 ; j <B; j++)
				for(int k = 0 ; k <C; k++)
					cout << a[i] << " " << b[j] << " " << c[k] << "." << endl;

		cout << endl;
	}

	return 0;
}

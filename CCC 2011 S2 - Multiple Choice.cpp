#include <iostream>
using namespace std;

int main()
{
	int n;
	int counter = 0;
	char *a;
	char *b;

    cin >> n;

	a = new char[n];
	b = new char[n];

    for (int x = 0; x < n; x++){
        cin >> a[x];
	}

	for (int x = 0; x < n; x++){
        cin >> b[x];

        if (b[x] == a[x]){
            counter++;
		}
    }

	cout << counter;

    return 0;
}

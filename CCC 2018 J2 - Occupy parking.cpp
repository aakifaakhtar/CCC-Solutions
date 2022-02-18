#include <iostream>
using namespace std;
int main() 
{
	int N, count=0;
	char *check1, *check2;

	cin >> N;
	check1 = new char[N];
	check2 = new char[N];
	cin >> check1;
	cin >> check2;

	for (int i = 0; i < N; ++i){
		if (check1[i] == check2[i] && check1[i] == 'C')
		{
			count++;
		}
	}

	cout << count << endl;

	return 0;
}

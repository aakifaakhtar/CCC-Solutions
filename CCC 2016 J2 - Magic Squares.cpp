#include <iostream>
using namespace std;

int main() {
  
	int sum[8];

	for(int i = 0 ; i < 8; i++) {
    sum[i] = 0;
	
	}
	
	int magicsquare[4][4];

	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			cin >> magicsquare[i][j];
			sum[i] += magicsquare[i][j];

			}
		}
	
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
		sum[i+4] += magicsquare[j][i];

		}
	}

	for(int i = 1; i < 7; i++) {
		if(sum[i-1] != sum[i] || sum[i] != sum[i+1]) {
		cout << "not magic" << endl;

		return 0;
	}
  }

  cout << "magic" << endl;

  return 0;
}

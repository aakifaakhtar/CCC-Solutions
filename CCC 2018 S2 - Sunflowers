#include <iostream>
using namespace std;

int n;
int main(){

    cin >> n;

	int flower1[n][n];
	int flower2[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> flower1[i][j];
        }
    }

    while (flower1[0][0] > flower1[0][1] || flower1[0][0] > flower1[1][0]){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++) flower2[n-j-1][i] = flower1[i][j];
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++) flower1[i][j] = flower2[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) cout << flower1[i][j] << " ";
        cout << endl;
    }

    return 0;
}

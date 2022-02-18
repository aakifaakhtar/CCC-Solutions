#include <iostream>
using namespace std;

int main() {
	
	int k;
    cin >> k;
    int friends[k];
    for(int i = 0; i < k; i++){
		friends[i] = i+1;
    }
    
    int m;
    cin >> m;
    
    int r[m];
    for(int i = 0; i < m; i++) {
    cin >> r[i];
    int counter = 0;
        for(int j = 0; j < k; j++) {
            if(friends[j] != 0) {
                counter++;
                if (counter == r[i]) {
                    friends[j] = 0;
                    counter = 0;
                }
            }
            
        }
    }
    for(int i = 0; i < k; i++) {
        if(friends[i] != 0) {
            cout << friends[i] << "\n";
        }
    }
    return 0;
}

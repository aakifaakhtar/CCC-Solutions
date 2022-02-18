#include <iostream>
using namespace std;
int main() {

int burger, side, drink, dessert;
int calorie_counter=0;

	//cout<< "Welcome to Chip's Fast Food Emporium"<<endl;

	//cout<< "Please enter a burger choice: "<<endl;
	cin >> burger;

	//cout<< "Please enter a side order choice: "<<endl;
	cin >> side;

	//cout<< "Please enter a drink choice: "<<endl;
	cin >> drink;

	//cout <<"Please enter a dessert choice: "<<endl;
	cin >> dessert;

	switch (burger) {
		case 1:
		calorie_counter = calorie_counter + 461;
		break;
		case 2:
		calorie_counter = calorie_counter + 431;
		break;
		case 3:
		calorie_counter = calorie_counter + 420;
		break;
		case 4:
		calorie_counter = calorie_counter + 0;
		break;
	}

	switch (side) {
		case 1:
		calorie_counter = calorie_counter + 100;
		break;
		case 2:
		calorie_counter = calorie_counter + 57;
		break;
		case 3:
		calorie_counter = calorie_counter + 70;
		break;
		case 4:
		calorie_counter = calorie_counter + 0;
		break;
	}

	switch (drink) {
		case 1:
		calorie_counter = calorie_counter + 130;
		break;
		case 2:
		calorie_counter = calorie_counter + 160;
		break;
		case 3:
		calorie_counter = calorie_counter + 118;
		break;
		case 4:
		calorie_counter = calorie_counter + 0;
		break;
	}

	switch (dessert) {
		case 1:
		calorie_counter = calorie_counter + 167;
		break;
		case 2:
		calorie_counter = calorie_counter + 266;
		break;
		case 3:
		calorie_counter = calorie_counter + 75;
		break;
		case 4:
		calorie_counter = calorie_counter + 0;
		break;
	}

	cout<< "Your total Calorie count is "<<calorie_counter<<"."<<endl;

	return 0;
}

#include<iostream>
using namespace std;

int main() {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 6; j++) {
			cout << j;
		}
		cout << endl;
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

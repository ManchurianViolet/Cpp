#include<iostream>
#include<string>
using namespace std;

int main() {
	string something;
	cout << "���ڿ� �Է�: ";
	getline(cin, something);
	for (int i = 0; i < something.length(); i++) {
		cout << endl<<something.substr(0, i);
	}
}
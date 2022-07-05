#include<iostream>
#include<string>
using namespace std;

int main() {
	string something;
	cout << "문자열 입력: ";
	getline(cin, something);
	for (int i = 0; i < something.length(); i++) {
		cout << endl<<something.substr(0, i);
	}
}
#include<iostream>
using namespace std;

int main(){
	// there are different type of data type in c++
	char s = 's'; // '<char>' for char
	int n; // int n overflow happen if n is more than around 10e9.
	long long long_n; // the overflow happen if n is more than 10e18.
	bool t; // bool has two variable true or any number not zero. false has zero.
	string st; // collection of char is string.

	st = "hello world!";
	cout << st << "\n";
	return 0;
}

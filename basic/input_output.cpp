#include<bits/stdc++.h>
using namespace std;

int main(){
	// for input cin >> <input>, cin in end at nextline or space.
	int a,b;
	cin >> a >> b;
	
	// output is cout << <output>

	cout << a << " , " << b << "\n";
	
	// for the select whole line use getline
	string s;
	cin.ignore(); // to ignore previous input spaces.
	getline(cin,s);

	cout << "string : " << s << "\n";
	
	return 0;
}


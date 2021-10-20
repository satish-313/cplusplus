#include<bits/stdc++.h>
using namespace std;

// shorting the code is good for competitive programing, it will save time and prevent error for typo error.
// for long long datatype define your use typedef
typedef long long ll; // use ll to define long long

// define more complex
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<pair<int,int>> vp;

// for more complex varible use macros , use #define
#define F first
#define S second
#define PB push_back
#define MP make_pair

#define vloop(it,v) for(auto it = v.begin(); it != v.end() ; it++)

int main(){
	ll a,b,res;
	a = 12345678;
	b = 123;
	res = a * b;
	
	vi vector_int;
	vector_int.push_back(10);
	vector_int.push_back(100);
	cout << vector_int.size() << "\n";
	cout << res << "\n";

	// use of macros
	vp vep;
	vep.PB(MP(1,2));
	vep.PB(MP(4,5));
	vloop(it,vep){
		cout << it->F << " " << it->S << "\n";
	}
 
	return 0;
}

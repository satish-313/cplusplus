#include<bits/stdc++.h>
using namespace std;

int g_array[10];

int main(){
	// array used to store the similar type of content
	// array of number
	// array of inside main size of to 10e5 and global array of to 10e7 and it will be initialize of zero;
	
	int a[5];
	
	// two dinension array
	int ta[5][5];

	for(int i=0;i<5;i++){
		cin >> a[i];
	}
	
	for(int i=0;i<5;i++){
		cout << a[i] << " ";
	}
	cout << "\n";
	
	for(int i=0;i<10;i++){
		cout << g_array[i] << " ";
	}
	cout << "\n";
	return 0;
}

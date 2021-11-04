#include<bits/stdc++.h>
using namespace std;

int main(){
  // pair declare
  pair<int,string> p;

  // insert some data into pair
  p = make_pair(2,"abc");

  // print or access value
  cout << p.first << " : " << p.second << endl;
  
  // copy pair into another pair
  pair<int,string> p1;
  p1 = p;
  p1.first = 3;

  // input from user
  cin >> p1.second;
  cout << p1.first << " : " << p1.second << endl;
  return 0;
}
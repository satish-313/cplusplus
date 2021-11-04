#include<bits/stdc++.h>
using namespace std;

void printSet(set<string> &s){
  // for(auto it = s.begin();it != s.end();it++){
  //   cout << (*it) << endl;
  // }
  for(string value : s){
    cout << value << endl;
  }
}

int main(){
  // set<string>s;
  // s.insert("abc");
  // s.insert("dkf");
  // s.insert("deg");

  // auto it = s.find("abc");
  // if(it != s.end()){
  //   s.erase(it);
  // }
  // printSet(s);

  set<string> s;
  int n;
  cin >> n;

  while(n--){
    string subs;
    cin >> subs;
    s.insert(subs);
  }

  printSet(s);
}
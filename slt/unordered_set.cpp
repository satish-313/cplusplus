#include<bits/stdc++.h>
using namespace std;

void printSet(unordered_set<string> &s){
  // for(auto it = s.begin();it != s.end();it++){
  //   cout << (*it) << endl;
  // }
  for(string value : s){
    cout << value << endl;
  }
}

int main(){
  // unordered_set<string>s;
  // s.insert("abc");
  // s.insert("dkf");
  // s.insert("deg");

  // auto it = s.find("abc");
  // if(it != s.end()){
  //   s.erase(it);
  // }
  // printSet(s);

  unordered_set<string> s;
  int n;
  cin >> n;

  while(n--){
    string subs;
    cin >> subs;
    s.insert(subs);
  }

  auto it = s.find("abc");
  if(it != s.end()){
    cout << "yes";
  }else{
    cout << "no";
  }
  // printSet(s);
}
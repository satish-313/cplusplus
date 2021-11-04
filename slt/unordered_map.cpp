#include<bits/stdc++.h>
using namespace std;

int main(){
  unordered_map<string,int>m;
  m["s"] = 5;
  m.insert({"satish",1});
  m["sat"] = 0;

  for( auto it=m.begin() ; it != m.end() ; it++){
    cout << it->first << " : " << it->second << endl;
  }
}
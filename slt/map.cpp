#include<bits/stdc++.h>
using namespace std;

void printMap(map<int,string> m){
  map<int,string> :: iterator it;
  cout << "map size : " << m.size() << endl;
  for(it = m.begin();it != m.end(); it++){
    cout << it->first << " : " << it->second << endl;
  }
}

int main(){
  map<int,string> m;
  m[1] = "a"; // O(n)
  m[20] = "ab";
  m.insert({4,"abvd"});
  printMap(m);

  m[4] = "abcdeg";
  // printMap(m);
  auto it = m.find(10);
  if(it == m.end()){
    cout << "NO value on this key.\n";
  }else{
    cout << it->first << " : " << it->second << endl;
  }
  return 0;
}
#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> v){
  cout << "size of vector " << v.size() << endl;
  for(int i=0;i<v.size();i++){
    cout << v[i] << " ";
  }
  cout << endl;
}

int main(){
  // declare vector
  vector<int> v_int;
  int n;
  cin >> n;
  for(int i=0;i < n;i++){
    int temp;
    cin >> temp;
    v_int.push_back(temp);
  }

  printVector(v_int);

  //create empty vector of value any number
  vector<int> v1_int(10,1);
  v1_int.pop_back();
  printVector(v1_int);
  return 0;
}
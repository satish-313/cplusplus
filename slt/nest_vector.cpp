#include<bits/stdc++.h>
using namespace std;

void printVector(vector<pair<int,int>> v){
  cout << "size of vector " << v.size() << endl;
  for(int i=0;i<v.size();i++){
    cout << v[i].first << " : " << v[i].second << endl;
  }
}


void print_vector(vector<int> v){
  cout << "size of vector " << v.size() << endl;
  for(int i=0;i<v.size();i++){
    cout << v[i] << " ";
  }
  cout << endl;
}

int main(){
  // vector<pair<int,int>> v = {{1,2},{2,3},{3,5}};
  // printVector(v);

  // int n;
  // cin >> n;
  // for(int i=0;i<n;i++){
  //   int x,y;
  //   cin >> x >> y;
  //   v.push_back({x,y});
  // }
  // printVector(v);

  // vector of array 
  // vector<int> v[3];

  // for(int i=0;i<3;i++){
  //   int n;
  //   cin >> n;
  //   for(int j=0;j<n;j++){
  //     int x;
  //     cin >> x;
  //     v[i].push_back(x);
  //   }
  // }

  // for(int i=0;i<3;++i){
  //   print_vector(v[i]);
  // }

  // vector of vector
  vector<vector<int>> v;

  int n;
  cin >> n;

  for(int i=0;i<n;i++){
    vector<int> temp;
    int N,x;
    cin >> N;
    for(int j=0;j<N;j++){
      cin >> x;
      temp.push_back(x);
    }
    v.push_back(temp);
  }

  for(int i=0;i<n;++i){
    print_vector(v[i]);
  }
  return 0;
}
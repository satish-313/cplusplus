#include<iostream>
using namespace std;

class abstractEmploye{
  virtual void askForPromation() = 0;
};

class employee : abstractEmploye{
  // attribute of employee or character
  private:
    string Name;
    string Company_name;
    int Age;
    
  public:
    //custom contructor
    employee(string name,string company_name,int age){
      Name = name;
      Company_name = company_name;
      Age = age;
    }

    // it is called behaviour of object
    void Iam(){
      cout << "I am " << Name << "\nworking on " << Company_name << " company.\nI am "<< Age << " old\n";
    }

    void askForPromation(){
      if(Age > 30){
        cout << Name << " ,you are promated.\n";
      }else{
        cout << Name << " ,you didn't get promated.\n";
      }
    }

};

int main(){
  employee e2 = employee("satish","senocode",23), e1 = employee("ramesh", "senocode", 32);

  e1.askForPromation();
  e2.askForPromation();
  return 0;
}
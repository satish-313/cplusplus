#include<iostream>
using namespace std;

class empAtr{
  public:
    string name;
    string company_name;
    int age;

    empAtr(string n,string c,int a){
      name = n;
      company_name = c;
      age = a;
    }
};

class employee {
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

    void setName(string s){
      Name = s;
    }

    string getName(){
      return Name;
    }

    void changeEmployee(empAtr e){
      Name = e.name;
      Company_name = e.company_name;
      Age = e.age;
    }
};

int main(){
  // employee e1;
  // e1.name = "satish";
  // e1.company_name = "senocode";
  // e1.age = 23;
  // e1.Iam();

  employee e2 = employee("satish","senocode",23);
  empAtr ea2 = empAtr("satish kumar", "senocode313",27);

  // e2.Iam();
  // e2.setName("ram");
  // cout << e2.getName() << "\n";
  e2.changeEmployee(ea2);
  e2.Iam();

  return 0;
}
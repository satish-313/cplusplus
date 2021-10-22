#include<iostream>
using namespace std;

class employee{
  private:
    string Company;
    int Age;

  protected:
    string Name;

  public:
    employee(string name,string company,int age){
      Name = name;
      Company = company;
      Age = age;
    }

    void Iam(){
      cout << "Name - " << Name << "\n";
      cout << "Company - " << Company<< "\n";
      cout << "Age - " << Age<< "\n";
    }
};

class Developer: public employee{
  private:
    string language;
  
  public:
    Developer(string n,string c,int a, string l):employee(n,c,a){
      language = l;
    }

    void jobLanguage(){
      cout << "hi " << Name << " your language is " << language << "\n";
    }
};

class Adminstrator: employee {
  private:
    string position;

  public:
    Adminstrator(string n,string c, int a, string p): employee(n,c,a){
      position = p;
    }

    void notice(){
      cout << Name << " has issue a notice on placement.\n";
    }
};

int main(){
  employee e1 = employee("satish kumar","senocode",23);
  Developer d1 = Developer("satish","senocode",23,"javascript");
  Adminstrator ad1 = Adminstrator("kanha","senocode",22,"hr");
  e1.Iam();
  // d1.Iam();
  d1.jobLanguage();
  ad1.notice();
  return 0;
}
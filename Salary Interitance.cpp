#include<iostream>
#include<string>

using namespace std;

string name;
int ID,salary,bonus,final;

class Employee  
  {
        public:
        void Employee_Info()
        {cout<<"Employee name and ID:"<<endl;
        cin>>name>>ID;
        cout<<"Employee NAME :"<<name<<endl;
        cout<<"Employee ID :"<<ID<<endl;}
  };

class Salary : public Employee
  {
        public:
        void Salary_Info()
        {cout<<"Whats ur salary :"<<endl; 
        cin>>salary; 
        cout<<"Employee Salary :"<<salary<<endl;}
   };

class Bonus : public Salary
  {
        public:
        void Bonus_Info()
        {cout<<"What's ur bonus :";
       cin>>salary; 
        cout<<"Employee Salary :"<<salary<<endl;}
   };

class Bonus : public Salary
  {
        public:
        void Bonus_Info()
        {cout<<"What's ur bonus :";
        cin>>bonus;
        final=salary+bonus;
        cout<<"Employee Final Salary :"<<final<<endl;}
    };

int main()
  {
        Bonus E;
        E.Employee_Info();
        E.Salary_Info();
        E.Bonus_Info();

        return 0;
   }

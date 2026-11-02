#include<iostream>
#include<string>
using namespace std;

class Account
{
    public:
    int account_number;
    string Name;

    void Displau()
    {
        cout<<"Account Nmuber:"<<account_number<<endl<<"Account Holder Name:"<<Name<<endl;
    }

    Account(int account_number,string Name)
    {
        this->account_number = account_number;
        this->Name = Name;
    }
};

class Saving_Account:public Account
{
    public:
    int balance;
    Saving_Account(int account_number,string Name,int balance):Account(account_number,Name)
    {
        this->balance = balance;
    }

    void Display()
    {
        Displau();
        cout<<"Balance:"<<balance<<endl;
    }
};

class Bonus :public Saving_Account
{
    public:
    int bonus;
    Bonus(int account_number,string Name,int balance,int bonus):Saving_Account(account_number,Name,balance)
    {
        this->bonus = bonus;
    }

    void Display()
    {
        Display();
        cout<<"Bonus:"<<bonus<<endl;
    }
};


int main()
{
    Saving_Account s1(12345,"John Doe",1000);
    s1.Display();
    return 0;
}

#include<iostream>
using namespace std;

class BankAccount
{
    private:
    string holder_name;

    public:
        //constructor
        BankAccount(string holder_name)
        {
            this->holder_name = holder_name;
            cout <<"Constructor called for:"<<this->holder_name<<endl;
        }

        //destructor
        ~BankAccount()
        {
            cout<<"Destructor called for:"<< holder_name <<endl;
        }
};

int  main()
{
    //objects
    BankAccount b1("Abhishek");
    BankAccount b2("Deepak");
    BankAccount b3("Amitraj");


    return 0;
}
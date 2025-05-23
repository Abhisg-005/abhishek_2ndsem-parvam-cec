#include<iostream>
using namespace std;

class BankAccount{
    // data members /  properties
    public:
    string holder_name;
    int ac_no;

    //Constructor
    BankAccount(string name , int ac_no)
    {
        cout<< "Constructor is called automatically" << endl;
        this->holder_name=name;
        this->ac_no=ac_no;
    }
    void display(){
        cout <<"Holder Name:" <<this->holder_name<<endl;
        cout <<"Account Number:" <<this->ac_no<<endl;
    }
};
int  main(){
    BankAccount b1("abhi", 100);
    b1.display();
    b2.display();
    return 0;
    
}
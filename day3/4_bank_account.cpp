#include<iostream>
using namespace std;

/** 
* types of constructor:
======================
* 1. default constructor.
* 2. Parmized constructor
* 3. copy constructor  
*/

class BankAccount{
    // data members /  properties
    public:
    string holder_name;
    int ac_no;

    //Constructor overloading - same constructor name but different parameter
    // this-> keyword that refers to current class instance object
    BankAccount()
    {
        cout<< "default Constructor" << endl;
        this->holder_name="unknown";
        this->ac_no=0;
    }

    //all-args constructor or full-args constructor
    BankAccount(string name , int ac_no)
    {
        cout<< "Constructor is called automatically"<< endl;
        this->holder_name=name;
        this->ac_no=ac_no;
    }

    void display(){
        cout <<"Holder Name:" <<this->holder_name<<endl;
        cout <<"Account Number:" <<this->ac_no<<endl;
    }
};
int  main(){
    BankAccount b1("abhi", 100), b2;
    b1.display(); // unknown and 0
    b2.display();  // abhi and 100
    return 0;
    
}
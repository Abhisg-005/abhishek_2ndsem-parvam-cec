#include<iostream>
using namespace std;

class BankAccount{
    // data members /  properties
    public:
    string holder_name;
    int ac_no;

    //Constructor
    BankAccount()
    {
        cout<< "Constructor is called automatically" << endl;
    }
};
int  main(){
    BankAccount b1;
    return 0;
    
}
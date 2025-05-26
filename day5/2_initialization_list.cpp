#include<iostream>
using namespace std;

class BankAccount{
    private:        
    string employee_name;
    int acc_no;

    public:
    BankAccount(string employee_name, int acc_no): employee_name(employee_name),acc_no(acc_no)
    {
        cout<<"Constructor is called"<<endl;
    }
       void display(){
           cout<<"Employee Name:"<<employee_name<<endl;
           cout<<"Account Number:"<<acc_no<<endl;
       }
};
int main(){
    BankAccount b1("pavan", 1234567890);
    b1.display();
}
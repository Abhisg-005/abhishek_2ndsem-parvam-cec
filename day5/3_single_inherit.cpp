#include<iostream>
using namespace std;

class Person{
    protected:
    string name;
    int age;

    public:
    Person(string name, int age):name(name), age(age)
    {
        cout<<"Person constructor"<<endl;
    }
};

class BankAccount: public Person
{
int employee_id;

public:
BankAccount(string name, int age, int employee_id):Person(name,age), employee_id(employee_id)
{
    cout<<"Employee Constructor"<<endl;
}
void display()
{
    cout<<"Emplyeen Details"<<endl;
    cout<<"Employee Name:"<< name<<endl;
    cout<<"Employee Age:"<<age<<endl;
    cout<<"EmployeeID:"<<employee_id<<endl;

}
};

int main(){
    BankAccount b1("Abhi",21,702);
    b1.display();
}

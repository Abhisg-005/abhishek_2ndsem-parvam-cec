#include<iostream>
using namespace std;

class Person
{
    protected:
    string name;
    int age;
    int weight;

    public:
    Person(string name,int age, int weight):name(name),age(age),weight(weight)
    {
        cout<<"Person Constructor"<<endl;
    }

};
class Employee:public Person
{
    protected:
    int emp_id;

    public:
    Employee(string name, int age,int weight,int emo_id):Person(name,age,weight), emp_id(emp_id)
    {
        cout<<"Employee Constructor"<<endl;
    }
};

class Manager:public Employee
{
    int salary;

    public:
    Manager(string name, int age,int weight,int emp_id,int salary):Employee(name,age,weight,emp_id),salary(salary)
    {
        cout<<"Manager constructor"<<endl;
    }

    void display()
    {
        cout<<"Manager Details:"<<endl;
        cout<<"Manager Name:"<<name<<endl;
        cout<<"Manager Age:"<<age<<endl;
        cout<<"Manager Weight:"<<weight<<endl;
        cout<<"EmployeeID:"<<emp_id<<endl;
        cout<<"Manager Salary:"<<salary<<endl;
    }
};

int main()
{
    Manager m1("Abhishek", 21,51,1234,2400000);
    m1.display();
}
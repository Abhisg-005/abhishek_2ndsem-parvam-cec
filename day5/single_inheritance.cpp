#include<iostream>
using namespace std;

class Person{
    protected:
    string name;
    int age;
    int weight;

    public:
    Person()
    {
        cout<<"Person constructor"<<endl;
    }
};

class Student: public Person
{
string roll_num;

public:
Student(string name, int age, int weight, string roll_num)
{
    cout<<"Student Constructor"<<endl;
    this->name = name;
    this->age = age;
    this->weight = weight;
    this->roll_num = roll_num;
}
void display()
{
    cout<<"Student Details:"<<endl;
    cout<<"Student Name:"<< name<<endl;
    cout<<"Student Age:"<<age<<endl;
    cout<<"Student weight:"<<weight<<endl;
    cout<<"Student RollNO:"<<roll_num<<endl;

}
};

int main(){
    Student s1("Abhi",21,51,"1CE24CS005");
    s1.display();
}

#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int roll_num;
    public:
    Student(string name, int roll_num): name(name),roll_num(roll_num)
    {
        cout<<"Constructor is called"<<endl;
    }
       void display(){
           cout<<"Name:"<<name<<endl;
           cout<<"Roll Num:"<<roll_num<<endl;
       }
};
int main(){
    Student s1("pavan", 105);
    s1.display();
}
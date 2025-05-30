#include<iostream>
using namespace std;

class Student{

    private:
    string name;
    int roll_num;

    public:

    void input(){
        cout <<"Enter student name:"<<endl;
        cin>>name;
        cout<<"Enter student roll_num:"<<endl;
        cin>>roll_num;
    }

   void display(){
       cout<<"Student name:"<<name<<endl;
       cout<<"Student roll_num:"<< roll_num<<endl;
   }
};

int main(){

    Student Students[4];
    
     for (int i = 0; i < 4; i++)
    {
        Students[i].input();
        Students[i].display();
    }

    return 0;
}
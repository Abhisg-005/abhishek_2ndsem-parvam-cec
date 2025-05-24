#include<iostream>
using namespace std;

class student{
    private:
    string name;
    int usn;
    string class_name;
    int marks;

    public:
      student(string n , int num, string c, int m)
    {
        name = n;
        usn = num;
        class_name = c;
        marks = m;
    }
    void display(){
        cout << "Name:"<<name<<endl;
        cout << "USN:"<<usn<<endl;
        cout << "Class Name:"<<class_name<<endl;
        cout << "Marks:"<<marks<<endl;

        if (marks<=100)
            cout<<"Grade: A+"<<endl;
        else if (marks<=90)
            cout<<"Grade: A"<<endl;
        else if (marks<=80)
            cout<<"Grade: B+"<<endl;
        else if (marks<=70)
            cout<<"Grade: B"<<endl;
        else if (marks<=70)
            cout<<"Grade: C+"<<endl;
        else if (marks<=60)
            cout<<"Grade: C"<<endl;  
        else
            cout<<"Grade: F"<<endl;    
    }
};
int main(){
    student s1("Abhi", 005, "Enigineering",85);
    s1.display();
    return 0;
}

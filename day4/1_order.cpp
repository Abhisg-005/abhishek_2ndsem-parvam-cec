#include<iostream>
using namespace std;

class student
{
    private:
    string name;

    public:
        //constructor
        student(string name)
        {
            this->name = name;
            cout <<"Constructor called for:"<<this->name<<endl;
        }

        //destructor
        ~student()
        {
            cout<<"Destructor called for:"<< name <<endl;
        }
};

int  main()
{
    //object
    student s1("Rahul");
    student s2("Rohan");
    student s3("Deepak");

    return 0;
}
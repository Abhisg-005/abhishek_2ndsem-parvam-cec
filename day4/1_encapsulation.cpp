#include<iostream>
using namespace std;

//encapsulation
// wrapping the data(memebers) and methods into single unit or class. by restricting the members using private.
// we can give acccess to the member using getter and setter(method)
// getter--> to get value
//prefix of the method should be get followed by variable name 
// Ex:
// int getAge(){
//   return this->age
//}

//
class Student{
    private:
    string name;
    int roll_num;

    public:
    string getName()
    {
        return this->name;
    }
    int getRollNum()
    {
        return this->roll_num;
    }

    void setName(string name)
    {
        this->name=name;
    }
     void setRollNum(int roll_num)
    {
        this->roll_num=roll_num;
    }

};

int main()
{
    Student s1;
    s1.setName("pavan");
    s1.setRollNum(005);

    cout<<"Name is:"<<s1.getName()<<endl;
    cout<<"RollNum is:"<<s1.getRollNum()<<endl;

    return 0;
}
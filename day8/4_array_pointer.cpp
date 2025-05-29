#include<iostream>
using namespace std;

/**
dynamic memory
==============
1 Static(stack)
2 dynamic(heap)

dynamic memory
==============
1. new - to allocate memory
2. delete - release the allocated memory

*/
class Student
{
    string name;
    int roll_num;
};
int main(){
    int a = 10;
    Student s1;

    //dynamic memory
    // data_type *variable_name = new data_type

    int *a1 = new int;
    *a1 = 20;
    cout<<"The value in a1:"<<*a1<<endl;

    //delete
    //delete pointer_name or varaible_name
    delete a1;
    return 0;
}
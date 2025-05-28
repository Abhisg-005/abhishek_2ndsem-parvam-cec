#include<iostream>
using namespace std;
int main(){
    int a = 10;
    cout<<"Adress of a:"<<&a<<endl;

    int *ptr = &a;

    cout<<"ptr value:"<<ptr<<endl;
    cout<<"ptr address:"<<&ptr<<endl;

    cout<<"Value of  a using a:"<<a<<endl;
    cout<<"Value of a using ptr:"<<*ptr<<endl;
    cout<<"Value of a:"<<*(&a)<<endl;
    cout<<"Value of a:"<<*(*(&ptr))<<endl;
    cout<<"Value of a:"<<*(&(*ptr))<<endl;




    return 0;
} 
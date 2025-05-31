#include<iostream>
#include<fstream>
using namespace std;


class Examregistration{

    private:
    string name;
    long long p_no;
    long long app_no;
    string email;
    string category;
    double dob;

    public:
    //default Constructor
    Examregistration(){
        name = "";
        email = "";
        p_no = 0;
        app_no = 0;
        category = "";
        dob = 0;
    }

    //parameterized constructor
    Examregistration(string name,long long p_no,long long app_no, string email,string category,int dob){
        this->name = name;
        this->email = email;
        this->p_no = p_no;
        this->app_no = app_no;
        this->category = category;
        this->dob = dob;
    }

    void RegisterDetails(){

        cout<<"Name >> "<<endl;
        getline(cin,name);

        cout<<"Phone Number >> "<<endl;
        cin>>p_no;

        cout<<"Email >> "<<endl;
        cin>>email;

        cout<<"DOB >> "<<endl;
        cin>>dob;

        cout<<"Category >> "<<endl;
        getline(cin,category);

        cout<<"Application Number >> "<<endl;
        cin>>app_no;


    }

    void display(){
    ofstream fout("CUETRegistration.txt");
        cout<<"CUET Registration:"<<"\n"<<endl;
        fout<<"CUET Registration:"<<"\n"<<endl;
        cout<<"Student Name:"<<name<<endl;
        fout<<"Student Name:"<<name<<endl;
        cout<<"Contact:"<<p_no<<endl;
        fout<<"Contact:"<<p_no<<endl;
        cout<<"Date of Birth:"<<dob<<endl;
        fout<<"Date of Birth:"<<dob<<endl;
        cout<<"Registered Email:"<<email<<endl;
        fout<<"Registered Email:"<<email<<endl;
        cout<<"Category:"<<category<<endl;
        fout<<"Category:"<<category<<endl;
        cout<<"Application Number:"<<app_no<<endl;
        fout<<"Application Number:"<<app_no<<endl;
    fout.close();
    }

};

int main(){
    Examregistration e1;
    e1.RegisterDetails();
    e1.display();

    return 0;
}

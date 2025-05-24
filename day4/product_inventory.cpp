#include<iostream>
using namespace std;

class product{
    private:
    int product_id;
    string name;
    int quantity;
    int price;

    public:
    product(int id, string n, int q, int r)
    {
        product_id=id;
        name=n;
        quantity=q;
        price=r;
    }
    void updateStock(int q){
        quantity +=q;
    }
    double calculateTotalValue(){
        return quantity * price;
    }
    void display(){
        cout<<"Product ID:"<<product_id<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Quantity:"<<quantity<<endl;
        cout<<"price:"<<price<<endl;
        cout<<"Total Value:"<<calculateTotalValue()<<endl;        
    }
};

int main(){
    product p1(01, "phone", 10, 11000);
    product p2(04, "Speaker", 30, 12000);
    product p3(07, "Television", 15, 35000);

    p1.updateStock(10);
    p2.updateStock(5);
    p3.updateStock(3);

    p1.display();
    p2.display();
    p3.display();

    return 0;
}
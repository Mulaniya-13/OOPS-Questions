#include<iostream>
using namespace std;

class Complex{
    int real;
    int img;
    public:
    //constructor
    Complex(int r,int i){
        real=r;
        img=i;
    }
    //overloading - operator
    Complex operator-(Complex &obj){
        int resReal=this->real-obj.real;
        int resImg=this->img-obj.img;
        Complex res(resReal,resImg);
        return res;
    }
    //function to display complex number
    void display(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};

int main(){
    Complex c1(5,6);
    Complex c2(3,4);
    Complex c3=c1-c2; //c3=c1.operator-(c2)
    cout<<"First complex number: ";
    c1.display();
    cout<<"Second complex number: ";
    c2.display();
    cout<<"Difference: ";
    c3.display();
    return 0;
}
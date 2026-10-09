#include<iostream>
using namespace std;

class BankAccount{
    int accountNumber;
    double balance;
    public:
    //constructor
    BankAccount(int accNum,double bal){
        accountNumber=accNum;
        balance=bal;
    }
    void deposit(double amount){
        balance+=amount;
    }
    void withdraw(double amount){
        if(amount<=balance){
            balance-=amount;
        }else{
            cout<<"Insufficient balance!"<<endl;
        }
    }
    double getBalance(){
        return balance;
    }
};

int main(){
    BankAccount account1(12345,1000.0);
    account1.deposit(500.0);
    account1.withdraw(200.0);
    cout<<"Current balance: "<<account1.getBalance()<<endl;
    return 0;
}
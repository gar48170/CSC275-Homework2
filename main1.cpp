#include <iostream>
#include <string>
using namespace std;
class CheckBook {
    float balance;//This is problem 2, part b
    Check *chkptr;
    int lastDeposit, numOfChecks, checkBookSize;
public:
    CheckBook() {
        balance = 0;
        numOfChecks = 0;
        checkBookSize = 0;
    }
    CheckBook(int balance_input) {
        balance = balance_input;
        numOfChecks = 0;
        checkBookSize = 2;
    }
    ~CheckBook() {
        cout<<"Object Destroyed"<<endl;
    }
    void operator=(CheckBook obj) {
        this.balance = obj.balance;
        this.lastDeposit = obj.lastDeposit;
        this.numOfChecks = obj.numOfChecks;
        this.checkBookSize = obj.checkBookSize;
        this.chkptr = obj.chkptr;
    }
    CheckBook(CheckBook obj) {
        this.balance = obj.balance;
        this.lastDeposit = obj.lastDeposit;
        this.numOfChecks = obj.numOfChecks;
        this.checkBookSize = obj.checkBookSize;
        this.chkptr = obj.chkptr;
    }
    void deposit(int deposited_amount) {
        balance += deposited_amount;
    }
    void setData() {
        cout<<"Enter Balance : ";
        cin>>balance;
        cout<<"Enter Last Deposit Made  : ";
        cin>>lastDeposit;
        cout<<"Enter # of Checks : ";
        cin>>numOfChecks;
        cout<<"Enter Check Book Size :";
        cin>>checkBookSize;
        chkptr = new Check[numOfCheck];
        for(int i = 0 ; i < numOfCheck ; i++) {
            chkptr[i].setCheckData();
        }
    }
    void getData() {
        cout<<"Bank Balance           : "<<balance<<endl;
        cout<<"Last Deposit Date      : "<<lastDeposit<<endl;
        cout<<"# of Checks Avaiable   : "<<numOfChecks<<endl;
        cout<<"Check Book Size        : "<<checkBookSize<<endl;
        cout<<"Check Description/Details   :"<<endl;
        for(int i = 0 ; i < numOfChecks ; i++) {
            chkptr[i].getCheckData();
        }
    }
};

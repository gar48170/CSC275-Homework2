#include <iostream>
#include <string>
using namespace std;
//This is for Homework 2 - #2 problem on the sheet
typedef struct Check
{
    int checkNum;//from the homework sheet
    float checkAmount;
    string checkMemo;
    bool operator>(float const amount)
    {
        if (checkAmount > amount)
            return true;
            return false;
    }
    friend ostream &operator<<(ostream &output, Check &obj);//Is this correct?  Double check
} Check;
ostream &operator<<(ostream &output, Check &obj)
{
    output << "Check#: " << obj.checkNum << "\nCheck amount (US$): " << obj.checkAmount << "\nCheck Memo Description: " << obj.checkMemo << "\n";
    return output;
}

int main()
{
    Check obj;
    obj.checkNum = 1001;
    obj.checkAmount = 78467.99;
    obj.checkMemo = "From Greg Rende";
    if (obj > 50000)
        cout << "Check amount is > than $50,000\n";
    else
        cout << "Check amount is < than $50,000\n";
    cout << obj;
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    float num1,num2;
    cout<<"enter first number.\n";
    cin>>num1;
    cout<<"enter second number.\n";
    cin>>num2;
    cout<<"enter what operation you wish to perform :+(addition),-(subtraction),/(divsion),*(multiplication).\n";
    char c;
    cin>>c;
    switch(c)
    {
        case '+':
        cout<<num1+num2;
        break;
        case '-':
        cout<<num1-num2;
        break;
        case '*':
        cout<<num1*num2;
        break;
        case '/':
        cout<<num1/num2;
        break;
        default:
        cout<<"operation is not of the mentioned  above.\n";
        break;

    }
    return 0;

}
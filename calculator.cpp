#include<iostream>
using namespace std;
int main()
{
    char calculator;
    cout<<"hello calculator"<<endl;
    cout<<"Enter the sign = ";
    cin>>calculator;
    switch(calculator)
    {
        int a,b,c;
    case'+':
        cout<<"Enter the value a = ";
        cin>>a;
        cout<<"Enter the value b = ";
        cin>>b;
        c=a+b;
        cout<<"the addition value is = ";
        cout<<c<<endl;
        break;
    case'-':
        cout<<"Enter the value a = ";
        cin>>a;
        cout<<"Enter the value b = ";
        cin>>b;
        c=a-b;
        cout<<"the substract value is = ";
        cout<<c<<endl;
        break;
    case'*':
        cout<<"Enter the value a = ";
        cin>>a;
        cout<<"Enter the value  b = ";
        cin>>b;
        c=a*b;
        cout<<"the multiplication value is = ";
        cout<<c<<endl;
        break;
    case'/':
        cout<<"Enter the value a = ";
        cin>>a;
        cout<<"Enter the value  b = ";
        cin>>b;
        c=a/b;
        cout<<"the division value is = ";
        cout<<c<<endl;
        break;
    default:
        cout<<"this is not exist";
        break;
            }
}

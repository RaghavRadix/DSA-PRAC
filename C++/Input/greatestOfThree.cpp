#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter third number: ";
    cin>>c;
    if(a>b && a>c) {
        cout<<a<<"a is greater";
    }
    if(b>a && b>c) {
        cout<<b<<"b is greater";
    }
    if(c>a && c>b) {
        cout<<c<<"c is greater";
    }
}
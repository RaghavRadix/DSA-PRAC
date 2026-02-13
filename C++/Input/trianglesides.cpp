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
    if((a+b>c) && (a+c>b) && (b+c>a)) {
        cout<<"Triangle is possible";
    } else {
        cout<<"Triangle is not possible";
    }
}
#include<iostream>
using namespace std;
int main() {
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    // if((n%5==0 || n%3==0) && n%15!=0) {
    //     cout<<"Number is divisible by 5 or 3 but not by 15";
    // } else {
    //     cout<<"Number is not divisible by 5 or 3";
    // }
    if(n%5==0 || n%3==0) {
        if(n%15!=0) {
            cout<<"Number is divisible by 5 or 3 but not by 15";
        } else {
         cout<<"Number is divisible by 5 or 3";
        }
    } else {
        cout<<"Number is not divisible by 5 or 3";
    }
}
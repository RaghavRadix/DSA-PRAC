#include<iostream>
using namespace std;
int main() {
    cout<<"Enter marks : ";
    int n;
    cin>>n;
    
    // if(n>=91 && n<=100) {
    //     cout<<"Excellent";
    // }
    // if(n>=81 && n<=90) {
    //     cout<<"A";
    // }
    // if(n>=71 && n<=80) {
    //     cout<<"B";
    // }
    // if(n>=61 && n<=70) {
    //     cout<<"C";
    // }
    // if(n>=51 && n<=60) {
    //     cout<<"D";
    // }
    // if(n<=50) {
    //     cout<<"Fail";
    // }

    // if(n>=91 && n<=100) {
    //     cout<<"Excellent";
    // } else {
    //     if(n>=81) {
    //         cout<<"A";
    //     } else {
    //         if(n>=71) {
    //             cout<<"B";
    //         } else {
    //             if(n>=61) {
    //                 cout<<"C";
    //             } else {
    //                 if(n>=51) {
    //                     cout<<"D";
    //                 } else {
    //                     cout<<"Fail";
    //                 }
    //             }
    //         }
    //     }
    
    if(n>91) {
        cout<<"Excellent";
    } 
    else if(n>=81){
        cout<<"A";
    }
    else if(n>=71){
        cout<<"B";
    }
    else if(n>=61){
        cout<<"C";
    }
    else if(n>=51){
        cout<<"D";
    }
    else {
        cout<<"Fail";
    }
}
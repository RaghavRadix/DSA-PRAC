#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool flag = true;
    for(int i=2; i<n-1; i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }
    if (n==1){
        cout<<"Neither Prime nor Composite"<<endl;
    }else if(flag){
        cout<<"Prime Number"<<endl;
    }else{
        cout<<"Composite Number"<<endl;
    }
    return 0;
}
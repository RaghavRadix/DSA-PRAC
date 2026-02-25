#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=n; i>=1; i--) {
        cout<<i<<endl;
        i=i-2;
    }
    return 0;
}
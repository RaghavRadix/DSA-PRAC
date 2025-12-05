#include<iostream>
using namespace std;
int main() {
    int num1;
    int p = 130, q = 50;
    p += q -= p;
    cout<<p<<" "<<q;
    return 0 ;
}
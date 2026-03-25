#include<iostream>
using namespace std;
int main () {
   int a, b;
   cin>>a>>b;
   bool flag = true;
   if (b < 0) {
    flag = false;
    b = -b;
   }
   float power = 1;
   
   for(int i = 1; i <= b; i++) {
      power *= a;
   }
   if (flag==false) {
    cout<<1/power<<endl;
    b = -b;
   } 
   if (a==0 && b==0) {
    cout<<"Undefined"<<endl;
   }
   else {
    cout<<power<<endl;
   }
}
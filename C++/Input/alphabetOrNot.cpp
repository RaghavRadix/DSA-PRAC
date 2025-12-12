#include<iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter a character: ";
    cin>>ch;
    cout<<ch<<endl;
    cout<<int(ch);
    int ascii = int(ch);
    if((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<=90)) {
        cout<<"Alphabet";
    } else {
        cout<<"Not an Alphabet";
    }
    
}
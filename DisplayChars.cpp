#include <iostream>
using namespace std;

char DisplayChars(){
    char ch;
    cout<<"which charcter do u want to print";
    cin>>ch;
    int n;
    cout<<"how many times do u want to print it";
    cin>>n;
    for (int i =0; i < n; i++){
        cout<<ch;
    }

}
int main(){
    DisplayChars();
}
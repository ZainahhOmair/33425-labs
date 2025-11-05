#include <iostream>
#include <string>
using namespace std;

int compare(){
    cout<<"enter ur first string";
    string str1;
    cin>>str1;
    cout<<"enter ur second string";
    string str2;
    cin>>str2;
    int lengthstr1, lengthstr2;
    lengthstr1 = str1.length();
    lengthstr2 = str2.length();
    if(lengthstr1 > lengthstr2){
         cout<<str1<<" "<<"is greater";

    }else if(lengthstr1 < lengthstr2){
        cout<<str2<<" "<<"is greater";
    }else{
        cout<<"both strings are equal";
    }


}
int main(){
    compare();
    system("pause");
}
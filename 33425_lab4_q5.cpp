#include <iostream>
#include<string>
using namespace std;
//we sleep in if it a weekend or when we are on vacation
int main(){
    string weekday;
    string vac;
    bool isweekday;
    bool isvac;
    bool sleepin;
    cout<< "what is the day today, enter in lower case?";
    cin>>weekday;
    if (weekday == "saturday" || weekday == "sunday"){
        isweekday = false;
    }else {
        isweekday = true;
    }
    cout <<"are you on vacation, yes or no";
    cin>> vac;
    if (vac == "yes"){
        isvac = true;
    }else {
        isvac = false;
    }
    if (isweekday == false || isvac == true){
        sleepin = true;
        cout<<"you can sleep";
    }else {
        sleepin = false;
        cout<<"you cannot sleep";
    }
    
}
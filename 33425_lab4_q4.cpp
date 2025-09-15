#include <iostream>
using namespace std;
int main(){
    int ntsmarks, fscper;
    cout<<"enter your nts marks";
    cin>>ntsmarks;
    cout<<"enter your fsc percentage";
    cin>> fscper;
    //oxfird university
    if (ntsmarks == 70 && fscper >= 70){
        cout<<"you are eligible for  IT in oxford";
    }else if (ntsmarks == 60 && fscper >= 70){
        cout<<"you are eligible for electronics  in Oxford university";
    }else if (ntsmarks == 50 && fscper >= 70){
        cout<<"you are eligible for telecommunication field in Oxford university";
    }
    //mit university
    if ((fscper >= 60 && fscper <=70 ) && (ntsmarks ==50)){
        cout<<"you are eligible for IT in MIT";
    }
    else if ((fscper >= 50 && fscper <= 59) && (ntsmarks == 50)){
        cout<<"you are eligible for chemical in MIT";
    }else if ((fscper >= 40 && fscper <=50) && (ntsmarks == 50)){
        cout<<"you are eligible for computer in MIT ";
    }
    if (fscper < 40 && ntsmarks < 50){
        cout<<"you are not eligible for any of the universities";
    } 
}
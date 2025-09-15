#include <iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cout<<"enter the three sides of the  triangle";
    cin>>s1>>s2>>s3;
    if (s1 == s2 && s1 == s3 && s2 == s3){
        cout<<"this is an equilateral triangle";
    }else if ( s1 != s2 && s1 != s3 && s2 != s3){
        cout<<"this is a scalene triangle";
    }else {
        cout<<"this is an isoceles triangle";
    }

}
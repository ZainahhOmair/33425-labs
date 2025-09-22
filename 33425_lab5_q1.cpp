#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"Enter 1st number please ";
cin>>a;
cout<<"Enter 2nd number please ";
cin>>b;
while(a!=b && a>0 && b>0){
a=a>>2;
b=b*b;
cout<<"# 1stNumber "<<a<<endl;
cout<<"# 2stNumber "<<b<<endl;

if(a==b) break;
}
}
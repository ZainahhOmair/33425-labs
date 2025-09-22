#include<iostream>
using namespace std;
int main(){
int n;
int count=0;
while(true){
cout<<"Enter the number: ";
cin>>n;
cout<<"**********************"<<endl;
if(n<0){
cout<<"The message displayed "<<count<<" times"<<endl;
break;
}
int i=0;
while(i<n){
cout<<"CL1002 exam is in week 09"<<endl;
count++;
i++;
}
}
}

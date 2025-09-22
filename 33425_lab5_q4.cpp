#include<iostream>
using namespace std;
int main(){
int n;
int pos=0,neg=0,range=0;
do{
cout<<"Enter number: ";
cin>>n;
if(n>0) pos++;
if(n<0) neg++;
if(n>=100 && n<=200) range++;
if(n%2!=0 && !(n>15 && n<25)){
cout<<"Square of the given number is = "<<n*n<<endl;
}
}while(!(n>15 && n<25));
cout<<"Postive Numbers = "<<pos<<" Negative Numbers = "<<neg<<" Total Count of [100-200] = "<<range<<endl;
}

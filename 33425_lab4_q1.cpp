#include<iostream>
using namespace std;
int main(){
long long number;
cout<<"Enter number:";
cin>>number;
while(number!=7 && number!=-7 && number!=0){
int Ldig=number%10;
int Rdig=number/10;
int doubled=Ldig*2;
number=Rdig-doubled;
if(number>-7 && number<7 && number!=0){
break;
}
}
if(number==7 || number==-7 || number==0){
cout<<"Divisible by 7";
}
else{
cout<<"Not divisible by 7";
}
}
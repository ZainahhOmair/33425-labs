#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter size of array";
cin>>n;
int arr[100];
int i;
for(i=0;i<n;i++){
cout<<"enter number";
cin>>arr[i];
}
int sum=0;
int count=0;
for(i=0;i<n;i++){
if(arr[i]>0){
sum=sum+arr[i];
count++;
}
}
float avg;
avg=(float)sum/count;
cout<<"sum is  "<<sum<<endl;
cout<<"average is : "<<avg<<endl;
return 0;
}

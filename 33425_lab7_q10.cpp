#include<iostream>
using namespace std;
int main(){
int plots=8;
float land[8][3];
int i;
for(i=0;i<plots;i++){
cout<<"Enter plot number: ";
cin>>land[i][0];
cout<<"Enter length: ";
cin>>land[i][1];
cout<<"Enter width: ";
cin>>land[i][2];
}
float area[8];
for(i=0;i<plots;i++){
area[i]=land[i][1]*land[i][2];
}
float maxArea=area[0];
int maxPlot=land[0][0];
for(i=1;i<plots;i++){
if(area[i]>maxArea){
maxArea=area[i];
maxPlot=land[i][0];
}
}
cout<<"Plot\tLength\tWidth\tArea"<<endl;
for(i=0;i<plots;i++){
cout<<land[i][0]<<"\t"<<land[i][1]<<"\t"<<land[i][2]<<"\t"<<area[i]<<endl;
}
cout<<"Largest Land is Plot "<<maxPlot<<" with Area "<<maxArea;
return 0;
}

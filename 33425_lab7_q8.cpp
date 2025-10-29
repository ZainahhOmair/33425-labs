#include<iostream>
using namespace std;
int main(){
int rows=5;
int cols=9;
float data[5][9]={0};
int i,j;
for(i=0;i<rows;i++){
cout<<"Enter Student ID: ";
cin>>data[i][0];
for(j=1;j<=5;j++){
cout<<"Enter marks for course "<<j<<": ";
cin>>data[i][j];
}
}
for(i=0;i<rows;i++){
data[i][6]=500;
float obt=0;
for(j=1;j<=5;j++){
obt=obt+data[i][j];
}
data[i][7]=obt;
data[i][8]=(obt/data[i][6])*100;
}
cout<<"StdID\tC1\tC2\tC3\tC4\tC5\tTotal\tObt\tPer"<<endl;
for(i=0;i<rows;i++){
for(j=0;j<cols;j++){
cout<<data[i][j]<<"\t";
}
cout<<endl;
}
return 0;
}

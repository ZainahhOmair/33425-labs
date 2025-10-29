#include<iostream>
using namespace std;
int main(){
int r,c;
cout<<"Enter rows and columns:";
cin>>r>>c;
int a[100][100];
int i,j;
for(i=0;i<r;i++){
for(j=0;j<c;j++){
cout<<"Enter matrix element:";
cin>>a[i][j];
}
}
cout<<"Your matrix is:"<<endl;
for(i=0;i<r;i++){
for(j=0;j<c;j++){
cout<<a[i][j]<<" ";
}
cout<<endl;
}
int max=a[0][0];
for(i=0;i<r;i++){
for(j=0;j<c;j++){
if(a[i][j]>max){
max=a[i][j];
}
}
}
cout<<"maximum element is: "<<max;
return 0;
}

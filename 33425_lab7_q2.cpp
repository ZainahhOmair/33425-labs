#include<iostream>
using namespace std;
int main(){
int m,n;
cout<<"Enter rows and columns:";
cin>>m>>n;
int a[100][100];
int i,j;
for(i=0;i<m;i++){
for(j=0;j<n;j++){
cout<<"Enter element:";
cin>>a[i][j];
}
}
int count=0;
for(i=0;i<m;i++){
for(j=0;j<n;j++){
if(a[i][j]==0){
count++;
}
}
}
if(count>=(m*n)/2){
cout<<"Matrix is Sparse";
}
else{
cout<<"Matrix is not Sparse";
}
return 0;
}

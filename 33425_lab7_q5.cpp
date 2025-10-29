#include<iostream>
using namespace std;
int main(){
int size;
cout<<"Enter size of square matrix:";
cin>>size;
int arr[100][100];
int i,j;
for(i=0;i<size;i++){
for(j=0;j<size;j++){
cout<<"Enter element:";
cin>>arr[i][j];
}
}
int trans[100][100];
for(i=0;i<size;i++){
for(j=0;j<size;j++){
trans[i][j]=arr[j][i];
}
}
int isSymmetric=1;
for(i=0;i<size;i++){
for(j=0;j<size;j++){
if(arr[i][j]!=trans[i][j]){
isSymmetric=0;
break;
}
}
}
if(isSymmetric==1){
cout<<"Matrix is Symmetric";
}
else{
cout<<"Matrix is Asymmetric";
}
return 0;
}

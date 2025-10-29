#include<iostream>
#include<string>
using namespace std;
int main(){
string names[5]={"Ali","Zuhair","Faisal","Maaz","Anis"};
int size=5;
int i,j,minIndex;
string temp;
for(i=0;i<size-1;i++){
minIndex=i;
for(j=i+1;j<size;j++){
if(names[j]<names[minIndex]){
minIndex=j;
}
}
temp=names[i];
names[i]=names[minIndex];
names[minIndex]=temp;
}
for(i=0;i<size;i++){
cout<<names[i]<<" ";
}
return 0;
}

#include<iostream>
using namespace std;
int main(){
int employees=4;
int products=6;
float sales[6][4];
int i,j;
for(i=0;i<products;i++){
for(j=0;j<employees;j++){
cout<<"add sales for product "<<i+1<<" by employee "<<j+1<<": ";
cin>>sales[i][j];
}
}
cout<<endl;
cout<<"Sales Table:"<<endl;
for(i=0;i<products;i++){
for(j=0;j<employees;j++){
cout<<sales[i][j]<<" ";
}
cout<<endl;
}
float productTotal[6]={0};
for(i=0;i<products;i++){
for(j=0;j<employees;j++){
productTotal[i]+=sales[i][j];
}
}
float employeeTotal[4]={0};
for(j=0;j<employees;j++){
for(i=0;i<products;i++){
employeeTotal[j]+=sales[i][j];
}
}
cout<<endl<<"all sales for products"<<endl;
for(i=0;i<products;i++){
cout<<"product "<<i+1<<": "<<productTotal[i]<<endl;
}
cout<<endl<<"all sales for each employee"<<endl;
for(j=0;j<employees;j++){
cout<<"employee "<<j+1<<": "<<employeeTotal[j]<<endl;
}
return 0;
}

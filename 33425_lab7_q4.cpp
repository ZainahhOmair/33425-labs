#include<iostream>
using namespace std;
int main(){
float stud1marks[5]={60,75,85,95,49};
float stud2marks[5]={59,70,65,45,39};
int n=5;
float sum1=0,sum2=0;
int i;
for(i=0;i<n;i++){
sum1=sum1+stud1marks[i];
sum2=sum2+stud2marks[i];
}
float mean1=sum1/n;
float mean2=sum2/n;
float cov=0;
for(i=0;i<n;i++){
cov=cov+(stud1marks[i]-mean1)*(stud2marks[i]-mean2);
}
cov=cov/(n-1);
cout<<"Covariance is: "<<cov;
return 0;
}

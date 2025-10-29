#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
srand(time(0));
int nums[10];
int i;
for(i=0;i<10;i++){
nums[i]=rand()%10;
}
char number[15];
number[0]='0';
number[1]='3';
for(i=2;i<14;i++){
number[i]=nums[i-2]+'0';
}
number[14]='\0';
cout<<"randm phone number: "<<number;
return 0;
}

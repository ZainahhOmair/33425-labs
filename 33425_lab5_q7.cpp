#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number of 4 or more digits ";
    cin>>num;

    int count = 0;
    for(int temp=num; temp>0; temp=temp/10){
        count++;
    }
    cout<<"total digits "<<count<<endl;

    while(num >= 10){
        int sum = 0;
        for(int temp=num; temp>0; temp=temp/10){
            int digit = temp % 10;
            sum = sum + digit;
        }
        num = sum;
    }

    cout<<"digitial root "<<num;
}

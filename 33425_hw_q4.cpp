#include<iostream>;
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int N;
    cout<<"which number do u want square root of?";
    cin>>N;
    double mid;
    double answer = N;
    double compeq;
    double a = 0;
    double b = N;
    while(fabs(answer) >= 0.01){
        compeq = (a*a) - N;
        
        
        mid = (a + b)/2;
        answer = (mid*mid) - N;
        if (compeq * answer <0){
            b = mid;
            
        }else {
            
            a = mid;
        }
        
    }
    cout<<round(mid);
}
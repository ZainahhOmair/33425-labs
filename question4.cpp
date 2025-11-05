#include <iostream>
using namespace std;

int JobAllocation(){
    int exp;
    int marks;
    cout<<"enter your marks";
    cin>>marks;
    cout<<"enter your experience";
    cin>>exp;
    if(marks>= 50 && exp < 1){
        cout<<"you are eligible to be trainee engineer";
        
    }
    else if(marks >= 60 && marks < 70 && exp >=1){
        cout<<"you are eligible to be assistant developer";
    }else if(marks >= 70 && exp >=2){
         cout<<"you are eligible to be associate developer";
    }else{
        cout<<"you are not eligible for any position";
    }

}
int main(){
    JobAllocation();
    return 0;
}

#include <iostream>
using namespace std;


int main() {
    int n;
    cout<<"enter the number u want to check";
    cin>>n;
    int divisors = 0;
    for (int i = 1; i < n; i++){
        if ((n % i) == 0){
            divisors = divisors + i;
        }
    }
    if (divisors == n){
        cout<<"perfect num";
    }else{
        cout<<"not  a perfect num";
    }
   
        
            
        
    }
    
  

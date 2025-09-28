#include<iostream>
using namespace std;

int main(){
    int a,b,c,d, numans, denans;
    char operation;
    cout<<"enter numerator of first fraction";
    cin>>a;
    cout<<"enter denominator of first fraction";
    cin>>b;
    cout<<"enter numerator of second fraction";
    cin>>c;
    cout<<"enter denominator of second fraction";
    cin>>d;
    cout<<"enter operation";
    cin>>operation;
    if (operation == '+'){ //addition operation
        numans = a*d + b*c;
        denans = b*d;
        
    }
    else if  (operation == '-'){ //subtraction operation
        numans = a*d - b*c;
        denans = b*d;
        
    }
    else if (operation == '*'){//multiplication
                numans = a * c;
                denans = b * d;
                

        
    }else if(operation == '/'){
        numans = a * d;
        denans = b * c;
        
    }
    
    //greatest common divisor code:
    int gcd;
    int rem;
    int gcdnum = numans;
    int gcdden = denans;
    while (gcdden != 0){
        rem = (gcdnum % gcdden);
        
        gcdnum = gcdden;
        gcdden = rem;
    }
    gcd = gcdnum;
    
    //simplified answer to fraction
    int simnum = numans; 
    int simden = denans;
    simnum= numans / gcd;
    simden = denans / gcd;
    cout<<simnum<<"/"<<simden;
    
}


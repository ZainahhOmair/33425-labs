#include <iostream>
#include <iostream>
using namespace std;



int main(){
    double a[6];
    for(int i=0;i<5;i++){
        if(i==0) a[i]=3.14;
        if(i==1) a[i]=3.24;
        if(i==2) a[i]=3.34;
        if(i==3) a[i]=3.44;
        if(i==4) a[i]=3.54;
    }
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(a[i]<a[j]){
                double t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
}

    

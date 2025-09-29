#include<iostream>
using namespace std;

int main(){
    double fail[10];
    double pass[10];
    double marks;
    int passcount = 0;
    int fcount = 0;
    for (int i = 0; i < 10; i++ ){
        cout<<"enter student marks";
    cin>>marks;
    if (marks >= 5.00){
        pass[passcount] = marks;
        passcount ++;
    }
    else{
        fail[fcount] = marks;
        fcount ++;
        
    }
        
    }
    cout << "\nPass students: ";
    for (int i = 0; i < passcount; i++) {
        cout << pass[i] << " ";
    }

    cout << "\nFail students: ";
    for (int i = 0; i < fcount; i++) {
        cout << fail[i] << " ";
    }
    
    
    
    
    
    
    
}

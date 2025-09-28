
#include <iostream>
using namespace std;


int main() {
    int trows = 4;

    
    for (int rows = 1; rows <= 4; rows ++){
        for (int s = trows - rows ; s >= 0; s--){
            cout<<' ';
        }
        
        for (int ascloop = 1; ascloop <= rows; ascloop ++){
        cout<< ascloop;
    }
    for (int descloop = rows - 1; descloop >= 1; descloop --){
        cout<<descloop;
    }
    cout<<endl;
        
    }
        
            
        
    }
    
  

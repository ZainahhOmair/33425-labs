#include <iostream>
using namespace std;

int longestrun(){
    int totalnumbers;
    int num;
    cout<<"enter the total amount of numbers you want to enter";
    cin>> totalnumbers;
    if(totalnumbers > 1){
    
    int length = 1;
    int maxlength = 1;
    
    //loop to enter in array
    int arr[totalnumbers];
    
    for(int i =0; i< totalnumbers; i++){
        cout<<"enter number to enter";
        cin>>num;
        arr[i] = num;
    }
    
    int consecnum = arr[0];
    
    for(int j = 0; j <totalnumbers - 1; j++){
        if(arr[j] == arr[j+1]){
            
                 
                length = length + 1;
            
        }else{
            length = 1;
        }
        if (length  >= maxlength){
        maxlength = length;
        consecnum = arr[j];
    }
    
    
    
    
}
cout<<"consecutive number with longest number:"<<endl<<consecnum<<endl<<"appeared times:"<<endl<<maxlength;

}else{
    cout<<"enter a sequence not a single number";
}
 
}
int main(){
    longestrun();
    return 0;
}

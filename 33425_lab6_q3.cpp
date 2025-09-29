#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter "<<size<<" numbers: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    bool symmetry = true;
    for(int i=0;i<size/2;i++){
        if(arr[i] != arr[size-1-i]){
            symmetry = false;
            break;
        }
    }
    if(symmetry){
        cout<<"Array is Symmetric";
    }
    else{
        cout<<"Array is Asymmetric";
    }
}

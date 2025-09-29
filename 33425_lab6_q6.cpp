#include<iostream>
using namespace std;

int main(){
    double arr1[5];
    double arr2[5];

    cout<<"Enter marks for first 5 students: "<<endl;
    for(int i=0;i<5;i++){
        cin>>arr1[i];
    }

    cout<<"Enter marks for next 5 students: "<<endl;
    for(int i=0;i<5;i++){
        cin>>arr2[i];
    }

    cout<<"\nMarks of first array: ";
    for(int i=0;i<5;i++){
        cout<<arr1[i]<<" ";
    }

    cout<<"\nMarks of second array: ";
    for(int i=0;i<5;i++){
        cout<<arr2[i]<<" ";
    }

    cout<<"\nCommon marks: ";
    bool found = false;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr1[i] == arr2[j]){
                cout<<arr1[i]<<" ";
                found = true;
                break;
            }
        }
    }

    if(!found){
        cout<<"None";
    }
}

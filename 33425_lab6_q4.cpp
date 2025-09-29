#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    int size;
    cout<<"Enter array size";
    cin>>size;
    double arr[size];
    srand(time(0));
    
    for(int i=0;i<size;i++){
        arr[i] = (double)rand()/RAND_MAX;
    }
    double sum = 0;
    cout<<"Array elements: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        sum += arr[i];
    }
    double avg = sum / size;
    cout<<endl<<"sum = "<<sum;
    cout<<endl<<"avg = "<<avg;
}

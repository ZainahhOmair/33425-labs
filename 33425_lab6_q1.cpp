#include <iostream>
using namespace std;

int main() {
    int arr[10];
    for (int i =0; i < 10; i++){
        cout<<"enter number to store";
        cin>>arr[i];
    }
    int num;
    int occurcount = 0;
    cout<< "which number u want to search?";
    cin>>num;
    
    for (int i = 0; i <= 10; i++){
        if (arr[i] == num){
        occurcount = occurcount + 1;
    }
}
    cout<< "number count is:"<<occurcount;
}
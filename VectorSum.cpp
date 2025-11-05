#include <iostream>
#include <vector>  // to use vector
using namespace std;

int vecsum() {
    int size;
    cout<<"how many numbers do you want to enter ";
    cin>>size;

    vector<int> numbers;   
    int num;
    int sum = 0;

    
    for (int i = 0; i < size; i++) {
        cout<<"enter number " << i + 1 << ": ";
        cin>>num;
        numbers.push_back(num);  
    }

    
    for (int i = 0; i < size; i++) {
        sum = sum + numbers[i];
    }

    cout<<"the sum of all elements is: "<<sum<<endl;

    return 0;
}
int main(){
    vecsum();
}


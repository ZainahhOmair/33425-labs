#include <iostream>
#include <vector>
using namespace std;

int revvec() {
    int size;  
    cout<<"how many numbers do you want to enter? ";
    cin>>size;

    vector<int> numbers;  
    int num;              

    
    for (int i = 0; i < size; i++) {
        cout<<"enter number " << i + 1 << ": ";
        cin>>num;
        numbers.push_back(num);
    }

    
    cout<<"original order ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout<< endl;

    
    cout<<"reversed order ";
    for (int i = size - 1; i >= 0; i--) {
        cout<< numbers[i] << " ";
    }

    cout<<endl;
    return 0;
}
int main(){
    revvec();
    return 0;
}
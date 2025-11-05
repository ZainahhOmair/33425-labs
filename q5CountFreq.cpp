#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int countfreq() {
    srand(time(0));
    int valueee;

    int size;
    cout << "enter the size of array you want ";
    cin >> size;
    int num;
    int arr[size];
    bool counted[size] = {false};

    
    for (int i = 0; i < size; i++) {
        num = rand() % 10;
        arr[i] = num;
    }
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<endl;
    }
    

    
    for (int j = 0; j < size; j++) {
        if (counted[j]) continue; 

        int valcount = 1;
        for (int k = j + 1; k < size; k++) {
            if (arr[j] == arr[k]) {
                valcount = valcount + 1;
                counted[k] = true; 
            }
        }

        cout << arr[j] << " occurs " << valcount << " times" << endl;
    }

    return 0;
}
int main(){
    countfreq();
}
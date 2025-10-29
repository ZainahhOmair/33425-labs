#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of array you want";
    cin>>n;

    int arr[n][n];

    cout<<"enter numbers";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }
    int magicsum = 0;
    for (int i = 0; i < n; i++){
        magicsum = magicsum + arr[0][i];
    }
    bool ismagicsum = true;
     for (int i = 0; i < n; i++) {
        int rowsum = 0;
        for (int j = 0; j < n; j++) {
            rowsum = rowsum + arr[i][j];
        }
        if (rowsum != magicsum) {
            ismagicsum = false;
            break;
        }
    }
    if (ismagicsum) {
        for (int j = 0; j < n; j++) {
            int colsum = 0;
            for (int i = 0; i < n; i++) {
                colsum += arr[i][j];
            }
            if (colsum != magicsum) {
                ismagicsum = false;
                break;
            }
        }
    }
    if (ismagicsum) {
        int diagonal1 = 0;
        for (int i = 0; i < n; i++) {
            diagonal1 = diagonal1 + arr[i][i];
        }
        if (diagonal1 != magicsum)
            ismagicsum = false;
    }

    if (ismagicsum) {
        int diagonal2 = 0;
        for (int i = 0; i < n; i++) {
            diagonal2 = diagonal2 + arr[i][n - i - 1];
        }
        if (diagonal2 != magicsum)
            ismagicsum = false;
    }
    if (ismagicsum)
        cout << "true";
    else
        cout << "false";

    return 0;

    
}
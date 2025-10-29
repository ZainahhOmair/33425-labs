#include <iostream>
using namespace std;

int transpose(){
    int rows = 3;
    int cols = 3;
    

    
    int transarr[3][3];
    int num;

    int arr[3][3] = { 
        {9, 5, 7}, 
        {1, 3, 6}, 
        {5, 4, 1}
    };

    
    for (int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            transarr[j][i] = arr[i][j];
        }
    }
    for (int i = 0; i < cols; i++) {
    for (int j = 0; j < rows; j++) {
        cout << transarr[i][j] << " ";
    }
    cout << endl;
}

}
int main(){
    transpose();
    return 0;
}
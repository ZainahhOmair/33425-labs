#include <iostream>
using namespace std;
int matrices(){
    int arr1[3][4] = {{2,5,7,1},{1,3,6,1},{5,4,1,3}};
    int arr2[3][4] = {{1,9,5,0},{7,1,5,4},{3,4,2,8}};
    int arr3[3][4];
    for (int i = 0; i<3; i++){
        for(int j = 0; j < 4; j++){
            arr3[i][j] = arr1[i][j] + arr2[i][j];

        }
    }
    cout<<"final matrice"<<endl;
    //output
    for(int k =0; k <3; k++){
        for(int l = 0; l <4; l++){
            cout<<arr3[k][l]<<" ";
        }cout<<endl; 
    }
    return 0;
}
int main(){
    matrices();
    return 0;
}

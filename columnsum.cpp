#include <iostream>;
using namespace std;

int columnsum(){
    int rows;
    int cols;
    int num;
    
    cout<<"enter the number of rows u want";
    cin>>rows;
    cout<<"enter the nuber of columns u want";
    cin>>cols;
    int arr[rows][cols];

    for(int i =0; i < rows; i++){
        for(int j =0; j<cols; j++){
            cout<<"enter number";
            cin>>num;
            arr[i][j] = num;

        }

    }
    int sumrow;
    cout<<"which column do u want a sum of? Column 1 is column 0";
    cin>>sumrow;
    int sum = 0;

    for(int i =0; i < rows; i++){
        for(int j =0; j<cols; j++){
            if (j == sumrow){
                sum = sum + arr[i][j];
            }
        }
    }
    cout<<"sum of this column is"<<sum;
}
int main(){
    columnsum();
    return 0;
}
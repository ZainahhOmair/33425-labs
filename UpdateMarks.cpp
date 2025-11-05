#include <iostream>
using namespace std;

void origmarks(int &marks){
    
    marks = marks + 10;
}
int main(){
    cout<<"enter ur marks";
    int number;
    cin>>number;
    origmarks(number);
    cout<<"ur new marks:"<<number;
    system("pause");
    return 0;
}
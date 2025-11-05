#include <iostream>
using namespace std;

void swapvalues(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int x,y;
    cout<<"enter values for a";
    cin>>x;
    cout<<"enter values for b";
    cin>>y;
    swapvalues(x,y);
    cout<<"a = "<<" "<<x<<"b = "<<" "<<y;

}
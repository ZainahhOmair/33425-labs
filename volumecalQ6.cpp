#include <iostream>
using namespace std;
 int a;
 int h;

void getval(){
    cout<<"enter length of 1 side of base";
    cin>>a;
    cout<<"enter height";
    cin>>h;

}
void volumecal(){
    float vol;
    getval();
    vol = a * a * (h / 3.0);
    cout<<vol;
}
int main(){
    
    volumecal();
    return 0;
}

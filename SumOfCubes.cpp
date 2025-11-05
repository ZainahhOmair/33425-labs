#include <iostream>
using namespace std;

int sum(){
    int num;
    cout<<"till which integer should we add sum of cubes?";
    cin>>num;
    int sum = 0;
    int answer;
    for(int i = 1; i <= num; i++){
        answer = i * i *i;
        sum = sum + answer;
}
cout<<"answer is"<<sum;
}
int main(){
     sum();
     return 0;
}

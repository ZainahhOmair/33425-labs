#include <iostream>
#include<cmath>
using namespace std;

int square(int n){
    int result;
    result = n * n;
    return result;
}

int cube(int n){
    int result;
    result = n * n * n;
    return result;
}

int sum(int n){
    int answer;
    answer = square(n) + cube(n);
    return answer;

}

int main(){
    int n;
    cout<<"which number?";
    cin>>n;
    cout<< sum(n);
}
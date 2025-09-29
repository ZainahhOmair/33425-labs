#include<iostream>
using namespace std;

int main(){
    int count = 0;
    cout << "3a + 7b - 5c = 10\n\n";
    cout << "The integer roots for given problem are:\n";
    for(int a = -10; a <= 10; a++){
        for(int b = -10; b <= 10; b++){
            for(int c = -10; c <= 10; c++){
                if(3*a + 7*b - 5*c == 10){
                    cout << "Solution:\t a = " << a << " \t b = " << b << " \t c = " << c << endl;
                    count++;
                }
            }
        }
    }
    cout << "\nTotal solutions = " << count << endl;
    return 0;
}

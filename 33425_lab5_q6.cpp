#include <iostream>
using namespace std;

int main() {
    int n = 10;
    double cse141, cse141_lab, cse578;
    double sum1 = 0, sum2 = 0, sum3 = 0;

    for (int i = 0; i < n; i++) {
        cout << "Enter grades for student "<< (i+1) << " out of 10:\n";
        cout << "CSE141: ";
        cin >> cse141;
        cout << "CSE141-lab: ";
        cin >> cse141_lab;
        cout << "CSE578: ";
        cin >> cse578;

        sum1 += cse141;
        sum2 += cse141_lab;
        sum3 += cse578;
    }

    cout << "Average CSE141: " << sum1 / n << endl;
    cout << "Average CSE141-lab: " << sum2 / n << endl;
    cout << "Average CSE578: " << sum3 / n << endl;

    double totalAvg = (sum1 + sum2 + sum3) / (n * 3);
    cout << "Overall average: " << totalAvg << endl;

    
}

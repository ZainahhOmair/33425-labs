#include <iostream>
#include <ctime>
#include <cmath>  
using namespace std;

int randomnum() {
    int n;
    int r;

    cout << "How many numbers do you want to generate? ";
    cin >> n;

    cout << "Tell the largest number till which numbers should be generated ";
    cin >> r;

    int arr[n];

    srand(time(0));

    for (int i = 0; i < n; i++) {
        int randominteger = rand() % r;
        arr[i] = randominteger;
        cout << "Random number " << i + 1 << ": " << randominteger << endl;
    }

    int total = 0;
    float mean = 0;

    for (int j = 0; j < n; j++) {
        total = total + arr[j];
    }

    mean = static_cast<float>(total) / n;
    cout << "mean is " << mean << endl;

    float sdarr[n];
    float num;
    for (int k = 0; k < n; k++) {
        num = arr[k] - mean;
        sdarr[k] = num * num;
    }

    float squaredtotal = 0;
    for (int y = 0; y < n; y++) {
        squaredtotal = squaredtotal + sdarr[y];
    }

    float var;
    float standarddeviation;
    var = static_cast<float>(squaredtotal) / (n - 1);
    standarddeviation = sqrt(var);
    cout << "standard deviation is " << standarddeviation << endl;

    return 0;
}
int main(){
    randomnum();
    return 0;
}

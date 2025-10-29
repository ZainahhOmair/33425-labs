#include <iostream>
#include <climits>
using namespace std;

void maxmin() {
    int n;
    cout << "How many values do you want to enter? ";
    cin >> n;

    int arr[n];
    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < n; i++) {
        cout << "Enter number: ";
        cin >> arr[i];

        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    cout << "Highest number entered: " << max
         << "  Lowest number entered: " << min << endl;
}

int main() {
    maxmin();
    return 0;
}

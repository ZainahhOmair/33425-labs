#include <iostream>
using namespace std;

int main() {
    int n;
    char choice;
    int quan;
    int total = 0;

    cout << "Enter number of food items you want to order ";
    cin >> n;

    int i = 0;
    while (i < n) {
        cout << "Enter choice in lowercase (B/F/P/S) ";
        cin >> choice;
        cout << "Enter quantity ";
        cin >> quan;

        if ( choice == 'b') {
            total = total + 200 * quan;
        }
        else {
            if (choice == 'f') {
                total = total + 50 * quan;
            }
            else {
                if (choice == 'p') {
                    total = total + 500 * quan;
                }
                else {
                    if (choice == 's') {
                        total = total + 150 * quan;
                    }
                    else {
                        cout << "Invalid choice";
                    }
                }
            }
        }

        i = i + 1;
    }

    cout << "Total charges: Rs. " << total;


}

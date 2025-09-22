#include <iostream>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int x, y, answer, correct = 0, wrong = 0, small, large;

    srand(time(0));

    while (true) {
        x = rand() % 10 + 1;
        y = rand() % 10 + 1;

        if (x < y) {
            small = x;
            large = y;
        } else {
            small = y;
            large = x;
        }

        cout << "What is " << small << " * " << large << " ? Enter -1 to quit";
        cin >> answer;

        if (answer == -1) {
            break;
        }

        if (answer == small * large) {
            cout << "Correct" << endl;
            correct++;
        } else {
            cout << "Wrong The correct answer is " << small * large << endl;
            wrong++;
        }
    }

    cout << "You answered " << correct << " correct and " << wrong << " wrong" << endl;

    return 0;
}
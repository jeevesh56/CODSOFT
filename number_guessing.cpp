#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
using namespace std;

int main() {
    srand((unsigned)time(0));
    int secret = rand() % 100 + 1, guess, tries = 0;
    cout << "Welcome! Guess my number (1-100):\n";
    while (true) {
        cout << "Your guess: ";
        if (!(cin >> guess)) {
            cout << "Please enter a valid number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        if (guess < 1 || guess > 100) {
            cout << "Between 1 and 100, please.\n";
            continue;
        }
        tries++;
        if (guess < secret) cout << "Too low!\n";
        else if (guess > secret) cout << "Too high!\n";
        else {
            cout << "You got it in " << tries << " tries!\n";
            break;
        }
    }
    cout << "Game over.\n";
    return 0;
}


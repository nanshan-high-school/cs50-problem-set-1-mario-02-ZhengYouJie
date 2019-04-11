#include <iostream>
using namespace std;

int main() {
    int height;

    do {
        cout << "Height: ";
        cin >> height;
    } while (height < 1 || height > 8);

    for (int i = 1; i <= height; i++) {
        for (int space = 0; space < height - i; space++) {
            cout << " ";
        }

        for (int star = 0; star < i; star++) {
            cout << "*";
        }

        cout << "  ";

        for (int star = 0; star < i; star++) {
            cout << "*";
        }

        cout << "\n";
    }
}

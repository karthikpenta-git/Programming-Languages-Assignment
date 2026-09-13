#include <iostream>
using namespace std;

int main() {
    cout << "Allocating memory..." << endl;

    int* numbers = new int[1000000];

    numbers[0] = 100;

    cout << "First value: " << numbers[0] << endl;

    // Intentionally not using delete[] to demonstrate a memory leak

    cout << "Program ending without freeing allocated memory." << endl;

    return 0;
}

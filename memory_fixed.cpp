#include <iostream>
using namespace std;

int main() {
    cout << "Allocating memory..." << endl;

    int* numbers = new int[1000000];

    numbers[0] = 100;

    cout << "First value: " << numbers[0] << endl;

    delete[] numbers;
    numbers = nullptr;

    cout << "Memory successfully released using delete[]." << endl;

    return 0;
}

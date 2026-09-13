#include <iostream>
using namespace std;

int main() {

    cout << "Allocating memory..." << endl;

    int* numbers = new int[1000000];

    numbers[0] = 100;

    cout << "First value: " << numbers[0] << endl;

    delete[] numbers;

    numbers = nullptr;

    cout << "Memory manually released using delete[]." << endl;
    cout << "Pointer set to nullptr." << endl;

    return 0;
}

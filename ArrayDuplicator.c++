#include <iostream>
using namespace std;

int main() {
    // Original array
    int original[] = {1, 2, 3, 4, 5};
    int size = sizeof(original) / sizeof(original[0]);

    // Duplicate array
    int duplicate[size];

    // Copy elements
    for (int i = 0; i < size; i++) {
        duplicate[i] = original[i];
    }

    // Print duplicated array
    cout << "Duplicated array: ";
    for (int i = 0; i < size; i++) {
        cout << duplicate[i] << " ";
    }
    cout << endl;

    return 0;
}

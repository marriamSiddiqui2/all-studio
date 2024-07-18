#include <iostream>
using namespace std;

int main() {
    const int SIZE = 7;
    int arr[SIZE];
    
    // Input 7 numbers from the user
    cout << "Enter 7 numbers:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << "Enter number " << i+1 << ": ";
        cin >> arr[i];
    }

    // Input the index of the element to delete
    int index;
    cout << "\nEnter the index of the element to delete (0 to " << SIZE - 1 << "): ";
    cin >> index;

    // Check if the index is valid
    if (index < 0 || index >= SIZE) {
        cout << "Invalid index!\n";
        return 1;
    }

    // Shift elements to the left to overwrite the element to be deleted
    for (int i = index; i < SIZE - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    // Output the updated array
    cout << "\nArray after deletion:\n";
    for (int i = 0; i < SIZE - 1; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

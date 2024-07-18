\include <iostream>
using namespace std;

int main() {
    const int SIZE = 6;
    int arr[SIZE];
    
    // Input 6 numbers from the user
    cout << "Enter 6 numbers:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << "Enter number " << i+1 << ": ";
        cin >> arr[i];
    }

    // Input the element to insert
    int element;
    cout << "\nEnter the element to insert: ";
    cin >> element;

    // Input the index to insert at
    int index;
    cout << "Enter the index to insert at (0 to " << SIZE - 1 << "): ";
    cin >> index;

    // Shift elements to the right to make space for the new element
    for (int i = SIZE - 1; i > index; --i) {
        arr[i] = arr[i - 1];
    }

    // Insert the element at the desired index
    arr[index] = element;

    // Output the updated array
    cout << "\nArray after insertion:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

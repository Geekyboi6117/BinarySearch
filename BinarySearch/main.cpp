#include <iostream>
#include "binarysearch.h"
using namespace std;

int main() {
    int SIZE;
    do {
        cout << "Enter the size of the array (max 100): ";
        cin >> SIZE;
    } while (SIZE <= 0 || SIZE > 100);

    int* arr = new int[SIZE];

    cout << "Enter " << SIZE << " integers in sorted order:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter " << i + 1 << "  Element/\n";
        cin >> arr[i];
    }

    int target;
    cout << "Enter the element you want to search for: ";
    cin >> target;

    BinarySearch searcher;
    int result = searcher.search(arr, SIZE, target);

    if (result != -1)
        cout << "Element " << target << " found at index " << result << ".\n";
    else
        cout << "Element " << target << " not found.\n";

    delete[] arr; 

    return 0;
}

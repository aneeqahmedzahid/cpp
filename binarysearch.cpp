#include <iostream>
using namespace std;

int binarySearch(int array[], int length, int target) {
    int low = 0;
    int high = length - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (array[mid] == target) {
            return mid; // Target found at index mid.
        } else if (array[mid] < target) {
            low = mid + 1; // Search in the right half.
        } else {
            high = mid - 1; // Search in the left half.
        }
    }

    return -1; // Target not found.
}

int main() {
    int length;
    cout << "Enter The Length Of Sorted Array : ";
    cin >> length;

    int array[length];

    for (int i = 0; i < length; i++) {
        cout << "Enter Sorted Number " << i + 1 << " : ";
        cin >> array[i];
    }

    int target;
    cout << "Enter Number To Search : ";
    cin >> target;

    int result = binarySearch(array, length, target);

    if (result != -1) {
        cout << "The Number " << target << " Found At Location : " << result + 1;
    } else {
        cout << "The Number " << target << " is not found in the array.";
    }

    return 0;
}

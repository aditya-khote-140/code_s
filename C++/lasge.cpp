#include <iostream>
#include <climits>
using namespace std;

void findElements(int arr[], int size) {
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }

        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    cout << "Smallest element: " << smallest << endl;
    cout << "Largest element: " << largest << endl;
    cout << "Second largest element: " << secondLargest << endl;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    findElements(arr, size);

    return 0;
}

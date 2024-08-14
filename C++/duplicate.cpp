#include <iostream>
#include <unordered_set>
using namespace std;

void removeDuplicates(int arr[], int& size) {
    unordered_set<int> uniqueElements;

    int index = 0;
    for (int i = 0; i < size; i++) {
        if (uniqueElements.find(arr[i]) == uniqueElements.end()) {
            uniqueElements.insert(arr[i]);
            arr[index++] = arr[i];
        }
    }

    size = index;
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

    removeDuplicates(arr, size);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

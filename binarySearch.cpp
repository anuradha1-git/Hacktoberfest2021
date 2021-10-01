#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(vector<int> &arr, int target, int low, int high) {

    // if low becomes greater than high return false
    if (low > high)
        return false;

    int mid = low + (high - low) / 2;
    // if target equals the array element at mid return true

    if (arr[mid] == target)
        return true;
    // if target is greater that the array element at mid : low = mid + 1

    else if (arr[mid] < target)
        return binarySearch(arr, target, mid + 1, high);
    // if target is lesser that the array element at mid : high = mid - 1
    else
        return binarySearch(arr, target, low, mid - 1);
}

int main() {
    // array size
    int array_size;
    cin >> array_size;

    // array
    vector<int> arr(array_size);
    // take vector input
    for (int index = 0; index < array_size; index++)
        cin >> arr[index];

    // element to search
    int search_key;
    cin >> search_key;

    if (binarySearch(arr, search_key, 0, array_size - 1) == true)
        cout << "FOUND\n";
    else
        cout << "NOT FOUND";
    return 0;
}

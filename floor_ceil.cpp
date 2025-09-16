#include <bits/stdc++.h>
using namespace std;

int floorIndex(int arr[], int n, int x) {
    int ans = -1;
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] <= x) {
            ans = mid;
            low = mid + 1; // move right
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int ceilIndex(int arr[], int n, int x) {
    int ans = -1;
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] >= x) {
            ans = mid;
            high = mid - 1; // move left
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 35;

    int ind1 = floorIndex(arr, n, x);
    int ind2 = ceilIndex(arr, n, x);

    if (ind1 != -1) cout << "Floor: " << arr[ind1] << endl;
    else cout << "Floor doesn't exist" << endl;

    if (ind2 != -1) cout << "Ceil: " << arr[ind2] << endl;
    else cout << "Ceil doesn't exist" << endl;

    return 0;
}

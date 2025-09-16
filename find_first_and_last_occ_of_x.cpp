#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {2, 4, 6, 6, 8, 8, 8, 11, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 8; // value to search

    int first = -1, last = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            if (first == -1) first = i;
            last = i;
        }
    }

    cout << "First index = " << first << endl;
    cout << "Last index = " << last << endl;

    return 0;
}

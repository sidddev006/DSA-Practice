// Recursive code to reverse an array
#include <bits/stdc++.h>
using namespace std;

void rev(int i, int r, int a[]) {
    if (i >= r/2) return;
    swap(a[i], a[r - i - 1]);
    rev(i + 1, r, a);
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    rev(0, n, a);
    cout << "The reverse of array is : ";
    for (int i = 0; i < n; ++i) cout<<a[i]<< " ";
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm> // for reverse()

using namespace std;

int main() {
    // Create and initialize vector
    vector<int> vec = {1, 2, 3, 4, 5};

    cout << "Original vector: ";
    for (int x : vec) cout << x << " ";
    cout << endl;

    // Method 1: Using STL reverse()
    reverse(vec.begin(), vec.end());

    cout << "Reversed vector (STL): ";
    for (int x : vec) cout << x << " ";
    cout << endl;

    // Method 2: Manual swapping
    int n = vec.size();
    for (int i = 0; i < n / 2; i++) {
        swap(vec[i], vec[n - i - 1]);
    }

    cout << "Reversed vector (Manual): ";
    for (int x : vec) cout << x << " ";
    cout << endl;

    return 0;
}
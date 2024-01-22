#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    // Check if it's impossible to create such an array
    if (N % 2 == 1 && K % 2 == 0) {
        cout << -1 << endl;
        return 0;
    }

    vector<int> A(N, 1); // Initialize all elements to 1
    int evenCount = N / 2; // Number of even elements
    int oddCount = N / 2;  // Number of odd elements

    // Adjust the elements to meet the required sum K
    for (int i = 0; i < N && K > 0; i += 2) {
        int diff = min(K - 1, 10 - A[i]); // Adjust by at most 10
        A[i] += diff;
        A[i + 1] += (K - diff);
        K -= diff;
    }

    // Check if the sum is not achieved
    if (K != 0) {
        cout << -1 << endl;
        return 0;
    }

    // Print the array A
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

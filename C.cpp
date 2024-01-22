#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases

    while (t > 0) {
        int p;
        cin >> p;
        int arr[p];

        vector<int> evenInd;
        vector<int> oddInd;

        vector<int> even;
        vector<int> odd;

        for (int i = 0; i < p; i++) {
            cin >> arr[i];
            if (arr[i] % 2 == 0) {
                evenInd.push_back(i);
                even.push_back(arr[i]);
            } else {
                oddInd.push_back(i);
                odd.push_back(arr[i]);
            }
        }
        int n = sizeof(arr) / sizeof(arr[0]);

        bool ans = true;

        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());

        for (int i = 0; i < evenInd.size(); i++) {
            arr[evenInd[i]] = even[i];
        }

        for (int i = 0; i < oddInd.size(); i++) {
            arr[oddInd[i]] = odd[i];
        }

        for (int i = 0; i < p - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                ans = false;
            }
        }

        if (ans) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        t--;
    }
    return 0;
}
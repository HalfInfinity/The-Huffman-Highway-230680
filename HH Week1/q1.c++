#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int i, j, k;
    for (i = 0; i < n; i++) {
        for (k = 0; k < n; k++) {
            if (k % 2 == 0) {
                for (j = 0; j < (i + 1); j++) {
                    cout << (j + 1);
                }
                for (j = 0; j < 2 * (n - 1 - i); j++) {
                    cout << " ";
                }
            } else if (k % 2 == 1) {
                for (j = i; j >= 0; j--) {
                    cout << (j + 1);
                }
            }
        }
        cout << endl;
    }
    return 0;
}
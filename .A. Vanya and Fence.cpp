#include <iostream>
using namespace std;

int main() {
    int n, h;
    cin >> n >> h;
    int arr[n];
    int sum1 = 0, sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > h) {
            sum1 += 2;
        } else {
            sum += 1;
        }
    }

    int sum3 = sum1 + sum;
    cout << sum3;

    return 0;
}

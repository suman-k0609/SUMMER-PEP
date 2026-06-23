#include <iostream>
using namespace std;

int main() {
    int a[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int i = 0;

    for (int j = 0; j < 4; j++) {
        int k = j;
        i = 0;

        while (k >= 0 && i < 4) {
            cout << i << " " << k << ", ";
            i++;
            k--;
        }


        for (int i = 0; i < 4; i++) {
        int row = 0;

        for (int j = i; j >= 0; j--) {
            cout << arr[row][j] << " ";
            row++;
        }

        cout << endl;
    }

        cout << endl;
    }

    return 0;
}
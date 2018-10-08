#include <iostream>

using namespace std;

int cubic_mss(const int arr[]) {
    int maxSum = 0;
    int n = sizeof(arr)/sizeof(*arr);
    cout << n << endl;

    int counter = 0;
    for (const int &element : arr){
        counter++;
    }

    for (int i=1; i < n; i++) {
        for (int j = i; j < n; j++) {
            int thisSum = 0;
            for (int k = i; k < j; k++) {
                thisSum = thisSum+arr[k];
            }
            if (thisSum > maxSum) {
                maxSum = thisSum;
            }
        }
    }
    return maxSum;
}

int main () {
    static const int arr1[] = {1, 2, -30, 4, 5};
    int mss1 = cubic_mss(arr1);
    cout << mss1 << endl;
    //more test cases here
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void Reverse(int arr[], int length) {
    int start = 0;
    int end = length -1;

    while (start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

}

void Print_arr(int arr[], int length) {
    for(int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
  int arr[6] = {4,8,5,9,6,2};

  Reverse(arr, 6);
  Print_arr(arr, 6);

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int length, int key) {

    int start = 0;
    int end = length - 1;

    int mid = (start+end)/2;

    while(start<=end) {
        if(arr[mid] == key) {
            return mid;
        }

        if(key > arr[mid]) {
            start = mid + 1;

        }

        if(key < arr[mid]) {
            end = mid -1;
        } 

        mid = (start+end)/2;
        
    }
    return -1;

}

int main() {

  int arr[6] = {2,4,6,8,10,12};
  int keyIndex = binarySearch(arr, 6, 8);

  cout<< " Index of 8 is : " << keyIndex;

  return 0;
}
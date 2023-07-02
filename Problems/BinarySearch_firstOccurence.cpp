#include <bits/stdc++.h>
using namespace std;

 int binarySearch(int arr[], int length, int key) {

    int start = 0;
    int end = length - 1;
    int mid = (start+end)/2;

    while(start<=end) {
        if(arr[mid] == key) {

            while(key == arr[mid]) {
                if (arr[mid] == arr[mid - 1]){
                    mid--;
                }
            }
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
  
  int arr[5] = {2,3,3,3,5};
  int indexSearch = binarySearch(arr, 5, 3);
  cout << " Index of 3 : " << indexSearch;
  

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int getMax(int num[], int size) {

    int max = INT_MIN;
    for(int i  = 0; i < size; i++) {

        if( num[i] > max) {
            max = num[i];
        }
    }
    return max;
}

int getMin(int num[], int size) {
    int min = 0;
    for(int i = 0; i < size; i++) {
        if(num[i] < min) {
            min = num[i];
        }
    }
    return min;
}

int main() {
  int size;
  cin >> size;

  int num[100];

  //taking input in array
  for (int i = 0; i < size; i++) {
    cin >> num[i];
  }
    //getMax(num, size);
    //cout << getMax(num, size);
    cout << getMin(num, size);

  return 0;
}
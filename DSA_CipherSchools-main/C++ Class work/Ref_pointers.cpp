#include <bits/stdc++.h>
using namespace std;

int main() {
    int var = 10;
    cout << &var <<endl;

    //pointer is a variable whose value is address of another
    //variable

    int *ptr;
    ptr = &var;

    cout<<ptr<<endl;
    cout<< &ptr <<endl;
    cout<< *ptr <<endl; //dereferencing the pointer

  
  return 0;
}
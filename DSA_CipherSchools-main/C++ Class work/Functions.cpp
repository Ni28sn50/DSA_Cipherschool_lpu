#include <bits/stdc++.h>
using namespace std;
//Creating and defining the function
/*
void myFunc() {
    cout<< "retarded";
}
*/

int power(int base, int power) {
    int ans = 1;
    for (int i =1; i<=power; i++) {
        ans = ans * base;
    }
    return ans;
}


int main() {
  
  int a,b;
  cin>>a>>b;

  //Calling Function
  cout<<"Answer is : " << power(a,b);
  return 0;
}


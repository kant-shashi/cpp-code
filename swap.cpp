// Author: Shashi Kant (http://blog.tenhash.com)

// This program uses xor function for swapping two integers with minimum possible clutter.
// You can use this method to swap integers and chars. Don't try to use it to swap float or double.


#include<iostream>
#define SWAP(a,b) ((a)^=(b)^=(a)^=(b))
using namespace std;
int main()
{
  int a=4,b=5;
  cout<<"before swap:\na="<<a<<"\nb="<<b<<endl;
  SWAP(a,b);
  cout<<"after swap:\na="<<a<<"\nb="<<b<<endl;
}

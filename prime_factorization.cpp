/**
 * Author: Shashi Kant
 * code for finding the prime factorization of a given integer.
 */

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long i;
    long num;
    cin>>num;               // taking input the required integer
    long c = num;
    while(!(c%2))           // first check for 2 (note: 2 is only prime number which is even)
    {
        cout<<2<<endl;
        c/=2;
    }
    i = 3;
    while (i <= sqrt(c)+1)
    {
        if (!(c%i))
        {
            cout<<i<<endl;
            c/=i;
        }
        else
            i+=2;           // increase by 2 since, only even prime is 2 which we covered above
    }
    if (c > 1)
        cout<<c<<endl;
}

/**
 * Author: Shashi Kant (blog.tenhash.com)
 *
 * INPUT: The input to your program consists of several lines, each containing two non-negative
 * integers, n and m, both less than 2^31.
 * OUTPUT: For each input line, output a line stating whether or not m divides n!
 */
#include<iostream>

 using namespace std;
 int main()
 {
    unsigned long long n,m,mul = 1;
    unsigned long len;
    cin>>len;
    while (len--)
    {
        cin>>n>>m;
    for (int i=1;i<=n;i++)
    {
        if (!(i%m))
        {
            mul = 0;
            break;
        }
        else{
            mul *= i%m;
        }

    }
    if (!(mul%m))
        cout<<n<<"! is divisible by "<<m<<endl;
    else
        cout<<n<<"! is not devisible by "<<m<<endl;
    }
    return 0;
 }
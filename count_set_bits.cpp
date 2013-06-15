#include<iostream>

using namespace std;
int main()
{
    unsigned long in,count,sk;
    cin>>in;
    while(in--)
    {
        count = 0;
        cin>>sk;
        while (sk)
        {
            sk &= sk-1;
            count++;
        }
        cout<<count<<endl;
    }
}

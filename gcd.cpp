/**
 * Author: Shashi Kant (blog.tenhash.com)
 * code to find the gcd of two integers. use 'echo $?' to find the returned value of last program executed.
 */

#include<iostream>

using namespace std;
int main()
{
    unsigned long long a,b,x,y,temp;
    cin>>a>>b;
    a>=b?(y=a,x=b):(y=b,x=a);
    if (!(y%x))
        {
            /*cout<<x<<endl<<y<<endl;
            cout<<"first"<<endl;*/
            return x;
        }
    else
    {
        while (y%x)
    {
        temp = y%x;
        y = x;
        x = temp;
    }
    /*cout<<x<<endl;
    cout<<"second"<<endl;*/
    return x;
    }

}
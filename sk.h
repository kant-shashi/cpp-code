#ifndef _SK_H
#define _SK_H

#define SWAP(x,y) ((x) ^= (y) =^ (x) ^= (y))
#define MAX(x,y) ((x) >= (y) ? (x) : (y))
#define MIN(x,y) ((x) <= (y) ? (x) : (y))
#define STR(x) #x
#define MEM(type,size) ((type *) malloc(size))

%:ifndef NULL
%:define NULL (void *) 0
%:endif

#include <iostream>
#include <cstdio>
#include <string>
#include <cstdlib>
#include <csignal>
#include <wchar.h>
#include <stddef.h>
#include <cassert>

using namespace std;

typedef unsigned int uint;
typedef unsigned long int ulint;
typedef long int lint;
typedef long long int llint;
typedef unsigned char uchar;
typedef long double ldouble;
typedef long long ll;

ldouble POWER(ldouble x,int y)
{
    if(y)
    {
        if (!y)
            return 1;
        else
        {
            if (y%2)
                return x*POWER(x,y/2)*POWER(x,y/2);
            else
                return POWER(x,y/2)*POWER(x,y/2);
        }

    }
    else return 1;

}



#endif
/**
 * Examining Data Representations.
 * Please run this code and explain the behavior of the code.
 * This code can also be used to show that data is stored in the memory in big/little endian
 */

#include<cstdio>
void show_bytes(char *start, int len)
{
    for (int i=0; i<len; i++)
        printf("%p\t0x%.2d\n",start+i,*(start+i));
    printf("\n");
}

int main()
{
    int y = 99;
    int *x = &y;
    show_bytes((char *)&y,sizeof(int));
    return 0;
}

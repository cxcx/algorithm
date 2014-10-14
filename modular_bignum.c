/*
 * =====================================================================================
 *
 *       Filename:  modular_bignum.c
 *
 *    Description:  递归的求解大整数模运算
 *
 *        Version:  1.0
 *        Created:  10/14/2014 10:23:39 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

int main()
{

}

int modular_produce(int b, int n, int m)
{
    int size = 0;
    while(n>0)
    {
        n = n/2;
        size++;
    }
    char *res = (char*)malloc(size+1);
    ten2two(10, res, size+1);
    while(*res != '\0')
    {
        printf("%c",*res++);
    }
    return 0;
}

void ten2two(int n, char *res, int length_res)
{
    *(res+length_res-1) = '\0';
    length_res--;
    while(n > 0)
    {
        char n_mod = n%2;
        n = n / 2;
        *(res+length_res-1) = n_mod;
        length_res--;
    }
}

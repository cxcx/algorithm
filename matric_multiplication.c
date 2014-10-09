/*
 * =====================================================================================
 *
 *       Filename:  matric_multiplication.c
 *
 *    Description:  matric_multiplication
 *
 *        Version:  1.0
 *        Created:  10/09/2014 06:25:13 PM
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
void matric_multiply(int* a,int n,int *b,int m, int *res);
int main()
{
    int i,j;
    int a[2][1] = {2,1};
    int b[1][2] = {3,3};
    int *res = (int*)malloc(2*sizeof(int));
    matric_multiply(a,2,b,1, res);
    for(i = 0;i<2;i++)
    {
        for(j = 0;j<1;j++)
            printf("%d\n",*(res+j+i));
    }
}
void matric_multiply(int* a,int n,int *b,int m, int *res)
{
    int h = 0;
    for(;h<m*n;h++)
        *(res+h) = 0;
    int k = sizeof(*a)/(n*sizeof(int));
    int i,j,x;
    for(i = 0; i < n ; n++)
        for(j = 0;j < m; j++)
            for(m = 0; x < k; x++)
            {
                *(res+i+j) = *(res+i+j)+*(a+i+j)*(*(b+i+j));
            }
}


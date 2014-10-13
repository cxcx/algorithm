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
void matric_multiply(int* a,int n,int* b,int m,int length_b, int *res);
int main()
{
    int i,j;
    int a[4][3] = {1,0,4,
                   2,1,1,
                   3,1,0,
                   0,2,2};
    int b[3][2] = {2,4,
                    1,1,
                    3,0};
    int *res = (int*)malloc(8*sizeof(int));
    matric_multiply(a,4,b,3,6,res);
    for(i = 0;i<8;i++)
            printf("%d\n",*(res+i));
    free(res);
    return 0;
}
void matric_multiply(int* a,int n,int* b,int m,int length_b, int *res)
{
    //自己的
//    int h = 0;
      int k = length_b/m;
      printf("%d\n",k);
//    for(;h<m*k;h++)
//        *(res+h) = 0;
//      int i,j,x;
//    for(i = 0; i < n ; n++)
//        for(j = 0;j < k; j++)
//            for(x = 0; x < m; x++)
//                *(res+i*k+j) = *(res+i*k+j) + *(a+i*m+x)*(*(b+k*x+j));
//
//  书上
    int i,j,q;
    for(i=0; i<n; i++)
        for(j=0; j<k; j++)
        {
            *(res+i*k+j) = 0;
            for(q=0; q<m; q++)
                *(res+i*k+j) = *(res+i*k+j) + *(a+i*m+q)*(*(b+q*k+j));
        }
}


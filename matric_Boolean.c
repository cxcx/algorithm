/*
 * =====================================================================================
 *
 *       Filename:  matric_Boolean.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/13/2014 08:34:35 PM
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
    int a[3][2] = {1,0,
                    0,1,
                    1,0};
    int b[2][3] = {1,1,0,
                   0,1,1};
    int *res = (int*)malloc(9*sizeof(int));
    matric_Boolean(a,3,b,2,6,res);


    //test
    int i = 0;
    while(i<9)
    {
        printf("%d ",*(res+i));
        if(i == 2 || i == 5)
            printf("\n");
        i++;
    }

}
void matric_Boolean(int *a, int a_colm, int *b, int b_clom, int b_length, int *res)
{
    int a_row = b_clom;
    int b_row = b_length/b_clom;
    int i,j,k;
    for(i = 0; i<a_colm; i++)
        for(j = 0; j<b_row; j++)
        {
            *(res+i*b_row+j) = 0;
            for(k = 0; k<b_clom; k++)
                *(res+i*b_row+j) = *(res+i*b_row+j)||(*(a+i*a_row+k) && *(b+k*b_row+j));
        }       
}



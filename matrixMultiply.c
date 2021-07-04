#include <stdio.h>

int main()
{
    int n1, m1, n2, m2;
    printf("Input n1,m1 and n2,m2 of the two matrix you want to multiply where n is rows and m is column\n");
    scanf("%d%d%d%d", &n1, &m1, &n2, &m2);
    getchar();
    if (m1 == n2)//only when true is multiplication possilble
    {
        int a[m1][n1], b[m2][n2], c[m2][n1];//initializing arrays to store the matrix
        printf("\nPlease enter the nubmers for the first martix\n");
        for (int i = 0; i < n1; i++)//to store the first matrix
        {
            for (int k = 0; k < m1; k++)
            {
                scanf("%d", &a[k][i]);
                getchar();
            }
        }
        printf("\nBelow is the first matrix you entered\n");
        for (int i = 0; i < n1; i++)//prints the first matrix
        {
            for (int k = 0; k < m1; k++)
            {
                printf("%d\t", a[k][i]);
            }
            printf("\n\n");
        }

        printf("\nPlease enter the nubmers for the second martix\n");
        for (int i = 0; i <n2; i++)//to store the second matrix
        {
            for (int k = 0; k < m2; k++)
            {
                scanf("%d", &b[k][i]);
                getchar();
            }
        }
        printf("\nBelow is the second matrix you entered\n");
        for (int i = 0; i < n2; i++)//prints the second matrix
        {
            for (int k = 0; k < m2; k++)
            {
                printf("%d\t", b[k][i]);
            }
            printf("\n\n");
        }
        int sum;
        printf("\nProduct of the two matrix is\n");
        for (int i = 0; i < n1; i++)//does the multiplication
        {
            for (int k = 0; k < m2; k++)
            {
                sum = 0;
                for (int j = 0; j < m1; j++)
                {
                    sum += (a[j][i] * b[k][j]);
                }
                c[k][i] = sum;
            }
        }
        for (int i = 0; i < n1; i++)//prints the product matrix
        {
            for (int k = 0; k < m2; k++)
            {
                printf("%d\t", c[k][i]);
            }
            printf("\n\n");
        }
    }
    else
    {
        printf("\nThe matrix you have given cannot be multiplied\n");
    }

    return 0;
}

# include<stdio.h>
# include<stdlib.h>
int m, n;
void display(int a[10][10])
{   printf("\n Array is..:");
    for(int i=0; i<m; i++)
    {   printf("\n ");
        for(int j =0; j<n; j++)
        {
            printf("%d, ", a[i][j]);
        }
    }
}

void sparsematrix(int a[20][20])
{
    int b[3][20];
    int k=0;
    for(int i=0; i<m; i++)
    {   printf("\n ");
        for(int j =0; j<n; j++)
        {
            if(a[i][j] != 0)
            {
                b[0][k] = i;
                b[1][k] = j;
                b[2][k] = a[i][j];
                k += 1;

            }
        }
    }
     for(int i=0; i<3; i++)
    {   
        for(int j =0; j<k; j++)
        {
            printf(" %d ", b[i][j]);
        }
        printf("\n ");
    }
}

int main(int argc, char const *argv[])
{
    int  x, item;
    char ch = 'y';
    int a[20][20];
    printf("\n Enter the row and column size for 2D array");
    printf("\n Row size:");
    scanf(" %d ", &m);
    printf("\n Col size:");
    scanf(" %d", &n);
    printf("\nNow enter array A\n");
    for(int i=0; i<m; i++)
    {
        for(int j =0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("\n Sparse matrix is as follows:");
    sparsematrix(a);

}
# include <stdio.h>
void quicksort(int ar[], int l, int h)
{
    int pivot, i, j, temp;
    if(h>l)
    {
        pivot = l;
        i = l;
        j = h;
        while(i<j)
        {
            while(ar[i] <= ar[pivot] && i<=h)
            {i++;}
            
            while(ar[j] > ar[pivot] && j>=l)
            {j--;}
            if (i < j)
            {
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
        temp = ar[j];
        ar[j] = ar[pivot];
        ar[pivot] = temp;
        quicksort(ar, l, j-1);
        quicksort(ar, j+1, h);
    }
}

int main(int argc, char const *argv[])
{
    int A[100], n;
    printf("\nEnter the array size :");
    scanf("%d", &n);
    printf("\nEnter the array :");
    for(int i =0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("\nArray after Quick sort :");
    quicksort(A, 0, n-1);
    for(int i =0; i<n; i++)
    {
        printf(" %d ", A[i]);
    }
    return 0;
}

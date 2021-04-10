# include<stdio.h>
# include<stdlib.h>
int m, n,r,c;
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

void add(int a[10][10], int b[10][10])
{ int c[10][10];
  
   for(int i=0; i<m; i++)
    {
        for(int j =0; j<n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];      
        }
    }
    display(c);
  
}

void sub(int a[10][10], int b[10][10])
{ int c[10][10];
  for(int i=0; i<m; i++)
    {
        for(int j =0; j<n; j++)
        {
            c[i][j] = a[i][j] - b[i][j];      
        }
    }
    display(c);
   
}

void search(int c[10][10], int item)
{  int flag= 1;
   for(int i=0; i<m; i++)
    {
        for(int j =0; j<n; j++)
        {   
            if(c[i][j] == item)
            {     flag = 0;
                   printf("\n Your item found at row %d column %d", i+1, j+1);
            }       
        }
    } 
    if(flag!=0)
    printf("\n Element not found..");
}

void mul(int a[10][10], int b[10][10])
{
    int d[10][10];
    int t = n;
    if(n==r)
    {
       for (int i = 0; i < m; i++)
       {
           for (int j = 0; j < c; j++)
           {
             d[i][j] = a[i][t] + b[t][j];
             t++;
           }
           
       }
       display(d);
       
    }
    else
    {
        printf("\n can not multiply printf. Array sizes are not matching");
    }
    

}

int main(int argc, char const *argv[])
{
    int  x, item;
    char ch = 'y';
    int a[10][10], b[10][10], c[10][10];
    printf("\n matrix operatios program");
    printf("\n Enter the row and column size for 2D array");
    printf("\n Row size:");
    scanf(" %d ", &m);
    printf("...");
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
    printf("\n Row size:");
    scanf(" %d ", &r);
    printf("...");
    printf("\n Col size:");
    scanf(" %d", &c);
     printf("\nNow enter array B\n");
    for(int i=0; i<m; i++)
    {
        for(int j =0; j<n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n Operation list:\n1.Display\n2.Add\n3.Subtract\n4.searching\n5.multiplication");
     while((ch=='y')||(ch=='Y'))
    { printf("\n Your choice:");
      printf("...");
       scanf("%d", &x);          
     switch(x)
       {
            case 1 : display(a);
                     display(b);
                    break;
                     break;
            case 2 :add(a,b);
                    printf("\n Added successfully..");
                    break;
            case 3 :sub(a,b);
                    printf("\n Subtracted successfully..");
                    break;
            case 4 :printf("\nItem:");   
                    scanf("%d", &item); 
                    printf("\nIn array A");
                    search(a,item);
                    printf("\nIn array B");
                    search(b, item);
                    break;
            case 5 :mul(a,b);
                    break;
            default : exit(0);
       }
         printf("\n Once more...y/n:");
         scanf(" %s ", &ch);                    
    }

    return 0;
}

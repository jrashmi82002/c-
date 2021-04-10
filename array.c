#include <stdio.h>
# include<stdlib.h>
int s;
void display(int a[], int size)
{
     printf("\narray is:");
    for(int i=0;i<size;i++)
    {
        printf(" %d  ", a[i]);
    }
}

void sort(int a[])
{  int temp;
   for(int i=0;i<s;i++)
   {
       for(int j=0;j<s-i-1;j++)
       {
           if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
       }
   }
}

void insert(int a[], int item)
{
  int i;
  sort(a);
  for(i=s-1;i>=0;i--)
  {
    if(a[i]>item)
     a[i+1]=a[i];
    else
     break;
    
  }
  a[i+1]=item;
  s+=1;
  display(a,s);
}

void delete(int a[], int item)
{
  int i, temp;
  for(i=0; i<=s-2;i++)
  {
      if(a[i]==item)
      {
          temp=a[i];
          a[i]=a[i+1];
          a[i+1]=temp;
      }

  }a[s-1]=0;
  s-=1;
  display(a,s);

}

void search(int a[], int item)
{int i;
  for( i=0;i<=s-1;i++)
  {
      if(a[i]==item)
        printf("\n Found at %d number position" , i+1);
  }
  display(a,s);
}


int main(int argc, char const *argv[])
{   int item,a[100];
    int c;
    char ch ='y';
    printf("hello Everyone");
    printf("\n this is an array program");
    printf("\n enter array size less than 100");
    scanf("%d", &s);
    printf("\n Now enter array :");
    for(int i=0; i<s; i++)
    {
        scanf("%d",&a[i]);
    }
    display(a,s);
    printf("\n operation menu for arrays:");
    printf("\n1.Insertion\n2.Deletion\n3.Searching\n4.Sorting");
    while((ch=='y')||(ch=='Y'))
    {
       printf("\n As Your choice:");
       printf("...");
       scanf("%d",&c);
       switch(c)
       {
            case 1 : printf("\n Number to be inserted:");
                     scanf("%d", &item);
                    insert(a,item);
                    break;
            case 2 : printf("\n Element to be deleted:");
                     scanf("%d", &item);
                    delete(a, item);
                    break;
            case 3 : printf("\n Elemet to be searched:");
                     scanf("%d", &item);
                    search(a,item);
                    break;
            case 4 : printf("\n sorting....");
                    sort(a);
                    display(a,s);
                    break;
            default : exit(0);
       }
         printf("\n Once more...y/n:");
         scanf(" %c ", &ch);                    
    }
    getc;
    return 0;
}

# include <stdio.h>
# include <stdlib.h>
int f,r;

void display(int Q[100], int re)
{   printf("\nQueue is: ");
    for(int i =f; i<=r ; i++)
    {
        printf(" %d ", Q[i]);
    }
}

void Push(int Q[100], int item, int re)
{
  if(re == 99)
  printf("\nOverflow");
  else
  {   if(re == -1)
      { f= 0;  }
      re += 1;
      Q[re] = item;
      printf("\n Pushed successfully!!");
  }
  display(Q, re);
  printf(" %d", Q[r+1]);
     r = re;
}

int Pop(int Q[100], int fro)
{  int val ;
    if(fro== -1)
    { 
        printf("\n Underflow");
        return 0;
    }
    else
    {
      val = Q[f];
      fro +=1;
      f = fro;
    display(Q, r);
    return val;  
    }
}

int main(int argc, char const *argv[])
{
    int item, x, Q[100],c;
    char ch= 'y';
    f = r = -1;
    printf("\n queue implementation(static) operations:");
    printf("\n1.Push\n2.Pop\n3.Exit");
    while(ch == 'y' || ch =='Y')
    {
         printf("\n Your choice:");
         scanf("%d", &c);
         switch(c)
         {
             case 1 : printf("\nItem:");
                      scanf("%d", &item);
                      Push(Q, item, r);
                      break;
             case 2 : x = Pop(Q, f);
                      printf(" %d is deleted.", x);
                      break;
             case 3 : exit(0);
             default: break;         
         }
         printf("\n Once More..");
         scanf("%s", &ch);
    }
    return 0;
}
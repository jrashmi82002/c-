# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
int t;

void Push(int S[100], int item, int top)
{
   if(top == 99)
   printf("\n Overflow in stack");
   else
   {
       top += 1;
       S[top] = item;
       printf("\n Pushed successfully");
   }
   t = top;
   display(S,t);
}

int Pop(int S[100], int top)
{ int save;
  if(top == -1)
   { printf("\n Underflow in stack");
     return 0;
   }
  else
  {
      save = S[top];
      top -= 1;
      return save;
  }
t = top;
display(S,t);
}

void display(int S[100], int top)
{   printf("\nStack is: ");
    for(int i =0; i<top + 1; i++)
    {
        printf("%d ", S[i]);
    }
}

int main(int argc, char const *argv[])
{
    int item, x, S[100],c;
    char ch= 'y';
    t = -1;
    printf("\n Stack implementation(static) operations:");
    printf("\n1.Push\n2.Pop\n3.Exit");
    while(ch == 'y' || ch =='Y')
    {
         printf("\n Your choice:");
         scanf("%d", &c);
         switch(c)
         {
             case 1 : printf("\nItem:");
                      scanf("%d", &item);
                      Push(S, item, t);
                      break;
             case 2 : x = Pop(S, t);
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

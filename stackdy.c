# include<stdio.h>
# include<stdlib.h>

struct stack
{
    int info;
    struct stack * next;
}*top = NULL;
 

void display()
{
    struct stack * ptr;
    ptr = top;
    printf("\n stack is ..");
    while(ptr != NULL)
    {
        printf(" %d ", ptr->info);
        ptr = ptr->next;
    }
}

void Push( int item)
{
   struct stack *temp = (struct stack *)malloc(sizeof(struct stack));
    temp->info = item;
    temp->next = top;
    top = temp;
    printf("Pushed Successfully!!");
}  

int Pop( )
{ struct stack *ptr;
  int val;
  if(top == NULL)
  printf("\n Underflow");
  else
  {   ptr = top;
      val = ptr->info;
      top = top->next;
      printf("\nPoped out Successfull!!");
      free(ptr);
  }
  return val;
}

int main(int argc, char const *argv[])
{  
    int item, x,c;
    char ch = 'y';
    printf("\nStack implementation(dynamically) Operations:");
    printf("\n1.Push\n2.Pop\n3.Exit\n4.Display");
     while(ch == 'y' || ch =='Y')
    {
         printf("\n Your choice:");
         scanf("%d", &c);
         switch(c)
         {
             case 1 : printf("\nItem:");
                      scanf("%d", &item);
                      Push(item);
                      break;
             case 2 : x = Pop();
                      printf(" %d is deleted.", x);
                      break;
             case 3 : exit(0);
             case 4 : display();
             default: break;         
         }
         printf("\n Once More..");
         scanf("%s", &ch);
    }
    free(top);
    return 0;
}




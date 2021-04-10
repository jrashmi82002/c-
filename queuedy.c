# include<stdio.h>
# include<stdlib.h>

struct queue
{
    int info;
    struct queue * next;
};
struct queue *front = NULL;
struct queue *rear = NULL;

void Push(int item)
{
   struct queue *temp = (struct queue *)malloc(sizeof(struct queue));
   temp->info = item;
   temp->next = NULL;
   if(front== NULL)
   front = rear = temp;
   else
   {
       rear->next = temp;
       rear = temp;

   }printf("\n Pushed successfully");
   
}

void Pop()
{
 struct queue *temp;
 int val;
 if(front == NULL)
 { 
   printf("\nUnderflow");
 }
 else
 {
     temp = front;
     val = temp->info;
     front = front->next;
     free(temp);
     printf("\n%d Poped out Successfull!!", val);
 }//display(front);
   
}

void display()
{
    struct queue * ptr;
    ptr = front;
    printf("\n Queue is ..");
    while(ptr != NULL)
    {
        printf(" %d ", ptr->info);
        ptr = ptr->next;
    }
}

int main(int argc, char const *argv[])
{ 
    int item, x,c;
    char ch = 'y';
    printf("\nQueue implementation(dynamically) Operations:");
    printf("\n1.Push\n2.Pop\n3.Exit");
     while(ch == 'y' || ch =='Y')
    {
         printf("\n Your choice:");
         scanf("%d", &c);
         switch(c)
         {
             case 1 : printf("\nItem(non 0):");
                      scanf("%d", &item);
                      Push( item);
                      break;
             case 2 : Pop();
                      break;
             case 3 : exit(0);
             case 4 : display();
             default: break;         
         }
         printf("\n Once More..");
         scanf("%s", &ch);
    }
    free(front);
    free(rear);
    return 0;
}

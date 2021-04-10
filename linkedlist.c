# include<stdio.h>
# include<stdlib.h>

struct node
{
    int info;
    struct node * next;
};

void display(struct node * head)
{
    struct node * ptr;
    ptr = head;
    printf("\n List is ..");
    while(ptr != NULL)
    {
        printf("%d ", ptr->info);
        ptr = ptr->next;
    }
    free(ptr);
   
}

void insbeg(struct node * head, int item)
{     struct node* ptr = (struct node*)malloc(sizeof(struct node));
      ptr->info = item;
      if(head==NULL)
        head->next = ptr;
       else
       {
           ptr->next = head;
           head = ptr;
       }
       display(head);
       free(ptr); 

}

void delbeg(struct node *head)
{
  struct node * ptr;
  if(head==NULL)
   printf("\n List is empty");
  else
  {
      ptr = head;
      head= head->next;
  }
  display(head);
   
}

void search(struct node * head, int item)
{  int count=0;
int flag =0;
   struct node * ptr;
   ptr = head;
   while(ptr->next != NULL)
   {   count+=1;
       if(ptr->info==item)
        {   flag = 1;
            printf("Found at %d", count);
        }
   ptr= ptr->next;
   }
      if(ptr->info==item)
        {   flag = 1;
            printf("Found at %d", count+1);
        }   
   if(flag!= 1)
    printf("\n Element not found");
}

void insend(struct node * head, int item)
{  struct node* temp = (struct node*)malloc(sizeof(struct node));
   temp->info = item;
   temp->next = NULL;
   struct node *ptr;
   ptr = head;
   while(ptr->next != NULL)
   {
       ptr = ptr->next;
   }
   ptr->next = temp;
   display(head);
}

void delend(struct node * head)
{
    struct node * ptr;
    struct node * temp;
    ptr = head;
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    temp = ptr;
    ptr->next = NULL;
    display(head);
}

struct node *rev(struct node *head)
{
   struct node * current, *next, *prev;
   current = head;
   prev = NULL;
   while(current != NULL)
   {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
   }
   head = prev;
   return head;
}

int main(int argc, char const *argv[])
{   struct node * f = (struct node *)malloc(sizeof(struct node));
    struct node * fir = (struct node *)malloc(sizeof(struct node));
    struct node * s = (struct node *)malloc(sizeof(struct node));
    struct node * t = (struct node *)malloc(sizeof(struct node));
    struct node *n;
    struct node *head;
    f->info = 50;
    f->next = fir;
    fir->info = 35;
    fir->next= s;
     s->info = 76;
    s->next = t;
    t->info = 12;
    t->next = NULL;
    head = f;
    int item, c;
    char ch = 'y';
    char value;
    display(head);
    printf("\n Operations on a singly linked list..");
    printf("\n operation list:\n1.Insertion at begining\n2.deletion at begining\n3.searching\n4.Insertion at end\n5.Deletion at end\n6.Reverse");
    while((ch =='y')||(ch =='Y'))
    {   printf("\n Once more..y/n:");
        scanf("%s", &ch);
        //ch = value;
        printf("\n Your choice:");
        scanf("%d",&c);
        switch(c)
        {
           case 1 : printf("\n item:");
                    scanf("%d", &item);
                    insbeg(head,item);
                    break;
           case 2 : delbeg(head);
                    break;
           case 3 : printf("Element to be searched:");
                    scanf("%d", &item);
                    search(head,item);
                    break;
           case 4 : printf("\n item:");
                    scanf("%d", &item);
                    insend(head,item);
                    break;
           case 5 : delend(head);
                    break;
           case 6:  n = rev(head);
                    display(n);    
           default : break;
        }
        

    }
     
      getc;
      free(f);
      free(fir);
      free(s);
      free(t);
      free(head);
      free(n);
      
      return 0;
}

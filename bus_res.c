/*non file based system for bus reservation system
  to use this system first choose 1,2,3 as your wish then 
  1 for reserving a ticket 
  2 for canceling a ticket before cancelation check (using 3)
  3 for checking your ticket number in the the booking list
  once more(y/n) for multiple entries

*/
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
int full=0;
struct user
{
    char n[10];
    int seat;
};
struct user s[100];

void reserve()
{
   char name[10];
   if(full<100)
   {
      printf("\nEnter Your name:");
      scanf("%s",&name);
      strcpy(s[full].n , name);
      printf("\nCongratulations %s Your seat is reserved", &name);
      printf("\nYour seat no is (it may change check at last) : %d", full+1);
      s[full].seat = full+1;
      full += 1;
   }
   else
   {
       printf("\n Reservation closed !!");
   }
   
}

void cancel()
{
  int num;  
  int flag = 0;
  printf("\nTicket Cancel Window");
  printf("\nYour seat:");
  scanf("%d", &num);
  if(num<full)
  {
    strcpy(s[num-1].n,s[full-1].n);
    full-=1;
  }
  else
  {
      printf("\n Your seat is already not reserved");
  }


}

void checksn()
{
    for(int i=0; i<full; i++)
    {
        printf("\n%s seat no %d",s[i].n,s[i].seat);
    }
}

int main(int argc, char const *argv[])
{
    printf("\n**************** BUS RESERVATION SYSTEM ******************");
    printf("\n            We Welcome you to our sewrvice                ");
    printf("\n**********************************************************");
    printf("\nService Provided\n1.Reserve Ticket\n2.Cancel Ticket\n3.Check seat no.");
    int c; char ch = 'y';
    while(ch=='y'||ch=='Y')
    {
        printf("\nTotal seats : 100");
        printf("\nSeat Full : %d", full);
        printf("\nHurry up only %d Seats left", 100-full);
        printf("\nEnter your choice:");
        scanf("%d",&c);
        switch(c)
        {
        case 1 : reserve();
                 break;
        case 2 : cancel();
                 break;
        case 3 : checksn();
                 break;
        default : break; 
        }
        printf("\n Once more (y/n):");
        scanf("%s", &ch);
    }
    printf("\n**********************************************************");
    printf("\n                   THANK YOU !!!                          ");
    printf("\n**********************************************************");
    return 0;
}

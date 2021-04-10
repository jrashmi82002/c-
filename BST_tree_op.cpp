# include <iostream>
# include <stdlib.h>
using namespace std;

struct node
{
  int val;
  node * left;
  node *right;
  node(int val)
  {
      this->val = val;
      this->left = NULL;
      this->right = NULL;
  }
};



node *insert(node *root, int data)
{
   if(root == NULL)
   {
     return new node(data);
   } 
   if(data < root->val)
    root->left = insert(root->left, data);
   else
    root->right = insert(root->right, data);
   return root; 
}

void dele(node *root)
{

}

int search(node *root, int data)
{
  node * cur = root;
  cout<<"root";
  while(cur->val != data)
  {
      if(cur != NULL)
      {  
          if(cur->val > data){   
            cur = cur->left;
            cout<<"->left";}
          else{
             cur = cur->right; 
             cout<<"->right";}  
      }
      if(cur == NULL)
       return 0;
  }
  return 1;
}

void display(node *root)
{
    if(root != NULL)
    {
        display(root->left);
        cout<<root->val<<" ";
        display(root->right);
    }
}

int main(int argc, char const *argv[])
{
    int c, temp, data;
    char ch ='y'; node *i;
    node *root = new node(4);
    root->left = new node(2);
    root->right = new node(6);
    root->right->right = new node(8);
    root->right->left = new node(5);
    root->left->left = new node(1);
    root->left->right = new node(3);
    cout<<"Operation menu for trees:\n1.Insert\n2.Delete\n3.Search\n4.display\n";
    while(ch == 'y' || ch == 'Y')
   {
    cout<<"Your choice:";
    cin>>c;
    switch(c)
    {
        case 1 : cout<<"Item:"; cin>>data;
                 root = insert(root,data);
                 cout<<"\nInsertion Done!!";
                 break;
        case 2 : dele(root);
                 break;
        case 3 : cout<<"Item:"; cin>>data;
                 cout<<"\nVisiting... ";
                 temp = search(root, data);
                 if(temp == 1) cout<<"\nFound!!"; else cout<<"\nCouldn't Find!!";
                 break;  
        case 4 : display(root);
                 break;
        default : break;
    }
    cout<<"\nTry once more (y/n):"; cin>>ch;
   } 
    return 0;
}

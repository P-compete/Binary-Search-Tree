#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
node *left,*right;};

node *root=NULL;

void insert(int item)
{
     node *p,*q,*temp;
     temp=new node();
     temp->data=item;
     temp->left=NULL;
     temp->right=NULL;
     
     if(root==NULL)
       {    root=temp;
		    root->left=NULL;
		    root->left=NULL;
	   }
	   
     else
       {
		  p=root;
		  q=p;
		  while(p!=NULL)
		   {
			   q=p;
			   if(item<p->data)
			    {
				   p=p->left;
				}
			   else
			    {
					p=p->right;
				}
			   
		   }
		  if(item<q->data)
		   {
			   q->left=temp;
		   } 
		  else
		   {
			   q->right=temp;
		   } 
	  }
     
}

int main()
{

    int n;
     cin>>n;
     
     for(int i=0;i<n;i++)
      {
         int a;
          cin>>a;
          insert(a);
      }
     
  return 0;    
  
}

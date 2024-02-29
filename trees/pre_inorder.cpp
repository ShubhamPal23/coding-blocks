#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* left;
    node* right;

    node(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
int pre_order[]={8,10,1,6,4,7,3,14,13};
int in_order[]={1,10,4,6,7,8,3,13,14};
int i=0;
int n=sizeof(pre_order)/sizeof(int);
node* buildtree(int s , int e )
{
    if(s>e)
    {
        return NULL;
    }
    node* root = new node(pre_order[i++]);
    int k=-1;
    for(int j=s;j<=e;j++)
    {
        if(in_order[j]==root->data)
        {
            k=j;
            break;
        }
    }
    root->left=buildtree(s,k-1);
    root->right=buildtree(k+1,e);

    return root;
}
int main()
{
    node*root =NULL;
    buildtree(0,n-1);
}

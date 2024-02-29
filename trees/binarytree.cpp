#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* left;
    node* right;

    node(int d): data(d), left(NULL), right(NULL){}
};

node* create_tree()
{
    node* root=NULL;
    int data;
    cin>>data;

    if(data==-1)
    {
        return root;
    }

    else
    {
        root=new node(data);
        root->left = create_tree();
        root->right = create_tree();
    }
    return root;

}
void levelorder(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        auto x =q.front();
        q.pop();
        if(x!=NULL)
        {
            cout<<x->data<<" ";
            if(x->left!=NULL)
            {
                q.push(x->left);
            }
            if(x->right!=NULL)
            {
                q.push(x->right);
            }
        }
        else
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
    }

}
int main()
{
    node* root=NULL;
    root=create_tree();
    levelorder(root); //8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
    
    return 0;
}

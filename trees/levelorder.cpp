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
node* buildtree(string s)
{
    if(s=="true")
    {
        int d;
        cin>>d;
        node* root=new node(d);
    
        string l;
        cin>>l;
        if(l=="true")
        {
            root->left=buildtree(l);
        }
        string r;
        cin>>r;
        if(r=="true")
        {
            root->right=buildtree(r);
        }
        return root;
    }
    return NULL;
}
void levelorder(node* root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        auto x= q.front();
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
    node* root=buildtree("true");
    levelorder(root);
    return 0;
}

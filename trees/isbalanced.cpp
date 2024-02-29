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
        node* root= new node(d);

        string l;
        if(l=="true")
        {
            root->left=buildtree(l);
        }
        string r;
        if(r=="true")
        {
            root->right=buildtree(r);
        }
        return root;
    }
    return NULL;
}
int height(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int left_height= height(root->left);
    int right_height= height(root->right);

    return max(left_height,right_height)+1;
}
bool isbalanced(node* root)
{
    if(!root)
    {
        return true;
    }
    int left_height= height(root->left);
    int right_height= height(root->right);

    int cur_diff= abs(left_height-right_height);
    
    if(cur_diff<=1 && isbalanced(root->left) && isbalanced(root->right))
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int main()
{
    node* root= buildtree("true");
    if(isbalanced(root))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    
}
#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* left;
    node* right;
    node(int d): data(d) , left(NULL), right(NULL){}
};

void pre_order(node* root)
{
    if(root==NULL)
    {
        return ;
    }

    cout<<root->data<<" ";
    pre_order(root->left);
    pre_order(root->right);
}
void in_order(node* root)
{
    if (root==NULL)
    {
        return;
    }
    in_order(root->left);
    cout<<root->data<<" ";
    in_order(root->right);

}

void post_order(node* root)
{
    if(root==NULL)
    {
        return;
    }
    post_order(root->left);
    post_order(root->right);
    cout<<root->data<<" ";
}

int main()
{
    return 0;
}
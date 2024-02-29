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
node* InsertInBST(node* root,int d)
{
    if(root==NULL)
    {
        root=new node(d);
        return root;
    }
    if(d<=root->data)
    {
        root->left=InsertInBST(root->left , d);
    }
    else
    {
        root->right=InsertInBST(root->right , d);
    }
    return root;
}
node* createBST()
{
    node*root =NULL;
    int data;
    cin>>data;

    while(data!=-1)
    {
        root=InsertInBST(root,data);
        cin>>data;
    }
    return root;

}
node* SearchInBST(node*root ,int key)
{
    if(root->data==key)
    {
        return root;
    }
    else if(key<root->data)
    {
        return SearchInBST(root->left , key);
    }
    else
    {
        return SearchInBST(root->right, key);
    }
}
int main()
{
    node* root =NULL;
    root=createBST();
    node* ans=SearchInBST(root,14);
    if(ans)
    {
        cout<<ans->data<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }
}
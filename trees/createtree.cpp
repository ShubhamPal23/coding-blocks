#include<iostream>
#include<vector>
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
int idx=0;
node* createtree(vector<int> &pre_order,vector<int>&in_order,int s , int e)
{
    if(s>e)
    {
        return NULL;
    }
    int root_data=pre_order[idx];
    node* root=new node(root_data);
    int found=-1;
    for(int i=s;s<=e;i++)
    {
        if(root_data==in_order[i])
        {
            found=i;
            break;
        }
    }
    idx++;
    root->left=createtree(pre_order,in_order,s,found-1);
    root->right=createtree(pre_order,in_order,found+1,e);  
    return root;
}
void output(node* root)
{
    if(root==NULL)
    {
        return ;
    }
    if(root->left)
    {
        cout<<root->left->data;
    }
    else
    {
        cout<<"END";
    }
    cout<<" => "<<root->data<<" <= ";
    if(root->right)
    {
        cout<<root->right->data<<endl;
    }
    else
    {
        cout<<"END"<<endl;
    }
    output(root->left);
    output(root->right);
}
int main()
{
    int n;
    cin>>n;
    vector<int> pre_order(n);
    for(int i =0;i<n;i++)
    {
        cin>>pre_order[i];
    }
    int m;
    cin>>m;
    vector<int>in_order(m);
    for(int i=0;i<m;i++)
    {
        cin>>in_order[i];
    }
    node*root=createtree(pre_order,in_order,0,n-1);
    output(root);

    return 0;
}
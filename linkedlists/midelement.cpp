#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;

    node(int d)
    {
        d=data;
        next=NULL;
    }
};
node* insertionatend(node* head, int d)
{
    if(head==NULL)
    {
        head = new node(d);
        return head;
    }
    head->next = insertionatend(head->next,d);
    return head;
}
node* mid(node* head)
{
    if(head==NULL  || head->next==NULL)
    {
        return head;
    }
    node* s =head;
    node* f = head->next;
    while(head!=NULL && head->next!=NULL)
    {
        f=f->next->next;
        s=s->next;        
    }
    return s;
}
int main()
{
    int n;
    cin>>n;
    int d;
    node* head=NULL;
    for(int i=0;i<n;i++)
    {
        cin>>d;
        head=insertionatend(head,d);
        
    }

    node* middle=mid(head);
    if(middle!=NULL)
    {
        cout<<middle->data;
    }
    return 0;
}
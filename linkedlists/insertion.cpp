#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;

    node(int d)
    {
        data= d;
        next = NULL;
    }
};
void Insertatfront(node* &head, node* &tail, int d)
{
    node* n= new node(d);
    if(head==NULL)
    {
        head=tail=n;
    }
    else
    {
        n->next=head;
        head=n;
    }
}
void deleteatfront(node* &head, node* &tail)
{
    if(head==NULL)
    {
        return;
    }
    else if(head->next==NULL)
    {
        delete head;
        head=tail=NULL;
    }
    else
    {
        node* t=head;
        head=head->next;
        delete t;
    }
}
void Insertatmid(node* &head, node* &tail ,int pos, int d)
{
    if(pos==0)
    {
        Insertatfront(head,tail,d);
    }
    else
    {
        int i =1;
        node*t = head;
        while(i<pos)
        {
            t=t->next;
            i++;
        }
        node*n = new node(d);
        n->next=t->next;
        t->next=n;
    }
}
void deleteatmid(node* &head,node* &tail,int pos)
{
    if(pos==0)
    {
        deleteatfront(head,tail);
    }
    else
    {
        node*t = head;
        for(int i=1; i<pos;i++)
        {
            t=t->next;
        }
        node* n= t->next;
        t->next=n->next;
        delete n;
    }
}
void insertatend(node* &head, node* &tail , int d)
{
    node*n = new node(d);
    if(head==NULL)
    {
        head=tail=n;
    }
    else
    {
        tail->next=n;
        tail=n;
    }

}
void deleteatend(node* &head, node* &tail)
{
    if(head==NULL)
    {
        return ;
    }
    else if(head->next==NULL)
    {
        delete head;
        head=tail=NULL;
    }
    else
    {
        node *t = head;
        while(t->next!=tail)
        {
            t=t->next;
        }
        delete tail;
        tail=t;
        tail->next=NULL;
    }
}

void print(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"-->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    node* head, *tail;
    head=tail=NULL;

    // Insertatfront(head,tail,1);
    // Insertatfront(head,tail,2);
    // Insertatfront(head,tail,3);
   insertatend(head,tail,1);
   insertatend(head,tail,2);
   insertatend(head,tail,3);
   //deleteatend(head,tail);
   deleteatmid(head, tail , 1);

    //print(head);

    //Insertatmid(head,tail,2,5);
    print(head);
    

    return 0;
}
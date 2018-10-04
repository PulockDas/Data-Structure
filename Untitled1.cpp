#include<bits/stdc++.h>
using namespace std;
struct node
{

    int data;
    struct node *next;
    node(int datap)
    {
        data=datap;
        next= NULL;
    }
};
int main()
{
    struct node* head=NULL;
    struct node* second=NULL;
    struct node* third=NULL;

    head=new node(5);
    second=new node(9);
    third=new node (10);
    head->next=second;
    second->next=third;
    third->next=NULL;
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    return 0;
}

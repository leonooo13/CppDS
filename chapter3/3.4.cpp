#include<iostream>
using namespace std;
typedef struct LinkNode
{
    int val;
    struct LinkNode *next;
} LinkNode;
LinkNode * merge(LinkNode* l1,LinkNode* l2){
    LinkNode* head=(LinkNode*)malloc(sizeof(LinkNode));
    LinkNode* p=head;//尾节点
    if(l1&&l2){
        if(l1->val<l2->val){
            p->next=l1;
            l1=l1->next;
            p=p->next;          
        }
        else{
            p->next=l2;
            p=p->next;
            l2=l2->next;
        }
    }
    if(l1==NULL){
        p->next=l2;
    }
    if(l2==NULL) p->next=l1;
    return head->next;
}

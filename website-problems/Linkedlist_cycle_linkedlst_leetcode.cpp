#include <stdio.h>
#include<iostream>
#include<stdlib.h>
#include <string.h>
#include <vector>
#include <stdlib.h>
#include<map>
#include <set>
#include <unordered_map>
#include<algorithm>

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {

    if(head==NULL || head->next==NULL)
    return false;
    
    struct ListNode *p,*q;
    p=q=head;

    do
    {
        p=p->next;
        q=q->next;
        q= q!=NULL ? q->next:NULL;
    }
    while(p&&q && p!=q);

    if(p==q)
    return true;
    else
    return false;
}
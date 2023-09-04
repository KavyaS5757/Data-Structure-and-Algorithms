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
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        flattenGetTail(head);
        return head;
    }

    Node* flattenGetTail(Node* head){
        Node* current=head;
        Node* tail=nullptr;

        while(current)
        {
            Node* next=current->next;
            if(current->child)
            {
                Node* child=current->child;
                Node* childTail=flattenGetTail(current->child);

                current->child=nullptr;
                current->next=child;
                child->prev=current;
                childTail->next=next;

                if(next)
                next->prev=childTail;

                tail=childTail;
            }

            else
            {
                tail=current;
            }
            current=next;

        }
        return tail;
    }
};
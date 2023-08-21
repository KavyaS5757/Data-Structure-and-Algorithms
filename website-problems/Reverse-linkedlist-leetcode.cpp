/**
 * question:- https://leetcode.com/problems/reverse-linked-list/description/
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

//--c code
struct Node {
    int data;
    struct Node* next;
};


struct Node* reverseList(struct Node* head) {
    int count=0;

    struct Node* q = head;
    while(q!=NULL)
    {
        count++;
        q=q->next;
    }

    int *A;
    A = (int *)malloc(count*sizeof(int));

    int i = 0;
    q=head;

    while (q != NULL) {
        A[i] = q->data;
        q = q->next;
        i++;
    }
    q = head;
    i--;

    while (q != NULL) {
        q->data = A[i];
        q = q->next;
        i--;
    }

    free(A); // Free the allocated memory

    return head; // Return the reversed list
}

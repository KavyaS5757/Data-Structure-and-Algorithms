/*
   Problem Statment:
   https://leetcode.com/problems/design-linked-list/description/
*/
class MyLinkedList {
    struct Node
    {
        int val;
        Node *next;
        Node(int x): val(x),next(nullptr) {}
    };

    Node * head;
    int size;
public:
    MyLinkedList() {
        head=nullptr;
        size=0;
    }
    
    int get(int index) {
        int res=-1;

        if(index>size || index<0)
        return res;

        Node *current=head;
        while(current && index>0)
        {
            index--;
            current=current->next;
        }

        if(index==0 && current!=nullptr)
        {
            res=current->val;
        }
        return res;
    }
    
    void addAtHead(int val) {
        Node*current=new Node(val);
        current->next=head;
        head=current;
        size++;
    }
    
    void addAtTail(int val) {
        size++;
        Node * Tail=new Node(val);
        if(head==nullptr)
        {
            head=Tail;
            return;
        }
        Node * current=head;
        while(current && current->next)
        {
            current=current->next;
        }
        current->next=Tail;
    }
    
    void addAtIndex(int index, int val) {
        if(index>size)
        return;

        if(index==0)
        {
            size++;
            addAtHead(val);
            return;
        }

        if(index==size)
        {
            size++;
            addAtTail(val);
            return;
        }

        Node *current=head;
        while(current && index>0)
        {
            index--;

            if(index==0)
            {
                Node* newnode=new Node(val);
                newnode->next=current->next;
                current->next=newnode;
                size++;
                break;
            }
            current=current->next;
        }
    }
    
    void deleteAtIndex(int index) {
        if(index==0)
        {
            Node *t=head;
            head=head->next;
            size--;
            delete(t);
            return;
        }

        Node *curr=head,*pre=nullptr;
        while(curr && index>0)
        {
            pre=curr;
            curr=curr->next;
            index--;
        }
        
        if(index==0 && curr!=nullptr)
        {
            Node * t=curr;
            pre->next=curr->next;
            size--;
            delete(t);
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
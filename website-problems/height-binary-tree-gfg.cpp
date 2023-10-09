/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        if(node==NULL)
        return 0;
        
        int left_count = height(node->left);
        int right_count =height(node->right);
        return max(left_count,right_count)+1;
        
        // code here 
    }
};

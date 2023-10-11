class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height(struct Node * node)
    {
        if(node == NULL)
        return 0;
        
        int left_count = height(node->left);
        int right_count = height(node->right);
        
        return 1 + max(left_count, right_count);
    }
    
    bool isBalanced(Node *root)
    {
        if(root==NULL)
        return true;
        
        int l= height(root->left);
        int r= height(root->right);
        
        if(abs(l-r)<=1 && isBalanced(root->left) && isBalanced(root->right))
        return true;
        else
        return false;
        
    }
};

/*
 https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1
*/

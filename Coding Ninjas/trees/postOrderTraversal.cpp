void printPostOrder(TreeNode<int>* root) {
    // Write your code here
    //corner case
    if(root == NULL) {
        return;
    }
    
    for(int i = 0; i < root -> children.size() ; i++) {
        printPostOrder(root -> children[i]);
    }
    
    cout << root -> data << " "; 
}
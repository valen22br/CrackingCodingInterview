/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/
   int printPostOrder(Node* root)
   {
       if(root == NULL)
          return -99;
       printPostOrder(root->left);
       printPostOrder(root->right);
       cout << "Values: " << root->data << endl;
       return root->data;
       
       
   }



   bool isBST(Node* root, Node* left = NULL, Node*right = NULL)
   {
       
       // Base condition
    if (root == NULL)
        return true;
 
    // if left node exist that check it has
    // correct data or not
    if (left != NULL and root->data <= left->data)
        return false;
 
    // if right node exist that check it has
    // correct data or not
    if (right != NULL and root->data >= right->data)
        return false;
 
    // check recursively for every node.
    return isBST(root->left, left, root) and
           isBST(root->right, root, right);
   }


   bool checkBST(Node* root) {
       bool isBSTree = true;
       Node* x = new Node();
       x = root;
       
       //cout << "PostOrder: "<< endl;
       //printPostOrder(x);
       
       //cout << "InOrder: "<< endl;
       isBSTree = isBST(x);
       //checkRight(x);
       

       return isBSTree;
   }

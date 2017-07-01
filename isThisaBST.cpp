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
          return 0;
       printPostOrder(root->left);
       printPostOrder(root->right);
       cout << "Values: " << root->data << endl;
       return root->data;
       
       
   }

   int printInorder(Node* root)
   {
      if(root == NULL)
          return 0;
       printInorder(root->left);
       cout << "Values: " << root->data << endl;
       printInorder(root->right);
       
       return root->data;

       
   }


   bool checkBST(Node* root) {
       bool isBST = true;
       Node* x = new Node();
       x = root;
       
       cout << "PostOrder: "<< endl;
       printPostOrder(x);
       
       cout << "InOrder: "<< endl;
       printInorder(x);
       //checkRight(x);
       
       int i = 0;
       while (i <= 10000)
       {
           if(x->data )
           i++;
       }
       return isBST;
   }

/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/
   void checkLeft(Node* root)
   {
       cout << "teste " <<  endl;
       if(root == NULL)
           return;
       cout << "teste END " << endl;
       checkLeft(root->left);
       
   }

   void checkRight(Node* root)
   {
       cout << "teste Right  " << root->data << endl;
       cout << root << endl;
       if(root == NULL)
           return;
       cout << "teste Right END " << endl;
       checkLeft(root->right);
       
   }


   bool checkBST(Node* root) {
       bool isBST = true;
       Node* x = new Node();
       x = root;
       
       checkLeft(x);
       checkRight(x);
       
       int i = 0;
       while (i <= 10000)
       {
           if(x->data )
           i++;
       }
       return isBST;
   }

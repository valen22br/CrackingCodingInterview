/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    bool isCycle = true;
    int i = 0;
    Node* x = new Node();
    x = head;
    while(i <= 100 )
    {
        if(x == NULL)
        {
            isCycle = false;
            return isCycle;
        }   
        x = x->next;
        i++;
    }
    return isCycle;
}

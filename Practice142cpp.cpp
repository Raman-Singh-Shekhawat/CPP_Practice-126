// 143. Delete Alternate Nodes: Given a Singly Linked List of integers, delete all the alternate nodes in the list.

/*********************************************************

    // Following is the node structure

    class Node {
    public:
        int data;
        Node * next;
        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }

        ~Node() {
            if(next) {
                delete next;
            }
        }
    };

*********************************************************/

void deleteAlternateNodes(Node *head)
{
    while (head != NULL && head->next != NULL)
    {
        Node *temp = head->next;
        head->next = head->next->next;
        temp->next = NULL; // we have to put null in deleting nodes next otherwise it will delete next node connected to it.. see destructor
        head = head->next;
        delete temp;
    }
}
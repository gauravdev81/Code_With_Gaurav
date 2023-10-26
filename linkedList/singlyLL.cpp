#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    // constructor

    node(int val)
    {
        data = val;
        next = NULL;
    }

    //destructor

    ~node() {
        int value=data;
        if(next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"memory freed for node with data "<<value<<endl;


    }
};

void insertAtTail(node *&head, int val)
{
    node *n = new node(val); // new node created

    node *temp = head;

    if (temp == NULL) // agar head NULL hai
    {
        head = n;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
    }
}

void insertAtHead(node *&head, int val)
{
    node *n = new node(val); // node is created

    node *temp = head; // 5->10->20->null

    if (temp == NULL)
    {
        head = n;
    }
    else
    {
        temp = n;
        temp->next = head;
        head = temp;
    }
}
int lengthOfLL(node *head)
{
    node *temp = head;
    int len = 0;

    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtPosition(node *head, int val, int pos)
{
    int len = lengthOfLL(head);
    if (pos < 2 || pos > (len))
    {
        cout << "Enter valid position (between 2 and " << len << " (both inclusive))." << endl;

        cout << "New node NOT inserted.TRY again with correct position :)" << endl;
        cout << "Current Linked List :" << endl;
        return;
    }
    node *n = new node(val);

    node *curr = head;
    node *prev = NULL;
    int position = pos - 1;

    while (position-- && curr != NULL)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = n;
    n->next = curr;
    cout << "New node successfully inserted at position " << pos << "." << endl;
    cout << "Linked List after insertion at " << pos << " position :" << endl;
}

void deletion(node *&head, int val)
{
    if (head == NULL)
        return;

    else
    {
        node *temp = head;

        while (temp->data != val)
        {
            temp = temp->next;
        }

        //first node to be deleted
        if (temp == head)
        {
            head = temp->next;
            free(temp);
            return;
        }

        //either middle or last node has to be deleted
        node *prev = head;
        while (prev->next != temp)
        {
            prev = prev->next;
        }

        node *temp2 = temp->next;

        prev->next = temp2;

        delete(prev);

        delete(temp2);
    }
}
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->"
             << " ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    // first node created

    node *head = NULL;
    insertAtTail(head, 10);
    
    print(head);
    insertAtHead(head, 5);
    print(head);
    deletion(head, 10);
    print(head);
    deletion(head, 40);

    print(head);
    deletion(head, 5);
    print(head);

    insertAtTail(head, 100);
    print(head);

    insertAtHead(head, 10);
    print(head);

    
    print(head);

    deletion(head, 100);
    print(head);

    cout<<"length= "<<lengthOfLL(head);

    return 0;
}
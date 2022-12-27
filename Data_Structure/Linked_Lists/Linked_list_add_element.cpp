/*#######################################
#             MD Shekh Sadi            #
#        sadiewu12345@gmail.com        #
#######################################*/

/*

Add element at the front of the linked list
Add element(node) after a specific node of the linked list
Add elment at the end of the linked list

*/

#include<iostream>

using namespace std;

//Example of a linked list with 3 elements

class Node
{
    public:
        int value;  //Value of the element
        Node* Next; //address of the element
};

//For print the linked list:
void printLinkedList(Node* n)
{
    while (n != NULL)   //It will continue till the address is NULL.
    {
        cout<<n->value<<endl;
        n=n->Next;      //Assigning next address to print next element.
    }
    
}

//Add element at the front of the linked list
void insertAtTheFront(Node**head, int newValue)
{
    /*
    Steps:
    1. Add element at the front of the linked list
    2. Put it in front of the current head
    3. Move head of the list to point to the newNode
    */

    //Add element at the front of the linked list
    Node* newNode = new Node();
    newNode->value = newValue;  //Assign the value of the node

    //Put it in front of the current head
    newNode->Next = *head;

    //Move head of the list to point to the newNode
    *head = newNode;

}

//Add element at the end of the linked list
void insertAtTheEnd(Node**head, int newValue)
{
    /*
    Steps:
    1. Prepare a newNode
    2. If linked list is empty, newNode will be a head mode
    3. Find the last node
    4. Insert newNode after last node (at the end)
    */

    //Prepare a newNode
    Node* newNode = new Node();
    newNode->value = newValue;
    newNode->Next = NULL;

    //If linked list is empty, newNode will be a head mode
    if(*head == NULL)
    {
        *head = newNode;
        return;
    }

    //Find the last node
    Node* last = *head;
    while (last->Next != NULL)
    {
        last = last->Next;
    }

    //Insert newNode after last node (at the end)
    last->Next = newNode;
}

//Add element(node) after a specific node of the linked list
void insertAfter(Node* previous, int newValue)
{
    /*
    Steps:
    1. Check if previous node is NULL
    2. Prepare a newNode
    3. Insert newNode after previous
    */

    //Check if previous node is NULL
    if(previous == NULL)
    {
        cout<<"Previous can not be NULL";   //It is not a valid node. So, just return. 
        return;
    }

    //Prepare a newNode
    Node* newNode = new Node();
    newNode->value = newValue;

    //Insert newNode after previous
    newNode->Next = previous->Next;
    previous->Next = newNode;
}

int main()
{

    //Create 3 elements/nodes/pointers
    Node* head = new Node();    //it is better to call it head. It is known by the programmers.
                                //I used new to allocate the memory for the linked list.
    Node* second = new Node();
    Node* third = new Node();

    //Assign value to the elements and link all the elements:
    head->value = 1;
    head->Next = second;    //This is the address of the second element.
    second->value = 2;
    second->Next = third;   //This is the address of the third element.
    third->value = 3;
    third->Next = NULL; //There is no element after it. So, it doesn't contain any address.
   
    insertAtTheFront(&head, -1);
    insertAtTheFront(&head, -2);
    insertAtTheEnd(&head, 20);
    insertAtTheEnd(&head, 25);
    insertAfter(head, -9);
    insertAfter(second, -5);


    //User the function to print the linked list
    printLinkedList(head);


    return 0;
}
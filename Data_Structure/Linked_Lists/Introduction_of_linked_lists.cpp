/*#######################################
#             MD Shekh Sadi            #
#        sadiewu12345@gmail.com        #
#######################################*/

/*
    Linked list is a non continuous collection
    Linked list consists 2 thing:
        1. Value
        2. Address of the next element
    Address of last element store be NULL
    1st element of a linked list is called "head"

    Advantage of linked list:
    Array is fixed size but linked list is dinamic size. So, I can add new element or remove existing element.

    Disadvantage of inked list:
    Random access to the element of a linkd list is not allowed. 
        Because you need the address of the element and the address is stored to the previous element. 
        So, always need to start from the 1st (head) element.
    Linked list needs more memory. 
        Because linked list needs to store 2 things. 1. Value of the element and 2. Pointer of the next element. 
        So, it needs more storage.

    Linked list data tipe is always user defined
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

int main()
{
    
    //Create 3 elements:
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
   
    //User the function to print the linked list
    printLinkedList(head);



    return 0;
}
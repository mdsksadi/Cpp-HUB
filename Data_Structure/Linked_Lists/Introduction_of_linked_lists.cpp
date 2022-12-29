/*#######################################
#             MD Shekh Sadi            #
#        sadiewu12345@gmail.com        #
#######################################*/

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
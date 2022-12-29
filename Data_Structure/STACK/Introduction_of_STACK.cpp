/*#######################################
#             MD Shekh Sadi            #
#        sadiewu12345@gmail.com        #
#######################################*/

#include<iostream>
#include<stack>

using namespace std;

//Function for write out the element of the STACK
void printStackElement(stack<int> stack)
{
    while (!stack.empty())
    {
        cout<<stack.top()<<endl;
        stack.pop();
    }
    
}


int main()
{   
    //Create STACK to my program
    stack<int>numbersStack;

    //Add element to the STACK
    numbersStack.push(5);
    numbersStack.push(3);
    numbersStack.push(2);
    numbersStack.push(7);

    //Remove element from the STACK
    numbersStack.pop();

    //Check if the STACK is empty or not
    if (numbersStack.empty())
        cout<<"Stack is empty"<<endl;
    else
        cout<<"Stack is not empty"<<endl;

    //Size of the STACK
    cout<<"Stack size is: "<<numbersStack.size()<<endl;

    //Write out the element of the STACK
    cout<<"The Stack is:"<<endl;
    printStackElement(numbersStack);


    return 0;
}
/*#######################################
#             MD Shekh Sadi            #
#        sadiewu12345@gmail.com        #
#######################################*/

#include<iostream>
#include<queue>

using namespace std;

//Function for write out the element of the Queue
void printQueueElement(queue<int>queue)
{
    while (!queue.empty())
    {
        cout<<queue.front()<<" ";
        queue.pop();
    }
    cout<<endl;
    
}

int main()
{
    //Create Queue to my program
    queue<int>myQueue;

    //Add element to the Queue
    myQueue.push(5);
    myQueue.push(8);
    myQueue.push(1);
    myQueue.push(87);

    //Remove element from the Queue
    myQueue.pop();

    //Check if the Queue is empty or not
    if (myQueue.empty())
        cout<<"Queue is empty"<<endl;
    else
        cout<<"Queue is not empty"<<endl;
    
    //Size of the Queue
    cout<<"Queue size is: "<<myQueue.size()<<endl;

    //First element of the Queue
    cout<<"First element of the Queue is: "<<myQueue.front()<<endl;

    //Last element of the Queue
    cout<<"Last element of the Queue is: "<<myQueue.back()<<endl;

    //Write out the element of the Queue
    cout<<"The Queue is: ";
    printQueueElement(myQueue);

    return 0;
}
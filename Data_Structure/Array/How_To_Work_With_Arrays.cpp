/*#######################################
#             MD Shekh Sadi            #
#        sadiewu12345@gmail.com        #
#######################################*/

#include<iostream>

using namespace std;

int main()
{
    /*
    Advantage of Array:
    1. Very very fast
    Disadvantage of Array:
    1. Once I create the array, noramlly I can not add new element (We have exception)

    //We can diretly assign the value of the array:
    float monthsArray[12]={100,200,100,150,125,651,623,251,121,323,333,546};

    */

    //Creating the Array
    float monthsArray[12];
    //Creating an empty variable named total
    float total = 0;

    //Take input for the array from user
    for(int i = 0; i < 12; i++)
    {
        cout<<"Ener ammount for month "<<i+1<<": ";     //So, it will show month 1. But except +1 it would show month 0. What is not so clear for the user.
        cin>>monthsArray[i];

        //Total amount
        total += monthsArray[i];
    }

    //Consol out the Array
    cout<<"The savings are: "<<endl;
    for(int i = 0; i < 12; i++){
        
        cout<<monthsArray[i]<<endl;
    }

    cout<<endl;
    //Average monthly saving
    float average = total/12;
    //Saving for next 2 years
    float in_two_years = average*24;

    cout<<"Total: "<<total<<endl;
    cout<<"Average: "<<average<<endl;
    cout<<"In tow years: "<<in_two_years<<endl;

    return 0;
}
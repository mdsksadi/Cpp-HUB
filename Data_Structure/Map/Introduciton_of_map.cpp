/*#######################################
#             MD Shekh Sadi            #
#        sadiewu12345@gmail.com        #
#######################################*/

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    // Create Map to my program
    map<string, string> myDictionary;

    // Insert value to the map
    myDictionary.insert(pair<string, string>("apple", "der Apfel"));
    myDictionary.insert(pair<string, string>("banana", "die Banane"));
    myDictionary.insert(pair<string, string>("orange", "die Orange, die Apfelsine"));
    myDictionary.insert(pair<string, string>("strawberry", "die Erdbeere"));

    // Access specific element:
    cout << myDictionary["strawberry"] << endl;

    // Change the value of the map key
    myDictionary["strawberry"] = "Die Erdbeere";

    // Size of the map
    cout << "Size of the map is: " << myDictionary.size() << endl;

    cout<<endl<<endl;

    // Print the map
    for (auto pair : myDictionary)
        cout << pair.first << " - " << pair.second << endl;

    cout<<endl<<endl;

    //Delete or remove the element
    myDictionary.erase("apple");
    //Again print the map
    for (auto pair : myDictionary)
        cout << pair.first << " - " << pair.second << endl;

    //Clear the map
    cout<<endl<<"Clear the map"<<endl;
    myDictionary.clear();
    cout<< "Size of the map is: " <<myDictionary.size()<<endl;

    return 0;
}
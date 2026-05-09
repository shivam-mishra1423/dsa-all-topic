///accsessing the array


#include <iostream>
#include <string>

using namespace std;

// Function to demonstrate insert
char accessCharByIndex(string str, int k)
{

    // return the character at Kth index
    // in the string str
    return str[k];
}

// Driver code
int main()
{
    string str("Shivammishra");
    int k = 4;
    cout << accessCharByIndex(str, k) << endl;

    return 0;
}

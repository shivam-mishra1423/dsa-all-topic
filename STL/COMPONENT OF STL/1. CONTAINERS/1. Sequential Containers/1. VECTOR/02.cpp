// C++ program to illustrate the find()
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // creating vector
    vector<int> v
        = { 1, 8, 97, 3, 654, 132, 65, 4, 321, 5, 45 };

    // finding 5
    auto itr = find(v.begin(), v.end(), 5);
    if (itr != v.end()) {
        cout << *itr << " is found!" << endl;
    }
    else {
        cout << "5 is not found!" << endl;
    }

    return 0;
}

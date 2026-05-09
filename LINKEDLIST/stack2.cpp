#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>nums={1,2,3,4,5,6};


    vector<int>ans;


      // Outer loop sets the starting point of the subarray
    for (int i = 0; i < nums.size(); i++) {
        // Inner loop sets the ending point of the subarray
        for (int j = i; j < nums.size(); j++) {
            // Print the subarray from i to j
            for (int k = i; k <= j; k++) {
                cout << nums[k] << " ";
            }
            cout << endl;  // Move to the next line after printing each subarray
        }
    }






}

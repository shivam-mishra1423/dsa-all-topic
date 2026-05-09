#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string arr[] = {"shivam", "kumar", "mishra"}; // Input array of strings

    int cnt = 0;

    // Traverse each string in the array
    for (int i = 0; i < 3; i++) { // Size of `arr` is 3
        for (char c : arr[i]) {  // Traverse each character in the string
            if (c == 'i') {      // Check if character is 'i'
                cnt++;
            }
        }
    }

    cout << "Total count of 'i': " << cnt << endl;

    return 0;
}

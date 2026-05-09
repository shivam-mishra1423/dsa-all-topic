#include<iostream>
#include<string>  // For using string comparison
using namespace std;

void printA(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    string ch;
    int arr[10];
    int i = 0;

    while (i < 10) {
        cout << "Enter a number or type 'stop' to finish: ";
        cin >> ch;

        // Check if the user typed "stop"
        if (ch == "stop") {
            break;
        }

        // Convert the input string to an integer and store it in the array
        arr[i] = stoi(ch);  // Converts string input to integer
        i++;
    }

    // Call printA to print the array elements
    printA(arr, i);

    return 0;
}

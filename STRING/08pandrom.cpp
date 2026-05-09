#include <iostream>
#include <vector>
using namespace std;

int check(string s) {
    vector<int> lower(26, 0);
    vector<int> upper(26, 0);

    // Count the frequency of each character
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            lower[c - 'a']++;
        } else if (c >= 'A' && c <= 'Z') {
            upper[c - 'A']++;
        }
    }

    int count = 0; // Initialize count to 0
    bool odd = false; // Flag for odd counts

    // Iterate through lowercase letters
    for (int i = 0; i < 26; i++) {
        if (lower[i] % 2 == 0) {
            count += lower[i];
        } else {
            count += lower[i] - 1; // Add even part
            odd = true; // Found at least one odd count
        }
    }

    // Iterate through uppercase letters
    for (int i = 0; i < 26; i++) {
        if (upper[i] % 2 == 0) {
            count += upper[i];
        } else {
            count += upper[i] - 1; // Add even part
            odd = true; // Found at least one odd count
        }
    }

    // If there's at least one odd character, we can place one in the middle
    return count + (odd ? 1 : 0);
}

int main() {
    string s = "aabbccdd"; // Test string
    int ans = check(s);
    cout << ans << endl; // Output the maximum length of the palindrome
}

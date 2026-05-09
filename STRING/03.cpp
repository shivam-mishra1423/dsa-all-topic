/////print first character of every word

#include <iostream>
#include <string>

std::string firstLetters(const std::string& S) {
    std::string result;
    bool inWord = false;

    for (char ch : S) {
        if (isspace(ch)) {
                cout<<ch<<endl;
            // If we encounter a space, we are no longer in a word
            inWord = false;
        } else {
            if (!inWord) {
                // If we are at the start of a new word, append the letter
                result += ch;
                inWord = true;
            }
        }
    }

    return result;
}

int main() {
    std::string S = "Shivam Kumar Mishra";
   // std::cout << firstLetters(S) << std::endl;  // Output: "gfg"
    return 0;
}

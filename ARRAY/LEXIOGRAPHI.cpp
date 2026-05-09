#include <iostream>
#include <vector>
#include <algorithm>

void lexicalNumbers(int n) {
    std::vector<std::string> numbers;

    // संख्याओं को स्ट्रिंग में बदलें
    for (int i = 1; i <= n; ++i) {
        numbers.push_back(std::to_string(i));
    }

    // स्ट्रिंग्स को लेक्सिकोग्राफिकल क्रम में क्रमबद्ध करें
    //std::sort(numbers.begin(), numbers.end());

    // परिणाम प्रिंट करें
    for (const auto& number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "कृपया संख्या का मान दर्ज करें: ";
    std::cin >> n;

    lexicalNumbers(n);

    return 0;
}


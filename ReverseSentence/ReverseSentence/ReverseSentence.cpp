#include <iostream>
#include <string>
#include <sstream>
#include <stack>

void reverseWords(std::string& str) {
    std::stack<std::string> words;
    std::stringstream ss(str);
    std::string word;

    while (ss >> word) {
        words.push(word);
    }

    str.clear();
    while (!words.empty()) {
        str += words.top() + " ";
        words.pop();
    }

    if (!str.empty()) {
        str.pop_back();
    }
}

int main(int argc, char* argv[])
{
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    std::cout << "Original sentence: " << sentence << std::endl;

    reverseWords(sentence);

    std::cout << "Reversed sentence: " << sentence << std::endl;
    
    return 0;
}

#include <iostream>
#include <deque>
#include <vector>
using namespace std;
int main ()
{
    std::deque<std::string> words {"one", "two", "three", "four", "five", "six"};
    std::vector<std::string> wordset {"this", "that", "three", "four"};
    std::deque<std::string> words_copy {words};
    for (int i =0;i < words_copy.size(); i++) {
        std::cout << words_copy.at(i) << std::endl;
    }
    std::deque<std::string> words_part {std::begin(words), std::begin(words)+5};
    for (int i =0; i < words_part.size(); i++) {
        std::cout << words_part.at(i) << std::endl;
    }
    words.push_front("zero");
    words.push_back("seven");
    for (int i =0; i < words.size(); i++) {
        std::cout << words.at(i) << std::endl;
    }
    words.pop_front();
    for (int i =0; i < words.size(); i++) {
        std::cout << words.at(i) << std::endl;
    }
    words.assign(8, "eight");
    for (int i =0; i < words.size(); i++) {
        std::cout << words.at(i) << std::endl;
    }
    words.assign(std::begin(wordset)+1, --std::end(wordset));
    for (int i =0; i < words.size(); i++) {
        std::cout << words.at(i) << std::endl;
    }

}

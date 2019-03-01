#include <iostream>
#include <vector>
int main()
{
    std::vector<std::string> words {"first", "second"};
    auto iter = words.emplace(++std::begin(words),5,'A');
    words.emplace(++iter, "$$$$");
    for (int i = 0; i < words.size(); i++) {
        std::cout << words[i] << std::endl;
    }
}

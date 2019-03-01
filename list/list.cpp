#include <iostream>
#include <list>
#include <functional>
using namespace std;
using std::list;
template<typename Iter>
void list_elements(Iter begin, Iter end)
{
    while (begin != end)
        std::cout << *begin++ << std::endl;
}
int main ()
{
    std::list<std::string> names {"jame", "jim", "jules", "janet"};
    names.push_front("lan");
    names.push_back("kitty");
    names.emplace_front("yang");
    names.emplace_back("jiao");
    list_elements(std::begin(names), std::end(names));
    names.remove("jiao");
    list_elements(std::begin(names), std::end(names));
    names.push_back("jim");
    names.unique();
    list_elements(std::begin(names), std::end(names));
}

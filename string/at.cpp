#include <iostream>
#include <string>
int main ()
{
    const std::string cc("kumufenchun");
    std::string s ("abced");
    char temp = 0;
    char temp_1 = 0;
    char temp_2 = 0;
    char temp_3 = 0;
    char temp_4 = 0;
    char temp_5 = 0;
    temp = s[2];
    temp_1 = s.at(3);
    temp_2 = s[s.length()];
    temp_3 = cc[cc.length()];
    temp_4 = s.at(s.length());
    temp_5 = cc.at(cc.length());
    std::cout << temp << temp_1 << temp_2 << temp_3 << temp_4 << temp_5 << std::endl;
    return 0;
}

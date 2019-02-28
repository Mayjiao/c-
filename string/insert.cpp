#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "to be one";
    string str2 = "the ";
    string str3 = "or not to be";

    str.insert(6,str2);
    str.insert(6, str3, 3, 4);
    str.insert(6, "that is cool", 8);
    str.insert(6,1,':');
    str.insert(str.begin()+5, ',');
    str.insert(str.end(), 3, '.');
    cout << str << endl;
}

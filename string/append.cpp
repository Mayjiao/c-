#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a = "ello";
    string b;
    string c;
    string d;
    string e;
    b.append(a);
    c.append("123456", 2);
    d.append("12345", 2, 2);
    e.append(10, 'a');
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    return 0;
}

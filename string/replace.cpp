#include <string>
using namespace std;
int main()
{
    string var("abcdefghijklmn");
    const string dest("1234");
    string dest2("567890");
    var.replace(3,3,dest);
    cout << var << endl;
    var = "abcdefghijklmn";
    var.replace (3,1, dest.c_str(), 1, 3);
    cout << var << endl;
    var = "abcdefghijklmn";
    var.replace (3, 1, 5, 'x');
    cout << var << endl;
    string::iterator itA, itB;
    string::iterator itC, itD;
    itA = var.begin();
    itB = var.end();
    var = "abcdefghijklmn";
    var.replace(itA, itB, dest);
    cout << var << endl;
    itA = var.begin();
    itB = var.end();
    itC = dest2.begin () +1;
    itD = dest2.end ();
    var = "abodefghijklmn";
    var.replace (itA, itB, itC, itD);
    cout  << var << endl;
}

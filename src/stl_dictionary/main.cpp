#include <iostream>
#include <string>
#include <map>

using namespace std;

class compare {
public:
    bool operator()(const char* s, const char* t) const 
    {
        return strcmp(s, t) < 0;
    }
};

int main()
{
    map<char*, long, compare> D;
    D["Johnson, J."] = 12345;
    D["Smith, P."] = 54321;
    D["Shaw, A."] = 99999;
    D["Atherton, K."] = 11111;
    char GivenName[30];
    cout << "Enter a name: ";
    cin.get(GivenName, 30);
    if (D.find(GivenName) != D.end())
        cout << "The number is " << D[GivenName];
    else
        cout << "Not found.";
    cout << endl;
    return 0;
}
// Write a program that will read a string that contains a valid URL and will output its respective lower-case hostname 
// (sometimes referred as subdomain/domain). For example, if the input is "https://WWW.cs.uri.edu/homepage/class/csc211?year=2019&m=10", 
// then the resulting value should be "www.cs.uri.edu". You will need to read what is a URL? before starting your implementation.

#include <iostream>
#include <string>
using namespace std;

void LowerCase(string& str) {
    for (int i = 0; i < str.size(); i++) {
        str[i] = tolower(str[i]); 
    }
}

int main() {
    string str;
    getline(cin, str);

    int start = 0;
    for (int i = 0; i < str.size() - 2; i++) {
        if (str[i] == ':' && str[i + 1] == '/' && str[i + 2] == '/') {
            start = i + 3;
            break;
        }
    }

    string host = "";
    for (int i = start; i < str.size(); i++) {
        if (str[i] == '/' || str[i] == ':' || str[i] == '?') {
            break; 
        }
        host += str[i];
    }

    LowerCase(host);

    cout << host;

    return 0;
}

/*
Create a program that reads in two strings separated by a whitespace, which are two valid gmail addresses. 
Your program should print True if both addresses map to the same gmail address and False otherwise. 
According to gmail:

addresses are not case sensitive
dots don't matter, and
any '+' before the '@' and all characters after the '+' and before the '@' are ignored

For example, "csc...2.1.1@gmail.com", "csc211@gmail.com", "CSC.211.@gmail.com", "CSC211@GMail.Com", "csc211+announce@gmail.com", 
"csc.211+fall-2019@gmail.com" are all the same, i.e. if e-mails are sent to those addresses, they will reach the same gmail account.
*/

#include <iostream>
using namespace std;

void standard(string& email) {

    string result;

    bool found = false;
    bool ignore = false;

    for (int i = 0; i < email.size(); i++) {
        char ch = tolower(email[i]);

        if (ch == '@') {
            found = true;
            ignore = false;
        }

        if (!found) {
            if (ch == '.') continue;
            if (ch == '+') {
                ignore = true;
                continue;
            }
        }

        if (!ignore) {
            result += ch;
        }
    }

    email = result;
}

int main() {
    string email;
    getline(cin, email);
    string email1;
    string email2;

    bool whitespace = false;

    for (int i = 0; i < email.size(); i++) {

        char ch = email[i];

        if (ch == ' ') {
            whitespace = true;
            continue;
        }

        if (!whitespace) {
            email1 += ch;
        } else {
            email2 += ch;
        }
    }
    

    standard(email1);
    standard(email2);

    if (email1 == email2) {
        cout << "True";
    } else {
        cout << "False";
    }
 
    return 0;
}
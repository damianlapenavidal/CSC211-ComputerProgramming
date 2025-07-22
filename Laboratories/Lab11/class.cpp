#include <iostream>
#include <string>
using namespace std;
#include "class.h"

// Default constructor; Should store an empty string.
MyString::MyString(){
    length = 0;
    str = new char[1];  // only null terminator
    str[0] = '\0';
}
        
// Copy constructor; Copy the contents of the input string into the class's data member.
MyString::MyString(const char * input){
    if (input == nullptr) {
        length = 0;
        str = new char[1];
        str[0] = '\0';
    } else {
        length = std::strlen(input);
        str = new char[length + 1]; // +1 for null terminator
        std::strcpy(str, input);
    }
}

// Destructor; Should deallocate any dynamically allocated memory that the class uses.
MyString::~MyString(){
    delete[] str;
}

// Returns the length of string. This is the number of characters in the string, 
// excluding the null terminator.
unsigned int MyString::len(){
    return length;

}

// Sets the character at the given index to the character provided
void MyString::set(int index, char ch){
    if (index >= 0 && index < length) {
        str[index] = ch;
    }
    return;
}

// Returns the character at the given index.
char MyString::get(int index){
    if (index >= 0 && index < length) {
        return str[index];
    }
}

// Returns a pointer to a character array of the object's string.
const char *MyString::c_str(){
    return str;
}

// Reverse the string. "hello" should turn into "olleh". 
// If you would like a challenge try to do it in-place (cannot create another array).
void MyString::reverse(){
    int i = 0;
    int j = length - 1;

    while (i < j) {
        // Swap characters
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
    return;
}

// Find the first occurrence of this character, and return the index. 
// Return `-1` if it can't be found.
int MyString::find_first(char ch){
    for (int i = 0; i < length; i++) {
        if (str[i] == ch) {
            return i;
        }
    }
    return -1;
}

// Find the first occurrence of the input string. 
// Return the index of the starting character. 
// Return the `-1` if it can't be found.
int MyString::find_first(const char * substr){
    int subLen = 0;
    while (substr[subLen] != '\0') {
        subLen++;
    }

    // If the input string is longer than our string, it can't be found
    if (subLen > length) return -1;

    for (int i = 0; i <= length - subLen; ++i) {
        bool match = true;
        for (int j = 0; j < subLen; ++j) {
            if (str[i + j] != substr[j]) {
                match = false;
                break;
            }
        }

        if (match) {
            return i;
        }
    }

    return -1;
}

// Find the last occurrence of this character, and return the index. 
// Return the `-1` if it can't be found.
int MyString::find_last(char ch){
    for (int i = length - 1; i => 0; i--) {
        if (str[i] == ch) {
            return i;
        }
    }
    return -1;
}

// Find the last occurrence of the input string. 
// Return the index of the starting character. 
// Return the `-1` if it can't be found.
int MyString::find_last(const char * substr){
    int subLen = 0;
    while (substr[subLen] != '\0') {
        subLen++;
    }

    if (subLen > length) return -1;

    // Start from the last index where substr *could* match
    for (int i = length - subLen; i >= 0; --i) {
        bool match = true;
        for (int j = 0; j < subLen; ++j) {
            if (str[i + j] != substr[j]) {
                match = false;
                break;
            }
        }

        if (match) {
            return i;
        }
    }

    return -1;
}

// Return true if the str stored is equivalent to the given string
// Return false if they are not the same
bool MyString::compare(const char *){
    // First, check lengths
    int inputLength = 0;
    while (input[inputLength] != '\0') {
        inputLength++;
    }

    if (inputLength != length) {
        return false;
    }

    // Then, compare each character
    for (int i = 0; i < length; ++i) {
        if (str[i] != input[i]) {
            return false;
        }
    }

    return true;
}

// Append a single character onto the end of the string.
void MyString::append(char ch){
    // Allocate new memory: +1 for the new char, +1 for '\0'
    char* newStr = new char[length + 2]; 

    // Copy existing string into new memory
    for (int i = 0; i < length; ++i) {
        newStr[i] = str[i];
    }

    // Append new character
    newStr[length] = ch;

    // Null-terminate the new string
    newStr[length + 1] = '\0';

    // Delete old memory
    delete[] str;

    // Update pointer and length
    str = newStr;
    length++;
}

// Concatenate the input string to the object's string.
void MyString::append(const char * data){
    if (!data || data[0] == '\0') return;

    int appendLen = 0;
    while (data[appendLen] != '\0') {
        appendLen++;
    }

    int newLen = length + appendLen;

    // Allocate new memory
    char *newStr = new char[newLen + 1];

    // Copy existing string
    for (int i = 0; i < length; i++) {
        newStr[i] = str[i];
    }

    // Append new data
    for (int i = 0; i < appendLen; i++) {
        newStr[length + i] = data[i];
    }

    newStr[newLen] = '\0'; // null-terminate

    // Free old memory and update
    delete[] str;
    str = newStr;
    length = newLen;
}

//Overload the '[]' operator to fuction as we expect
// Ex. MyString("Hello")[2] == 'l'
char MyString::operator[](const unsigned int index) const {
    if (index >= length()) {
        return '\0';  // Or could throw an exception instead
    }
    return str[index];  // Access the string stored in the `str` member
}

// Overload the '+' operator to concatenate two strings together
MyString MyString::operator+(const MyString str2) const{
    size_t len1 = length;          // or strlen(this->str);
    size_t len2 = str2.length;     // assuming you store length in the object

    char* combined = new char[len1 + len2 + 1]; // +1 for null terminator

    // Copy both strings
    for (size_t i = 0; i < len1; ++i) {
        combined[i] = str[i];
    }
    for (size_t i = 0; i < len2; ++i) {
        combined[len1 + i] = str2.str[i];
    }
    combined[len1 + len2] = '\0'; // null-terminate

    // Create MyString with combined
    MyString result(combined);

    delete[] combined; // Safe to delete AFTER result makes its own copy

    return result;
}

// Overload the '*' operator to return the string concatenated on itself x times
// Ex. "Hello" * 3 == "HelloHelloHello"
MyString MyString::operator*(const int x) const{
    // If x is zero or negative, return an empty string
    if (x <= 0) {
        return MyString();  // Empty string
    }

    size_t newLen = length * x;  // Total length of the resulting string

    // Allocate new memory for the concatenated result
    char* newStr = new char[newLen + 1];  // +1 for null terminator

    // Concatenate the string `x` times
    for (int i = 0; i < x; ++i) {
        for (size_t j = 0; j < length; ++j) {
            newStr[i * length + j] = str[j];
        }
    }

    newStr[newLen] = '\0';  // Null-terminate the new string

    MyString result(newStr);  // Create the new MyString object
    delete[] newStr;  // Clean up the temporary array

    return result;
}

// EXTRA METHOD
// Delete a single character from the end of the string
void MyString::pop_back(){
    if (length == 0) return; // Nothing to pop

    // Allocate new memory: one less character + '\0'
    char* newStr = new char[length]; // length - 1 chars + 1 null terminator

    // Copy characters up to the one before the last
    for (int i = 0; i < length - 1; ++i) {
        newStr[i] = str[i];
    }

    // Null-terminate the string
    newStr[length - 1] = '\0';

    // Free old memory
    delete[] str;

    // Update pointer and length
    str = newStr;
    length--;
}
/*
    PalindromeR.cpp

    Implementation file for PalindromeR functions
*/

#include "PalindromeR.hpp"

int PalindromeR::test_string(const std::string& s) {

    // base case testing: empty strings and single letters
    if (s.length() <= 1) {
        return -1;
    }

    int first = 0;
    int last = s.length() - 1;

    // check if first char is a letter from a-z
    for (first; first <= last; first++) {
        if (tolower(s[first]) >= 'a' && tolower(s[first]) <= 'z') {
            break;
        }
    }

    // check if last char is a letter from a-z
    for (last; last >= first; last--) {
        if (tolower(s[last]) >= 'a' && tolower(s[last]) <= 'z') {
            break;
        }
    }

    // compare first and last letters
    if (tolower(s[first]) != tolower(s[last])) {
        return 1;
    } else {
        if (s.length() <= 3) {
            return -1;
        } else {
            return test_string(s.substr(first + 1, last - first - 1));
        }
    }
}

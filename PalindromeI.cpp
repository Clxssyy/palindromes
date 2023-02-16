/*
    PalindromeI.cpp

    Implementation file for PalindromeI functions
*/

#include "PalindromeI.hpp"
#include "stack.hpp"
#include "queue.hpp"

/*
    Test a string to see if it's a palindrome

    @param[in] string being tested to see if it's a palindrome
    @return Number of passes before mismatch letters came up
    @retval -1 String is a palindrome
*/
int PalindromeI::test_string(const std::string& s) {

    // Base case testing: single letters or empty strings
    if (s.length() <= 1) {
        return -1;
    }

    int passes = 0;
    Stack<char> stack;
    Queue<char> queue(s.length());

    // Add each letter to the stack
    for (int i = 0; i < s.length(); i++) {
        if (tolower(s[i]) >= 'a' && tolower(s[i]) <= 'z') {
            stack.push(s[i]);
        }
    }

    // DEBUGGING - see what's pushed onto the stack
    // stack.print();

    // Add each letter to the queue
    for (int i = 0; i < s.length(); i++) {
        if (tolower(s[i]) >= 'a' && tolower(s[i]) <= 'z') {
            queue.enQueue(s[i]);
        }
    }

    // DEBUGGING - see what's enqueued into the queue
    // queue.print();

    // Compare letters: one from both the stack and the queue each pass
    while (!stack.isEmpty() && !queue.isEmpty()) {
        if (tolower(stack.pop()) != tolower(queue.deQueue())) {
            return passes;
        }
        passes++;
    }

    // DEBUGGING - see what the stack and heap print before returning -1
    // stack.print();
    // queue.print();

    return -1;
}

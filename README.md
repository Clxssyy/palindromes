# Palindromes

This is a program that uses both an iterative and recursive solution to test whether a string is a palindrome

## Implementation

The *iterative solution* uses stacks (using linked lists) and queues (using arrays). The string is added to both and then each letter is popped / dequeued from them and compared. If all the letters match -1 is returned, if a letter doesn't match the number of correct letters is returned.

The *recursive solution* simply compares the first and last characters of the string and if they match a substring of the remaining letters is passed back into the function. This happens until the string reaches the base case which is a string of 1 charater or less and then returns -1. If the letters don't match a 1 is returned.

## Features

+ test_string()
    + Recursive Solution
    + Iterative Solution
+ LinkedList Class
    + push()
    + pop()
    + print()
    + isEmpty()
+ Queue Class
    + enQueue()
    + deQueue()
    + print()
    + isEmpty()
+ Stack Class
    + push()
    + pop()
    + print()
    + isEmpty()

## Build

To build this program use the following command
```console
make
```

To run this program one of the following commands
```console
./palindromes.out
```

```console
make run
```

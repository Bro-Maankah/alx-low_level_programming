1. How to Use Arguments Passed to Your Program
When a C or C++ program starts, the system passes command-line arguments to the main function. These arguments are accessible via argc (argument count) and argv (argument vector). Here's how you use them:

argc: This integer tells you how many command-line arguments were passed, including the name of the program itself.
argv: This is an array of strings (char pointers), where argv[0] is the program name, and argv[1], argv[2], etc., are the actual command-line arguments.
Example:

#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Number of arguments: %d\n", argc);
    for(int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }
    return 0;
}
In this example, the program prints out each argument passed to it.

2. Two Prototypes of Main and Their Use Cases
There are two common prototypes of the main function in C and C++:

Standard Main: int main()

This is used when your program does not need to process command-line arguments.
Example: A simple program that does not require any external input when it starts.
Main with Arguments: int main(int argc, char *argv[])

This is used when your program needs to accept command-line arguments.
Example: A program that processes files specified by the user at runtime.
Both return an integer, typically 0 for successful execution or a non-zero value for errors.

3. Using __attribute__((unused)) or (void) for Unused Variables or Parameters
In scenarios where you have unused variables or parameters (which can cause compiler warnings), you can use the __attribute__((unused)) (GCC specific) or the (void) trick to avoid warnings:

attribute((unused)):

This attribute is added before the variable or function parameter to indicate that it might be intentionally unused.
Example:
void myFunction(__attribute__((unused)) int unusedParam) {
    // Function body
}
(void) usage:

This is a portable way to explicitly tell the compiler that you are intentionally not using a variable.
You cast the variable to void, which does nothing but satisfies the compiler.
Example:
void myFunction(int unusedParam) {
    (void)unusedParam; // Explicitly marking as unused
    // Function body
}

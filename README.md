# Custom function Printf

This is a special C version of the printf function that we created ourselves. It works just like the regular printout you're used to, but with a few extra features.

##What is inside?

Here's what you'll find in this project:

- `main.h`: This file is like a cheat sheet for the functions we created. It tells other parts of our program what to expect and how to work together.
- `_printf.c`: This is where the magic happens. We wrote our own version of printf called "_printf".
- `functions.c`: This file contains functions that handle various things we might want to print, such as letters, strings and numbers.
- `get_function.c`: This file contains a smart function that determines which print function to use based on the special characters in our format string.
- `README.md`: Hey, you're reading this now! This document explains everything about this project.

## How to use it

To use our printf, simply include main.h in your C program. You can then use `_printf` as if you were using a regular printf, with a format string and any additional data you want to print.

## How it works

- `_printf`: This function takes a format string and any additional arguments you want to print. It walks through the format string and outputs everything according to special characters (eg %s for strings and %d for numbers).
- `print_char`, `print_string`, `print_percent`, `print_decimal`, `print_integer`: Each of these functions handles printing a specific type of data, such as letters or numbers.
- `get_function`: This smart function looks for special characters in the format string and decides which print function to use.

##Creating a project

If you want to use our custom printf in your own project, simply compile all source files using a C compiler such as gcc. For example:

gcc -Wall -Werror -Wextra -pedantic *.c -o _printf


## Example

Here's a quick example of how you might use our custom printf in your own program:

```c
#include "main.h"

int main(void)
{
    _printf("Hello, %s!\n", "world");
    _printf("The value of pi is approximately %.2f\n", 3.14159);
    _printf("Printing a single character: %c\n", 'A');
    _printf("Printing an integer: %d\n", 42);
    _printf("Printing a percent sign: %%\n");
    return (0);
}

This would print:

Hello, world!
Printing a single character: A
Printing an integer: 42
Printing a percent sign: %


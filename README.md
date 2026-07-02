_This project has been created as part of the 42 curriculum by asousa-p._

## Description

get_next_line is a custom implementation of a function that reads and returns one line at a time from a file descriptor. The project introduces the concept of static variables, file descriptors, and efficient buffer management while handling files of any size.

The goal is to create a reusable function capable of reading sequentially from a file descriptor, preserving any unread data between function calls, and returning each line until the end of the file is reached.

## Instructions

To use the function compile both files with cc and the flags -Werror -Wall -Wextra and then run the ./a.out with the main provided.

## Key Concepts

The project focuses on several important concepts in C programming:

| Concept | Purpose |
|---------|---------|
| Static Variables | Preserve leftover data between successive calls to `get_next_line`. |
| File Descriptors | Allow the function to read from files, standard input, or other input streams. |
| Buffer Management | Read data in fixed-size chunks defined by `BUFFER_SIZE`. |
| Dynamic Memory Allocation | Allocate and resize memory as needed to store complete lines. |

## Function Behavior

The `get_next_line` function:

- Reads from a file descriptor until a newline character (`\n`) or the end of the file is encountered.
- Returns one complete line per function call, including the newline character when present.
- Stores any remaining unread characters for the next invocation.
- Returns `NULL` when there is nothing left to read or if an error occurs.

## Resources

Linux man pages for `read`, file descriptors, and memory management were used, along with various conversations with more experienced peers to better understand static variables and buffer handling.

AI tools were used as supplementary learning aids for:

- Reviewing edge cases with different buffer sizes.

All implementations, testing, debugging, and final code decisions were completed manually.
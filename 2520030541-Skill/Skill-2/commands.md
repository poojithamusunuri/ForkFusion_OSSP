# Commands and Concepts Used – Skill 2: Basic Command Processing Shell

This document explains the important C functions, statements, and concepts used in `skill2.c` to create a basic interactive command-processing shell.

---

## 1. Header Files

### `#include <stdio.h>`

Provides standard input and output functions.

Functions used:

```c
printf()
fgets()
fflush()
```
### #include <string.h>

Provides functions used for string handling and comparison.

Functions used:
```c
strcmp()
strlen()
strcspn()
```
### #include <stdlib.h>

Provides general utility functions for C programs.

### #include <unistd.h>

Provides access to POSIX operating-system functionality.

### 2. Maximum Input Size
### #define MAX_INPUT 100

This creates a constant named MAX_INPUT with a value of 100.

It is used to define the maximum number of characters that can be stored in the command input buffer.

### 3. Command Processing Function
### void processCommand(char *command)

This function receives the command entered by the user and checks which command was entered.

The function processes commands such as:

### hello
### help

If the command is not recognized, it displays an unknown command message.

### 4. strcmp() – Comparing Commands
strcmp(command, "hello") == 0

strcmp() compares two strings.

If both strings are equal, it returns 0.

Example:
```c
User enters: hello
        ↓
Program compares it with "hello"
        ↓
Strings match
        ↓
Welcome message is displayed
```
The same concept is used to identify the help and exit commands.

### 5. hello Command
```c if (strcmp(command, "hello") == 0)
{
    printf("Hello! Welcome to MyShell.\n");
}
```
When the user enters:

### myshell> hello

the program displays:
```c
Hello! Welcome to MyShell.
```
### 6. help Command
```c
else if (strcmp(command, "help") == 0)
```
When the user enters help, the program displays information about the available commands.

This allows the shell to provide basic assistance to the user.

### 7. strlen() – Checking Empty Input
```c
else if (strlen(command) == 0)
```
strlen() returns the length of a string.

If the user presses Enter without typing anything, the command length becomes 0.

The program detects this condition and performs no action.

### 8. Handling Unknown Commands
```c
printf("Unknown command: %s\n", command);
```
If the user enters a command that is not supported, the program displays an unknown command message.

Example:
```c
myshell> test
Unknown command: test
```
This prevents the program from treating every input as a valid command.

### 9. Input Buffer
### char buffer[MAX_INPUT];

A character array called buffer is created to store the command entered by the user.

The maximum input size is controlled by:
```c
MAX_INPUT
```
### 10. Infinite Interactive Loop
```c
while (1)
```
The shell must continuously accept commands from the user.

while (1) creates an infinite loop.

Program flow:
```c
Display prompt
      ↓
Accept command
      ↓
Process command
      ↓
Display result
      ↓
Return to prompt
```
The loop only stops when the user enters the exit command.

### 11. Displaying the Shell Prompt
```c
printf("myshell> ");
```
This displays the shell prompt.

Example:
```c
myshell>
```
The prompt tells the user that the program is ready to accept a command.

### 12. fflush(stdout)
```c
fflush(stdout);
```
fflush(stdout) forces the output to appear immediately on the screen.

It ensures that the shell prompt is displayed before the program waits for user input.

### 13. Reading User Input
### fgets(buffer, sizeof(buffer), stdin);

fgets() reads a complete line entered by the user.

The command is stored in:
```
buffer
```
The input comes from:
```c
stdin
```
which represents standard keyboard input.

### 14. Removing the Newline Character
```c
buffer[strcspn(buffer, "\n")] = '\0';
```
When the user presses Enter, fgets() stores a newline character (\n) in the input.

This statement finds the newline character and replaces it with:
```c
'\0'
```
This converts the input into a clean C string.

Example:
```c
Input from keyboard:

hello + Enter
      ↓
Stored by fgets():

hello\n
      ↓
Newline removed:

hello
```
### 15. Checking the exit Command
### if (strcmp(buffer, "exit") == 0)

The program checks whether the user entered:
```c
exit
```
If the command matches, the program displays:
```c
Exiting shell...
```
and exits the loop.

### 16. break Statement
```c
break;
```
break immediately terminates the current loop.

In this program:
```c
User enters exit
       ↓
exit command detected
       ↓
break executes
       ↓
while loop ends
       ↓
program terminates
```

### 17. Calling processCommand()
```c
processCommand(buffer);
```
If the user does not enter exit, the entered command is passed to the processCommand() function.

The function then decides what action should be performed.

This separates command processing from the main shell loop.

### 18. Overall Program Flow
```c
Start Program
      ↓
Create input buffer
      ↓
Start infinite loop
      ↓
Display myshell> prompt
      ↓
Read user input using fgets()
      ↓
Remove newline character
      ↓
Is command "exit"?
      ↓
Yes ───→ Display exit message → End Program
      ↓
No
      ↓
Call processCommand()
      ↓
Check command
      ↓
hello → Display welcome message
help  → Display available commands
empty → Do nothing
other → Display unknown command message
      ↓
Return to myshell> prompt
```
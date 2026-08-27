# Commands and Concepts Used – Skill 1: Interactive Shell Loop

This document explains the important C functions, statements, and concepts used in `skill1.c` to create a basic interactive shell program.

---

## 1. Header Files

### `#include <stdio.h>`

Provides standard input and output functions used by the program.

Functions used:

```c
printf()
fgets()

#include <string.h>

Provides string handling functions.

Functions used:

strcmp()
strcspn()
2. Input Buffer
char command[100];

Creates a character array named command.

This array stores the text entered by the user.

For example:

myshell> hello

The input hello is stored inside the command array.

3. Interactive Loop
while (1)

Creates an infinite loop.

The program repeatedly:

Displays the shell prompt.
Waits for user input.
Reads the input.
Processes the input.
Repeats the process.

The loop continues until the user enters the exit command.

4. Displaying the Shell Prompt
printf("myshell> ");

Displays:

myshell>

This indicates that the program is ready to accept user input.

5. Reading User Input
fgets(command, sizeof(command), stdin);

Reads the text entered by the user from the keyboard.

Components
command – stores the user input.
sizeof(command) – specifies the maximum size of the input buffer.
stdin – represents standard input from the keyboard.

Input flow:

Keyboard
   ↓
stdin
   ↓
fgets()
   ↓
command array
6. Removing the Newline Character
command[strcspn(command, "\n")] = '\0';

When the user presses the Enter key, fgets() stores a newline character (\n) along with the input.

For example:

hello\n

The strcspn() function finds the position of the newline character.

The newline is then replaced with:

'\0'

which marks the end of the string.

The input becomes:

hello

This allows the program to correctly compare user input with commands such as exit.

7. Comparing User Input
if (strcmp(command, "exit") == 0)

The strcmp() function compares two strings.

The program compares:

User input

with:

exit

If both strings are equal, strcmp() returns 0.

Therefore, the condition means:

If the user enters exit, terminate the interactive shell.

8. Handling the Exit Command
printf("Exiting shell...\n");
break;

When the user enters:

myshell> exit

The program:

Displays an exit message.
Uses break to exit the infinite loop.
Continues to the end of the program.
9. Processing Normal Input
printf("You entered: %s\n", command);

If the user enters anything other than exit, the program displays the entered text.

Example:

myshell> hello
You entered: hello

The program then returns to the beginning of the loop and displays the prompt again.

10. Program Termination
return 0;

Ends the program successfully.

A return value of 0 generally indicates successful program execution.

11. How the Program Becomes Interactive

The following sequence creates the interactive behavior:

Start Program
     ↓
Create Input Buffer
     ↓
Start while(1) Loop
     ↓
Display myshell>
     ↓
Wait for User Input
     ↓
Read Input using fgets()
     ↓
Remove Newline Character
     ↓
Check if Input is "exit"
     ↓
 ┌───────────────┐
 │               │
YES             NO
 │               │
 ↓               ↓
Exit Loop     Display Input
 │               │
 ↓               ↓
End Program ← Repeat Loop
12. Concepts Demonstrated

This Skill-1 program demonstrates:

Interactive command-line programming
Standard input using stdin
Standard output using printf()
Character arrays
Reading user input using fgets()
String processing
String comparison using strcmp()
Newline removal using strcspn()
Infinite loops using while(1)
Conditional statements
Program termination using break
Basic shell interaction
Summary

The program behaves like a very basic shell because it continuously displays a prompt, accepts input from the user, processes that input, and continues running until the user enters the exit command.



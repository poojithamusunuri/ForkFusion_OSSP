# Skill 2 – Basic Command Processing Shell

## Objective

To develop a basic interactive shell program that accepts commands from the user and performs different actions based on the command entered.

## Program Description

This program creates a simple interactive shell named `myshell`.

The shell continuously displays a prompt and waits for the user to enter a command. The entered command is processed and the appropriate response is displayed.

The program continues running until the user enters the `exit` command.

## Features

The program supports the following operations:

- Displays an interactive shell prompt.
- Accepts commands from the user.
- Processes the `hello` command.
- Processes the `help` command.
- Handles empty input.
- Displays a message for unknown commands.
- Exits safely when the user enters `exit`.

## Supported Commands

### 1. hello

Displays a welcome message.

Example:

```text
myshell> hello
Hello! Welcome to MyShell.
```
### 2. help

Displays the available commands.

Example:

```text
myshell> help
Available commands:
  help  - Display available commands
  exit  - Exit shell
  ```
### 3. exit

Terminates the interactive shell.

Example:
```text
myshell> exit
Exiting shell...
```

### Unknown Commands

If the user enters a command that is not recognized by the program, the shell displays an error message.

Example:

```text
myshell> test
Unknown command: test
```

### Program Flow
Start Program
      ->
Display myshell> prompt
      ->
Accept user input
      ->
Remove newline character
      ->
Check for exit command
      ->
Process entered command
      ->
Display appropriate output
      ->
Return to myshell> prompt


### Concepts Used
Interactive command-line programming,
Character arrays,
User input handling,
Functions,
Infinite loops,
Conditional statements,
String comparison,
String handling,
Command processing,
Exit conditions,
Compilation.

### Compiling the program using:
```text
clang skill2.c -o skill2
```
### Execution

Run the program using:
```text
./skill2
```
### Expected Learning Outcome

After completing this skill, the student will understand how a basic interactive shell accepts user input, processes commands using conditional statements and functions, handles invalid commands, and continues execution until an exit condition is reached.
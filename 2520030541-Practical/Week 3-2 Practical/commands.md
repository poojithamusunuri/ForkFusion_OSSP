# Operating Systems Lab

# Week 3-2 Practical – Parent and Child Process using fork()

## Aim

To perform and understand process creation using the `fork()` system call, calculate the factorial of a number in the child process, and calculate its square in the parent process.

---

## Procedure

### Step 1: Create the source file

**Command**

```bash
touch factorial_square.c
```

**Output**

```text
No output (command executed successfully).
```

**Explanation**

Creates the C source file for the program.

---

### Step 2: Edit the source file

**Command**

```bash
nano factorial_square.c
```

**Output**

```text
Editor opened successfully.
```

**Explanation**

The C program is entered and saved.

---

### Step 3: Compile the program

**Command**

```bash
clang factorial_square.c -o factorial_square
```

**Output**

```text
No output (Compilation successful).
```

**Explanation**

Compiles the source code and generates the executable file `factorial_square`.

---

### Step 4: Execute the program

**Command**

```bash
./factorial_square
```

**Sample Output**

```text
Enter a number: 5

--- Child Process ---
Child PID : 5263
Parent PID: 5262
Factorial of 5 = 120

--- Parent Process ---
Parent PID: 5262
Square of 5 = 25
```

> *The Process IDs (PIDs) will differ on each execution.*

**Explanation**

The child process computes the factorial of the entered number. The parent process waits for the child to complete using `wait()`, then computes and displays the square of the same number.

---

### Step 5: Remove the executable

**Command**

```bash
rm factorial_square
```

**Output**

```text
No output (command executed successfully).
```

**Explanation**

Removes the compiled executable, leaving only the source code in the directory.

---

## Result

Successfully created a child process using the `fork()` system call, computed the factorial of a number in the child process, synchronized execution using `wait()`, and computed the square of the same number in the parent process.
# Operating Systems Lab

# Week 3-1 Practical – Process Creation and Process Synchronization

## Aim

To perform and understand process creation and synchronization in Linux using the `fork()`, `sleep()`, and `wait()` system calls.

---

## Procedure

### Program 1 – sleep.c

#### Compile

```bash
clang sleep.c -o sleep_program
```

#### Execute

```bash
./sleep_program
```

#### Expected Output

```text
Program Started

(wait for 5 seconds)

Program Ended
```

#### Explanation

Demonstrates the use of the `sleep()` system call to pause program execution.

---

### Program 2 – forksleep.c

#### Compile

```bash
clang forksleep.c -o forksleep
```

#### Execute

```bash
./forksleep
```

#### Expected Output

```text
Start of Parent
Start of Child
End of Child
End of Parent
```

*(The exact order may vary depending on process scheduling.)*

#### Explanation

Demonstrates process creation using `fork()` and delayed execution using `sleep()`.

---

### Program 3 – waitfork.c

#### Compile

```bash
clang waitfork.c -o waitfork
```

#### Execute

```bash
./waitfork
```

#### Expected Output

```text
Start of Parent
Start of Child
End of Parent
```

#### Explanation

Demonstrates synchronization between parent and child processes using `wait()`. The child process terminates using `exit(0)`, so the statement after `exit(0)` is not executed.

---

## Result

Successfully compiled and executed programs demonstrating process creation, execution delay, and process synchronization using the `fork()`, `sleep()`, and `wait()` system calls.
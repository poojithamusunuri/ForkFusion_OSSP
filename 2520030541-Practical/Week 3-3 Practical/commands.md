# Week 4 – Process State Transitions

## Compile

```bash
clang process_state.c -o process_state
```

## Execute

```bash
./process_state
```

### Sample Output

```text
Parent Process Started

--- Parent Process ---
Parent PID : 48568
Parent waiting for child...

--- Child Process ---
Child PID : 48569
Parent PID : 48568
Child is running...

Child Process Finished
Parent Process Finished
```

## Observe Running Processes

```bash
ps
```

```bash
top
```


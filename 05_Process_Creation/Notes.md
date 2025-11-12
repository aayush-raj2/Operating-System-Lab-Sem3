# ⚙️ Experiment 5 — Process Creation

## 🎯 Aim
To create processes using the **`fork()`** system call and explore process IDs, parent-child relationships, and synchronization.

---

## 🧠 Theory

### 🔹 What is a Process?
A process is an instance of a running program, managed by the OS.

### 🔹 Process Creation
In UNIX/Linux, new processes are created using:
```c
int fork();
```
- Returns 0 to the child process.

- Returns child PID to the parent process.

- Returns -1 if process creation fails.

---
## 🔹 Important Functions
| Function    | Description                                  |
| ----------- | -------------------------------------------- |
| `getpid()`  | Gets current process ID                      |
| `getppid()` | Gets parent process ID                       |
| `wait()`    | Makes parent wait for child                  |
| `vfork()`   | Similar to fork but shares same memory space |

---
## 💡 Difference Between fork() and vfork()
| Aspect        | fork()                   | vfork()                                  |
| ------------- | ------------------------ | ---------------------------------------- |
| Address Space | Separate                 | Shared                                   |
| Execution     | Simultaneous             | Parent waits for child                   |
| Speed         | Slower                   | Faster                                   |
| Use Case      | General process creation | When child immediately executes `exec()` |

---
## 🧩 Key Notes

- After fork(), both processes run the same code.

- OS scheduler decides execution order.

- Process tree can be visualized using pstree command.

---
> ✅ Understanding fork-based process creation helps in OS-level programming, multitasking, and real-time systems.

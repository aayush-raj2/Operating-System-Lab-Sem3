# 🧵 Experiment 6 — Multi-Threading in C (POSIX Threads)

### 👨‍💻 Author: **Aayush Raj**
### 📚 Course: 21CSC202J — Operating Systems Lab  
### 🧠 Objective:
To write a **C program** demonstrating various **thread-related concepts** such as creation, termination, synchronization, and thread identification using **POSIX threads (pthreads)**.

---

## 🧩 Overview
Threads enable concurrent execution within a process.  
This experiment shows how to:
- Create multiple threads using `pthread_create()`
- Perform tasks concurrently (odd/even/natural sum)
- Wait for thread completion using `pthread_join()`

---

## ⚙️ Core Functions

| Function | Description |
|-----------|--------------|
| `pthread_create()` | Creates a new thread |
| `pthread_exit()` | Terminates current thread |
| `pthread_join()` | Waits for a specific thread to finish |
| `pthread_self()` | Returns current thread ID |
| `pthread_equal()` | Compares two thread IDs |

---

## 📂 Folder Contents

| File | Description |
|------|-------------|
| `MultiThread_Sum.c` | Program to create 3 threads and calculate sums |
| `Notes.md` | Theory and function reference |
| `/Screenshots/` | Add proof of execution (terminal output) |

---

## ⚙️ Compilation & Execution
```bash
gcc MultiThread_Sum.c -lpthread -o MultiThread_Sum
./MultiThread_Sum
```
---
## 🧠 Learning Outcomes

- Understand creation and management of threads.

- Learn synchronization using pthread_join().

- Compare performance vs. sequential execution.
---
> ✨ Threads share memory but divide the work — true parallelism begins here!

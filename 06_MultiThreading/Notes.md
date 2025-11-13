# 🧵 Experiment 6 — Multi-Threading

## 🎯 Aim
To demonstrate **thread creation**, **termination**, and **synchronization** using POSIX threads in C.

---

## 🧠 Theory

### 🔹 What is a Thread?
A **thread** is the smallest unit of CPU execution within a process.  
All threads of a process share the same address space.

---

### 🔹 POSIX Threads (pthreads)
A POSIX standard for multithreading support in C/C++ on UNIX systems.

---

## ⚙️ Thread Creation Syntax
```c
int pthread_create(
    pthread_t *thread,
    const pthread_attr_t *attr,
    void *(*start_routine)(void *),
    void *arg
);
```
| Parameter       | Description                          |
| --------------- | ------------------------------------ |
| `thread`        | Pointer to thread ID                 |
| `attr`          | Thread attributes (NULL for default) |
| `start_routine` | Function executed by the thread      |
| `arg`           | Argument to the thread function      |

---

## 🧩 Other Thread Functions
| Function                 | Purpose                           |
| ------------------------ | --------------------------------- |
| `pthread_join(th, NULL)` | Waits for thread `th` to complete |
| `pthread_exit(NULL)`     | Terminates calling thread         |
| `pthread_self()`         | Returns thread ID                 |
| `pthread_equal(t1, t2)`  | Compares thread IDs               |
---
## ⚙️ Advantages of Multithreading

- Efficient CPU utilization

- Reduced execution time

- Resource sharing (global memory)

---

## 🧠 Summary

Multithreading allows programs to perform multiple operations simultaneously — improving performance and responsiveness.

---

> ✅ Threads are light-weight processes that bring parallelism into application-level programming.

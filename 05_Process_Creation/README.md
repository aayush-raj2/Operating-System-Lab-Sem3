# ⚙️ Experiment 5 — Process Creation

### 👨‍💻 Author: **Aayush Raj**
### 📚 Course: 21CSC202J — Operating Systems Lab  
### 🧠 Objective:
To create new processes using the **`fork()`** system call and understand related process functions like  
**`getpid()`**, **`getppid()`**, **`wait()`**, and **`vfork()`** in Linux.

---

## 🧩 Overview
A **process** is a program in execution.  
In Linux, new processes are created using the **`fork()`** system call which duplicates the calling process.  
Both parent and child execute independently with separate address spaces.

---

## ⚙️ Related Functions

| Function | Description |
|-----------|--------------|
| `fork()` | Creates a child process |
| `vfork()` | Creates child sharing same address space |
| `getpid()` | Returns current process ID |
| `getppid()` | Returns parent process ID |
| `wait()` | Makes parent wait until child finishes |

---

## 📂 Folder Contents

| File | Description |
|------|--------------|
| `Q1_ForkExample.c` | Demonstrates fork() basics |
| `Q2_VForkExample.c` | Demonstrates vfork() |
| `Q3_SRMIST_Count.c` | Finds how many times “SRMIST” prints |
| `Q4_Sum_Even_Odd.c` | Parent sums even, child sums odd numbers |
| `Q5_ForkLoop_Count.c` | Finds total processes from a loop with fork() |
| `Q6_Print_PID.c` | Prints parent and child process IDs |
| `Q7_Fork_Complex.c` | Analyzes a complex fork condition |

---

## 🧠 Learning Outcomes
- Understand process creation hierarchy in Linux  
- Differentiate between `fork()` and `vfork()`  
- Implement parent-child synchronization with `wait()`  
- Analyze process count after multiple forks  

---

> ✨ *Every time you use fork(), you create a new world in your OS memory tree.*

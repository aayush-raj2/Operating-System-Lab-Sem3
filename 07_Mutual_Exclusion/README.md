# 🔒 Experiment 7 — Mutual Exclusion Using Semaphores (System V & POSIX)

### 👨‍💻 Author: Aayush Raj  
### 📚 Course: 21CSC202J — Operating Systems Lab  
### 🎯 Aim  
To implement **process synchronization** using:  
1. **System V Semaphore (IPC) – Mutual Exclusion**  
2. **POSIX Semaphore – Thread Synchronization with Shared Variable**  

---

## 🧩 Overview

This experiment demonstrates three approaches to synchronization:

### **1️⃣ System V Semaphores (IPC)**
- Used for **process-level synchronization**
- Uses **semget(), semctl(), semop()**
- Demonstrates **mutual exclusion** between parent and child processes

### **2️⃣ POSIX Semaphores (pthread + semaphore.h)**
- Used for **thread-level synchronization**
- Uses **sem_init(), sem_wait(), sem_post(), sem_destroy()**
- Ensures only **one thread enters the critical section** at a time

### **🔵 Q3 — Reader–Writer Problem (Reader Preference)**
 
To implement the **Readers–Writers Problem** using:
- `pthread` threads
- binary semaphore (`sem_t`)
- mutex lock (`pthread_mutex_t`)

We use the **first-reader preference** approach:
- Many readers can read together ✔  
- Writer waits until all readers finish ❗  
- First reader blocks writer  
- Last reader unblocks writer  

---

## 📂 Folder Contents

| File | Description |
|------|-------------|
| `Q1_SystemV_MutualExclusion.c` | Parent–Child Process Synchronization using System V Semaphore |
| `Q2_POSIX_Semaphore_SharedVariable.c` | Thread Synchronization using POSIX Semaphores |
| `Q3_ReaderWriter_FirstReaderPreference.c` | Complete implementation of the reader–writer problem |
| `Notes.md` | Theory + System V & POSIX Semaphore explanations |
| `/Screenshots/` | Add output screenshots |

---

## ⚙️ Compilation & Execution

### **System V Semaphore**
```bash
gcc Q1_SystemV_MutualExclusion.c -o sysv
./sysv
```
### POSIX Semaphore + Threads
```bash
gcc Q2_POSIX_Semaphore_SharedVariable.c -lpthread -lrt -o posix
./posix
```
### Reader–Writer Problem
```bash
gcc Q3_ReaderWriter_FirstReaderPreference.c -lpthread -lrt -o rw
./rw
```
---

## 🧠 Learning Outcomes

- Understand semaphore operations (wait, signal)

- Implement mutual exclusion in processes & threads

- Use System V IPC and POSIX threading APIs

- Solve critical section problems safely

---

> ✨ Semaphores protect shared resources and prevent race conditions — essential for OS-level concurrency.


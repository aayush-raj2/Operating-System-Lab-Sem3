# Disk Scheduling Algorithms – FCFS, SCAN, C-SCAN

This repository contains C implementations of classical **Disk Scheduling Algorithms** used in Operating Systems to optimize disk head movement and reduce seek time.

---

## 🎯 Aim
To simulate and understand different disk scheduling algorithms:
- **FCFS (First Come First Served)**
- **SCAN (Elevator Algorithm)**
- **C-SCAN (Circular SCAN)**

---

## 🧠 Why Disk Scheduling?
Disk scheduling is responsible for deciding the order in which disk I/O requests are serviced.  
Efficient scheduling:
- Reduces **seek time**
- Improves **disk throughput**
- Enhances **overall system performance**

---

## 📌 Algorithms Overview

### 1️⃣ FCFS (First Come First Served)
- Requests are serviced in the order they arrive.
- Simple and fair.
- Poor performance due to high seek time.

### 2️⃣ SCAN (Elevator Algorithm)
- Disk head moves in one direction servicing requests.
- Reverses direction at the end.
- Provides better performance than FCFS.

### 3️⃣ C-SCAN (Circular SCAN)
- Disk head moves in one direction only.
- After reaching the end, it jumps to the beginning.
- Provides uniform waiting time.

---

## 📂 Files Included

| File Name | Description |
|---------|-------------|
| `fcfs_disk.c` | FCFS Disk Scheduling Algorithm |
| `scan_disk.c` | SCAN Disk Scheduling Algorithm |
| `cscan_disk.c` | C-SCAN Disk Scheduling Algorithm |

---

## 🧪 Sample Input
Enter number of disk requests: 8  
Enter request sequence: 98 183 37 122 14 124 65 67  
Enter initial head position: 53  
Enter disk size: 200  

---

## 📤 Sample Output (SCAN)
Total Head Movement = 236  

---

## 👨‍💻 Author
Aayush Raj  
Operating Systems Lab – Disk Scheduling Algorithms

---

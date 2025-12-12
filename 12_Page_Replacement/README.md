# Page Replacement Algorithms — FIFO, LRU, LFU

This repository contains C programs that simulate the three fundamental **page replacement algorithms** used in Operating Systems:

- **FIFO (First-In First-Out)**
- **LRU (Least Recently Used)**
- **LFU (Least Frequently Used)**

These techniques help the OS decide which memory page should be replaced when a new page must be loaded into a limited number of frames.

---

## 📌 Algorithm Overview

### **1️⃣ FIFO — First In First Out**
The oldest loaded page is replaced first.  
Simple but may cause many page faults.

---

### **2️⃣ LRU — Least Recently Used**
Replaces the page that has not been used for the longest time.  
More accurate and efficient than FIFO.

---

### **3️⃣ LFU — Least Frequently Used**
Replaces the page with the **least number of references**.  
If frequency ties, the oldest among them gets replaced.

---

## 📁 Files Included

| File | Description |
|------|-------------|
| `fifo.c` | FIFO page replacement implementation |
| `lru.c`  | LRU page replacement implementation |
| `lfu.c`  | LFU page replacement implementation |

---

## 🧪 Sample Input
Enter number of frames: 3  
Enter number of pages: 12  
Enter pages: 1 3 0 3 5 6 3 3 6 3 1 0  

---

## 📤 Sample Output (FIFO Example)
Page Faults = 9  

---

## 👨‍💻 Author
Aayush Raj  
Operating Systems Lab — Page Replacement Algorithms  

# Memory Allocation Techniques — First Fit, Best Fit, Worst Fit

This repository contains C programs that simulate three classical **contiguous memory allocation algorithms** used in Operating Systems:

- **First Fit**
- **Best Fit**
- **Worst Fit**

Each algorithm takes memory block sizes and process sizes as input and performs allocation based on its strategy.

---

## 📌 Algorithms Explained

### **1️⃣ First Fit**
Allocates the *first* available block that is large enough for the process.

### **2️⃣ Best Fit**
Allocates the block with the *minimum possible size* that can still fit the process.

### **3️⃣ Worst Fit**
Allocates the *largest available block* to the process.

---

## 📁 Files

| File | Description |
|------|-------------|
| `first_fit.c` | Implementation of First Fit memory allocation |
| `best_fit.c` | Implementation of Best Fit memory allocation |
| `worst_fit.c` | Implementation of Worst Fit memory allocation |

---

## 🧪 Sample Input

Enter number of memory blocks: 5  
Enter block sizes: 100 500 200 300 600  

Enter number of processes: 4  
Enter process sizes: 212 417 112 426  


---

## 📤 Sample Output (First Fit)

Process 1 -> Block 2  
Process 2 -> Block 5  
Process 3 -> Block 1  
Process 4 -> Block Allocation Failed  

---

## 👨‍💻 Author
Aayush Raj  
Operating Systems Lab — Memory Allocation Algorithms

---

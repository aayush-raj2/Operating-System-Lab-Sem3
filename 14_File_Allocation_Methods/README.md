# File Allocation Strategies in Operating Systems

This repository contains C programs that simulate **File Allocation Strategies**
used by Operating Systems to manage disk storage efficiently.

The following allocation methods are implemented:

- Sequential File Allocation
- Indexed File Allocation

These programs are designed for **Operating Systems laboratory experiments**
and follow standard academic input/output formats.

---

## 📌 1. Sequential File Allocation

### 🔹 Description
In Sequential File Allocation, all blocks of a file are stored **contiguously**
on the disk. The operating system allocates a sequence of free blocks to a file.

### 🔹 Advantages
- Simple to implement
- Fast access for sequential reading

### 🔹 Disadvantages
- External fragmentation
- Difficult to grow files dynamically

---

## 📌 2. Indexed File Allocation

### 🔹 Description
In Indexed File Allocation, each file has a special **index block** that stores
the addresses of all disk blocks allocated to the file. The blocks need not be contiguous.

### 🔹 Advantages
- No external fragmentation
- Supports direct access

### 🔹 Disadvantages
- Extra overhead for index block
- Index block size limits file size

---

## 🧪 How to Compile & Run

```bash
gcc sequential_allocation.c -o sequential
./sequential

gcc indexed_allocation.c -o indexed
./indexed
```
---

## 👨‍💻 Author
Aayush Raj  
Operating Systems Lab – File Allocation Strategies  


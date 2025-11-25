# Experiment 09 – CPU Scheduling Algorithms  
### FCFS • SJF • Priority (NP & P) • Round Robin

This experiment implements the core CPU scheduling algorithms used by modern
Operating Systems. Each algorithm calculates:

- Waiting Time (WT)
- Turnaround Time (TAT)
- Average WT & TAT
- Scheduling order of processes

---

## 📌 Algorithms Implemented

### 1. FCFS – First Come First Serve  
- Non–preemptive  
- Processes are executed in the same order as they arrive  

### 2. SJF – Shortest Job First (Non-Preemptive)  
- Process with the lowest burst time is picked next  

### 3. Priority Scheduling (Non-Preemptive)  
- Lower priority number = Higher priority  
- CPU assigned based on priority  

### 4. Priority Scheduling (Preemptive)  
- Highest priority process can interrupt currently running process  

### 5. Round Robin  
- Time Slice (Quantum) based preemptive algorithm  

---

## 🧪 Sample Outputs Included

Each program prints:
- Process Table  
- Calculated Waiting & Turnaround Time  
- Average values  

---

## 🖥️ How to Compile & Run
```bash
gcc filename.c -o out
./out
```



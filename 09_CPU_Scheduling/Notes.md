# CPU Scheduling – Complete Notes

## 1. Introduction
CPU Scheduling is the technique of selecting which process from the Ready Queue will run on the CPU.  
It is used to:
- Maximize CPU Utilization  
- Increase Throughput  
- Reduce Waiting & Turnaround Time  
- Improve Response Time  

Schedulers:
- **Long-term scheduler** – job admission  
- **Short-term scheduler** – CPU scheduling  
- **Medium-term scheduler** – swapping  

---

## 2. Important Terminology

### **Burst Time (BT)**
Time required by a process for CPU execution.

### **Arrival Time (AT)**
Time at which a process enters the ready queue.

### **Completion Time (CT)**
Time when a process finishes execution.

### **Turnaround Time (TAT)**

TAT = Completion Time – Arrival Time


### **Waiting Time (WT)**

WT = Turnaround Time – Burst Time


### **Response Time (RT)**

RT = First time CPU is allocated – Arrival Time


---

## 3. CPU Scheduling Algorithms

---

## 🟦 1. FCFS – First Come First Serve (Non-Preemptive)

### **Type:** Non-Preemptive  
### **Rule:** Process that arrives first is executed first.  

### Algorithm:
1. Sort all processes by arrival time  
2. For first process → `WT = 0`  
3. For each next process:  
`WT[i] = BT[i-1] + WT[i-1]`
4. Compute TAT:  
`TAT[i] = BT[i] + WT[i]`
### Pros:
- Simple  
- Fair (based on arrival order)
### Cons:
- Convoy effect  
- Poor performance for long processes  

---

## 🟩 2. SJF – Shortest Job First (Non-Preemptive)

### **Type:** Non-Preemptive  
### **Rule:** Process with smallest burst time runs first.

### Algorithm:
1. Sort processes in ascending order of BT  
2. First process → `WT = 0`  
3. Next:  
`WT[i] = WT[i-1] + BT[i-1]`
4. Compute TAT  
### Pros:
- Minimum average waiting time  
### Cons:
- Starvation of large BT processes  
- Future burst time must be known  

---

## 🟧 3. SJF – Preemptive (SRTF – Shortest Remaining Time First)

### **Type:** Preemptive  
### **Rule:** Process with smallest *remaining* burst time executes next.

### Characteristics:
- If a new process arrives with smaller BT → preemption occurs
- Ideal for real-time tasks

### Pros:
- Better response time  
- Lower average waiting time  

### Cons:
- Starvation  
- High overhead  

---

## 🟪 4. Priority Scheduling (Non-Preemptive)

### **Type:** Non-Preemptive  
### **Rule:** Highest priority process runs first.

### Procedure:
1. Sort processes by priority  
2. Execute highest priority  
3. Compute WT and TAT like SJF

### Pros:
- Useful when some jobs are more important  

### Cons:
- Starvation  
- Requires aging mechanism  

---

## 🟥 5. Priority Scheduling (Preemptive)

### **Type:** Preemptive  
### **Rule:** A new process with higher priority preempts the running process.

### Pros:
- Good response for high priority processes  

### Cons:
- Starvation likely  
- Overhead due to preemption  

---

## 🟨 6. Round Robin (RR)

### **Type:** Preemptive  
### **Rule:** Each process gets fixed **time quantum (q)**.

### Algorithm:
1. Ready queue is circular  
2. Execute each process for `min(q, remaining BT)`  
3. If process not complete → push to end of queue  
4. Repeat until all processes finish  

### Pros:
- Fair  
- Good for time-sharing systems

### Cons:
- Too small quantum → high context switching  
- Too large → behaves like FCFS  

---

## 4. Comparison Table

| Algorithm | Type | Preemptive | Starvation | Best Used For |
|----------|------|------------|------------|----------------|
| FCFS | Non-preemptive | No | No | Batch systems |
| SJF | Non-preemptive | No | Yes | CPU-bound tasks |
| SRTF | Preemptive | Yes | Yes | Real-time apps |
| Priority Non-P | Non-preemptive | No | Yes | Priority tasks |
| Priority P | Preemptive | Yes | Yes | Soft real-time |
| Round Robin | Preemptive | Yes | No | Time-sharing systems |

---

## 5. Gantt Chart Format

| P1 | P2 | P3 |  
 0    5    12   20


---

## 6. Sample Output (General Example)

### FCFS Example:

Process BT WT TAT
P1 5 0 5
P2 3 5 8
P3 8 8 16

Average WT = 4.33
Average TAT = 9.66


### SJF Example:  
Order of execution: P2 → P1 → P3


### RR Example:  

Time Quantum = 2
Execution Order: P1 P2 P3 P1 P2 P3 ...


---

## 7. Advantages & Disadvantages (Summary)

### **FCFS**
- ✔ Fair, simple  
- ✘ Convoy effect  

### **SJF**
- ✔ Best average waiting time  
- ✘ Starvation possible  

### **Priority**
- ✔ Important tasks first  
- ✘ Starvation without aging  

### **Round Robin**
- ✔ Fair and responsive  
- ✘ High overhead if quantum is small  

---

## 8. Viva Questions

1. What is burst time?  
2. Which algorithm gives minimum average waiting time?  
3. What is starvation?  
4. What is aging?  
5. What is time quantum?  
6. Difference between SJF and SRTF?  
7. In which scheduling is response time best? (Answer: SRTF)

---

## 9. Conclusion

CPU Scheduling plays a critical role in OS performance.  
Different algorithms optimize different parameters such as waiting time, response time, fairness, and CPU utilization.

Choosing the correct scheduling algorithm depends on system goals  
(batch, real-time, interactive, time-sharing).




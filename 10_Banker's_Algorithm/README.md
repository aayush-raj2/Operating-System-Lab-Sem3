# 🧪 Experiment 10: Banker's Algorithm – Deadlock Avoidance

## 🎯 AIM
To simulate the Banker's Algorithm for Deadlock Avoidance.

---

## 📝 DESCRIPTION
Deadlock occurs when multiple processes compete for resources and wait forever.  
The Banker's Algorithm ensures the system *never enters deadlock* by:

✔ Checking that every resource request results in a **safe state**  
✔ Granting the request *only if safe*  
✔ Otherwise forcing the process to wait  

---

## 🧩 IMPORTANT MATRICES

| Matrix | Meaning |
|--------|---------|
| **Max[i][j]** | Maximum demand of process Pi for resource Rj |
| **Allocation[i][j]** | How many resources Pi currently holds |
| **Need[i][j] = Max - Allocation** | Remaining resources required |
| **Available[j]** | Resources available in the system |

---

## 🛡 Safety Algorithm (Safe State Check)

1. Initialize:
Work = Available  
Finish[i] = False

2. Find a process Pi such that:
Finish[i] == False AND Need[i] <= Work

3. Pretend Pi finishes:
Work += Allocation[i]  
Finish[i] = True

4. If all Finish[i] become True → SAFE  
5. If no process can be found → UNSAFE

---

## 🔄 Resource Request Algorithm

1. **Check Request ≤ Need**  
2. **Check Request ≤ Available**  
3. Pretend allocation  
4. Re-run Safety Algorithm  
5. If safe: **Grant**  
Else: **Rollback**

---

## 📌 Program File
See: **bankers.c**

---

## 📁 Sample Input

Allocation:
0 1 0  
2 0 0  
3 0 2  
2 1 1  
0 0 2  

Max:  
7 5 3  
3 2 2  
9 0 2  
2 2 2  
4 3 3  

Available:  
3 3 2  


---

## 📄 Sample Output

System is in SAFE STATE.  
Safe Sequence: P1 P3 P4 P0 P2  


---

## ❓ Viva Questions

1. What is Deadlock?  
2. What is Safe State?  
3. Define Need Matrix.  
4. Difference between deadlock prevention and avoidance?  
5. Why is this algorithm called "Banker's Algorithm"?  

---

## ✅ Conclusion
Banker’s Algorithm ensures a safe sequence for resource allocation, preventing deadlock by validating every request before allocation.


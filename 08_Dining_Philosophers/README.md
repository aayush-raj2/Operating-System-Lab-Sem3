# 🍽️ Experiment 08 — Dining Philosophers Problem

**Course:** 21CSC202J — Operating Systems Lab  
**Author:** Aayush Raj

## Aim
To simulate solutions to the **Dining Philosophers Problem** and demonstrate synchronization and deadlock avoidance using semaphores and threads.

## Description
Five philosophers sit around a circular table. Each philosopher thinks and occasionally tries to eat. To eat they need the two adjacent chopsticks (left & right). Chopsticks are shared resources. Without proper coordination, a circular wait can cause **deadlock**.

This implementation uses:
- One semaphore per chopstick (`chopstick[5]`)
- A `room` semaphore limiting concurrent philosophers to 4 (prevents circular wait → avoids deadlock)

## Files
- `dining_philosophers.c` — Complete program (POSIX threads + semaphores)
- `Notes.md` — Explanation of algorithm and concepts
- `sample_output.txt` — Example execution output

## Compile & Run
```bash
gcc dining_philosophers.c -o dining -lpthread
./dining
```

---

> Output order can vary each run because threads are scheduled by OS.

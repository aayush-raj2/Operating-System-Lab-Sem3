# Notes — Dining Philosophers (Experiment 08)

## Problem Summary
- N philosophers sit around a table with N chopsticks.
- To eat, philosopher `i` needs chopsticks `i` (left) and `(i+1)%N` (right).
- If each philosopher picks up their left chopstick at the same time and waits for the right, deadlock happens.

## Goals
- Ensure **mutual exclusion** on each chopstick (only one philosopher uses a chopstick).
- Avoid **deadlock**.
- Aim for **no starvation** if possible.

## Common Solutions
1. **Resource hierarchy** — impose ordering on resources (e.g., always pick lower-index chopstick first) — avoids circular wait.
2. **Limit concurrency (room semaphore)** — allow at most N-1 philosophers to try to pick up chopsticks. This prevents circular wait and is simple to implement.
3. **Asymmetric strategy** — odd philosophers pick left then right, even pick right then left — can avoid deadlocks.
4. **Monitor-based solutions** — use higher-level constructs (mutex + condition variables).

## This Implementation
- Uses **`sem_t chopstick[5]`** (binary semaphores) to protect each chopstick.
- Uses **`sem_t room`** initialized to 4 — limits philosophers simultaneously trying to pick chopsticks to 4 (for N=5).
- Each philosopher:
  1. `sem_wait(&room)` — enters room (ensures not all 5 compete)
  2. `sem_wait(&chopstick[left])`
  3. `sem_wait(&chopstick[right])`
  4. Eat (critical section)
  5. `sem_post` on right & left chopsticks
  6. `sem_post(&room)` — leaves room

## Complexity & Behavior
- Avoids deadlock by preventing circular wait: at least one philosopher will be able to get two chopsticks.
- Starvation is unlikely but possible under pathological scheduling — for lab experiments this solution is acceptable.
- The program is deterministic in logic but non-deterministic in runtime ordering (thread scheduling).

## Compilation note
- Link pthread library: `-lpthread`
- No special privileges required.


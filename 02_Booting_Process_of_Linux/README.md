# ⚙️ Experiment 2 — Booting Process of Linux

### 👨‍💻 Author: **Aayush Raj**
### 🧠 Objective:
To study and understand the **booting process of the Linux operating system**,  
including all stages from **power-on to login**.

---

## 🔍 Theory
The **Linux boot process** involves six main stages:

| Stage | Component | Description |
|--------|------------|-------------|
| 1️⃣ | **BIOS / UEFI** | Performs Power-On Self-Test (POST) and detects boot device |
| 2️⃣ | **MBR / GPT** | Loads the bootloader (GRUB) |
| 3️⃣ | **GRUB (Bootloader)** | Allows kernel selection and starts kernel loading |
| 4️⃣ | **Kernel Loading** | Initializes drivers and mounts root filesystem |
| 5️⃣ | **Init / systemd** | Starts background services (PID = 1) |
| 6️⃣ | **Runlevel / Targets** | Launches user processes and GUI/CLI login |

---

## ⚙️ Commands to Explore Boot Process
```bash
dmesg | less             # View boot-time kernel messages
systemctl list-units     # Display running services
cat /proc/cmdline        # Kernel parameters
ls /boot                 # Kernel & GRUB files
```
---

## 📘 Folder Contents
| File                      | Description                                 |
| ------------------------- | ------------------------------------------- |
| `Notes.md`                | Detailed explanation of boot process stages |
| `Boot_Stages_Diagram.png` | Visual diagram of Linux boot sequence       |

---
## 🧠 Key Learnings

- GRUB (GNU GRand Unified Bootloader) manages multi-boot systems.

- Kernel mounts root filesystem and starts init.

- Init/systemd is the parent of all processes (PID 1).

---
> 🧩 Understanding Linux boot internals is essential for debugging startup issues and managing system initialization.

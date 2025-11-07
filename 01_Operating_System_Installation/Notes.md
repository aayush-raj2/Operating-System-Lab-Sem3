# 🧩 Experiment 1 — Operating System Installation

## 🎯 Aim
To install and configure **Ubuntu Linux** on a system using VMware or as a dual boot option.

---

## 🧠 Theory
An **Operating System (OS)** is system software that manages hardware, software resources, and provides services to applications.  
In this experiment, we install **Ubuntu Linux**, a popular open-source OS based on Debian.

**Two ways to install:**
1. **Dual Boot:** Installing Ubuntu alongside Windows on your physical hard disk.
2. **Virtual Machine:** Installing inside VMware/VirtualBox for safe isolated testing.

---

## ⚙️ Steps Summary
1. Install VMware Workstation or VirtualBox.  
2. Download Ubuntu ISO.  
3. Create a new virtual machine and attach the ISO.  
4. Configure user details, RAM, and disk space.  
5. Complete installation and reboot into Ubuntu.

---

## 💡 Commands to Verify Installation
```bash
lsb_release -a      # Displays Ubuntu version
uname -a            # Displays kernel version
df -h               # Checks disk usage
free -m             # Shows memory usage
```
---

## 🧩 Advantages of Linux in OS Lab

- Open-source kernel for experimentation

- Built-in C compiler (GCC)

- Access to system calls and multitasking features

---
> ✨ Ubuntu installation sets up your environment for all further experiments — from system calls to memory management.

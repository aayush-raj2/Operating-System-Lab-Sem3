# ⚙️ Experiment 2 — Booting Process of Linux

## 🎯 Aim
To study and analyze the **booting process of Linux**,  
understanding each stage that occurs from powering on the system until reaching the login prompt.

---

## 🧩 Stages of Booting Process

### 1️⃣ **BIOS / UEFI (Power-On Self Test)**
- Checks hardware functionality.
- Detects bootable devices.
- Passes control to MBR or EFI partition.

### 2️⃣ **MBR (Master Boot Record)**
- Contains partition table and bootloader information.
- Loads GRUB (bootloader) into memory.

### 3️⃣ **GRUB (Bootloader)**
- Allows user to select OS/kernel.
- Loads kernel image into memory and transfers control.

### 4️⃣ **Kernel Initialization**
- Loads hardware drivers and initializes system.
- Mounts root filesystem `/`.

### 5️⃣ **Init / systemd**
- First user-space process.
- Starts background services and system processes.
- PID of `init` or `systemd` is always **1**.

### 6️⃣ **Runlevel / Targets**
- Determines mode of operation (multi-user, GUI, recovery, etc.).
- Controlled by `/etc/inittab` or `systemctl`.

---

## ⚙️ Useful Commands
```bash
dmesg | head -20
ls /boot
cat /proc/version
systemctl list-units
```

---

## 🧠 Key Notes

- Bootloader configuration: /boot/grub/grub.cfg

- Kernel image location: /boot/vmlinuz-*

- Init process spawns all system services.

---
## 💡 Real-World Relevance

System administrators use these stages to:

- Troubleshoot boot failures.

- Manage startup processes.

- Optimize system load time.

---
> ✨ Every time you press the power button, this process silently brings your OS to life.

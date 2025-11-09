# 💻 Experiment 3 — Basic, Filter, and Admin Commands

## 🎯 Aim
To execute and understand **basic Linux commands**, **filter commands**, and **administrative commands** using the terminal.

---

## ⚙️ Procedure

### 🅐 Basic Linux Commands
#### 1️⃣ Display & System Commands
| Command | Description |
|----------|-------------|
| `echo SRM` | Displays string “SRM” |
| `clear` | Clears the terminal screen |
| `date` | Displays current date and time |
| `cal 2003` | Displays calendar for year 2003 |
| `cal 6 2003` | Displays calendar for June 2003 |
| `passwd` | Changes user password |

---

### 🅑 Working with Files
| Command | Description |
|----------|-------------|
| `ls` | Lists files in directory |
| `ls -l` | Long listing with permissions |
| `ls -a` | Includes hidden files |
| `cat > f1` | Creates file f1 |
| `cat f1` | Displays file content |
| `wc f1` | Displays count of lines, words & characters |
| `wc -c f1` | Displays number of characters |
| `wc -w f1` | Displays number of words |
| `wc -l f1` | Displays number of lines |
| `cp f1 f2` | Copies file f1 into f2 |
| `mv f1 f2` | Renames f1 to f2 |
| `rm f1` | Removes file f1 |
| `head -5 f1` | Displays first 5 lines |
| `tail -5 f1` | Displays last 5 lines |

---

### 🅒 Working with Directories
| Command | Description |
|----------|-------------|
| `mkdir elias` | Creates directory “elias” |
| `rmdir elias` | Removes empty directory |
| `cd elias` | Moves into directory |
| `pwd` | Prints working directory |
| `echo $LOGNAME` | Displays login name |
| `echo $PATH` | Displays current PATH variable |

---

### 🅓 File Permissions
`chmod` is used to change file access permissions.

**Method 1 (Symbolic mode):**

chmod [ugoa][+/-][rwx] filename  
Example:
```
chmod ug+rw f1
```
**Method 2 (Octal mode):**  
Example:  
```
chmod 754 f1
```
Meaning:
| Digit | Permissions | Description |
|--------|--------------|-------------|
| 7 | rwx | User: read, write, execute |
| 5 | r-x | Group: read, execute |
| 4 | r-- | Others: read only |

---

## 🅔 Filter Commands
| Command | Description |
|----------|-------------|
| `cut -c1-5 filename` | Cuts first 5 characters from each line |
| `cut -d":" -f1 filename` | Cuts first field using ':' as delimiter |
| `grep pattern filename` | Searches pattern in file |
| `grep -i pattern filename` | Case-insensitive search |
| `grep -v pattern filename` | Displays lines NOT containing pattern |
| `sort filename` | Sorts contents alphabetically |
| `sort -r filename` | Sorts in descending order |
| `sort -u filename` | Removes duplicates |

---

## 🅕 Administrative Commands
| Command | Description |
|----------|-------------|
| `who` | Lists logged-in users |
| `whoami` | Displays current username |
| `id` | Displays user and group ID |
| `ps` | Displays running processes |
| `top` | Real-time system activity |
| `kill PID` | Kills process using PID |
| `chmod` | Change file permissions |
| `chown user file` | Change file owner |
| `sudo` | Execute command with admin rights |
| `passwd` | Change password |
| `df -h` | Show disk usage |
| `du -h` | Show directory sizes |

---

## 🧠 Conclusion
Through this experiment, we learned to:
- Navigate directories and manage files  
- Modify and view file permissions  
- Use filters for text processing  
- Handle system and user management commands  

> ✅ *These commands form the base for all future system programming and shell scripting tasks.*

# 🧩 Experiment 3 — Shell Programming Concepts

## 🎯 Aim
To write and execute shell programs demonstrating variable usage, conditions, loops, and file operations.

---

## ⚙️ Procedure
1. Create script using an editor (e.g. `vi filename.sh`)
2. Make it executable → `chmod +x filename.sh`
3. Execute using `./filename.sh`

---

## 💡 Hints
- **No spaces** around assignment (`sum=0`)
- **Single quotes** (' ') ignore special characters  
- **Double quotes** (" ") allow variable expansion  
- **Back quotes (` `)** or `$( )` perform command substitution  
- Arithmetic → `i=$((i+1))` or `i=$(expr $i + 1)`  
- Command-line args → `$1 $2 …`, `$#` = count, `$*` = all  
- Use `read` to accept user input

---

## 🔹 Condition Syntax
```bash
if [ condition ]
then
   commands
fi
```
Example:
```bash
if [ $a -gt $b -a $a -gt $c ]
then
   echo "$a is largest"
fi
```
--- 
## 🔹 Case Syntax
```bash
case $var in
   1) echo "Option 1" ;;
   2) echo "Option 2" ;;
   *) echo "Invalid" ;;
esac
```
---
## 🔹 Loops
```bash
for color in red green blue
do
 echo "Color: $color"
done
```
```bash
count=1
while [ $count -le 5 ]
do
 echo "Count is $count"
 count=$((count+1))
done
```
---
## 🔹 Operators

- Relational : -lt -le -gt -ge -eq -ne

- Logical : -a (AND) -o (OR) ! (NOT)

---

## 🧠 Summary

Mastering conditional and loop constructs enables writing automation scripts for process monitoring, file maintenance, and system tasks.

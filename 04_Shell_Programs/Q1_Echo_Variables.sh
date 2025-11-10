# Q1_Echo_Variables.sh
# Author: Aayush Raj
# Description: Demonstrates variables, quoting, and command substitution.

num=10
x=*
y=$(date)
a="Hello, 'he said'"

echo num
echo $num
echo $x
echo '$x'
echo "$x"
echo $y
echo $(date)
echo $a
echo \$num
echo \$$num

# 🖥️ Sample Output:
# num
# 10
# * (list of files)
# $x
# * (list of files)
# <current date>
# Hello, 'he said'
# $num
# <no variable with name 10, so blank>

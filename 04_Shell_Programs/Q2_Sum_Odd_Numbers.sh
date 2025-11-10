# Q2_Sum_Odd_Numbers.sh
# Author: Aayush Raj
# Description: Sum of odd numbers up to n.

echo "Enter value for n"
read n
sum=0
i=1

while [ $i -le $n ]
do
  sum=$((sum + i))
  i=$((i + 2))
done

echo "Sum of odd numbers up to $n is $sum"

# 🖥️ Sample Output:
# Enter value for n
# 10
# Sum of odd numbers up to 10 is 25

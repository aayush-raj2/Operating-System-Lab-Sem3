# Q5_Search_Pattern.sh
# Author: Aayush Raj
# Description: Search for a pattern in all files of current directory.

if [ $# -eq 0 ]
then
  echo "Usage: ./Q5_Search_Pattern.sh <pattern>"
  exit 1
fi

pattern=$1

for file in *
do
  if [ -f "$file" ]
  then
    if grep -q "$pattern" "$file"
    then
      echo "Pattern '$pattern' found in $file"
    else
      echo "Pattern '$pattern' not found in $file"
    fi
  fi
done

# 🖥️ Sample Output:
# ./Q5_Search_Pattern.sh SRM
# Pattern 'SRM' found in readme.txt
# Pattern 'SRM' not found in notes.md

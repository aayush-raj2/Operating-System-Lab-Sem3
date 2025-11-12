# Q4_List_Subdirectories.sh
# Author: Aayush Raj
# Description: Lists subdirectories in current directory.

echo "Subdirectories in current directory are:"
for item in *
do
  if [ -d "$item" ]
  then
    echo "$item"
  fi
done

# 🖥️ Sample Output:
# Subdirectories in current directory are:
# Documents
# Downloads
# Pictures

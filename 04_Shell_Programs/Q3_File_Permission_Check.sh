# Q3_File_Permission_Check.sh
# Author: Aayush Raj
# Description: Checks execute permission and adds it if missing.

echo "Enter filename:"
read file

if [ -x $file ]
then
  echo "File $file already has execute permission."
else
  chmod +x $file
  echo "Execute permission added to $file."
fi

# 🖥️ Output Example:
# Enter filename:
# test.sh
# Execute permission added to test.sh

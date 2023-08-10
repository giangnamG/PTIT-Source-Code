#!/usr/bin/python
import os, sys
code_name = sys.argv[1].upper()
files = os.listdir('.')

for file in files:
    if code_name in file.upper():
        executable_name = file.replace('.cpp','')
        print("Programming is running ................")
        os.system(f"g++ {file} -o {executable_name}")
        os.system(executable_name)
        break

## monty: A custom Monty bytecode interpreter
Monty is a scripting language that is first compiled into Monty bytecode like Python. It relies on a unique stack with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files build in the C language.
# Description
Our interpreter can be run as either a stack (LIFO) or queue (FIFO). Mode can be switched mid-script. The interpreter can handle a variety of Monty opcodes, including printing, mathematical operations, and more.

# Compiling:
gcc -Wall -Werror -Wextra -pedantic *.c -o monty
# Run the interpreter on a file:
./monty file.m

# 📘 Authors
- Eya Nani - [Eya Nani](https://www.linkedin.com/in/eyanani/)
- Hadir Jenni - [Hadir Jenni](https://www.linkedin.com/in/hadir-jenni/)

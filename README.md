# Experiment 6 - Looping Statements (For, While, and Do-While) in C++

---

## Aim
- To explore the use of `for`, `while`, and `do-while` loops in C++.
- To implement examples such as:
    1.  Printing a star pattern.
    2.  Reversing a number.
    3.  Creating a password masking and validation system.
    4.  Generating a plus (+) pattern.

---

## Tools Used
- Visual Studio Code
- MinGW-w64 with g++ Compiler

---

## Theory
Loops in C++ are control flow structures that allow the repeated execution of a block of code. They are used to automate repetitive tasks, iterate over collections or ranges, and simplify complex algorithmic operations.

- **`for` Loop:** Used when the number of iterations is known beforehand. It includes initialization, a condition check, and an increment/decrement expression in its declaration, making it ideal for counter-controlled loops.

- **`while` Loop:** Used when the number of iterations is not known in advance. The condition is checked *before* each iteration of the loop body. If the condition is true, the block executes; if false, the loop terminates.

- **`do-while` Loop:** Similar to the `while` loop, but it guarantees the loop body will run *at least once*. This is because the condition is checked *after* the execution of the block. It's perfect for input validation and menu-driven programs.

| Feature               | `for` Loop                             | `while` Loop                        | `do-while` Loop                      |
| --------------------- | -------------------------------------- | ----------------------------------- | ------------------------------------ |
| **Condition Check** | Before loop starts                     | Before loop starts                  | After loop body executes             |
| **Use Case** | When iterations are known              | When condition is evaluated before entry | When loop must run at least once     |
| **Executes At Least Once?** | No                                     | No                                  | Yes                                  |

---

## Algorithm / Logic

### Program 1: Inverse Right Triangle Pattern
1.  **Start**
2.  Prompt the user to enter the height of the triangle, `n`.
3.  Use an outer `for` loop that iterates from `row = n` down to `1`.
4.  Inside, use an inner `for` loop that iterates from `col = 1` up to the current `row`.
5.  In the inner loop, print a `*`.
6.  After the inner loop finishes, print a newline character to move to the next row.
7.  **End**

### Program 2: Reverse a Number (e.g., PRN)
1.  **Start**
2.  Prompt the user to enter an integer, `PRN`.
3.  Initialize a variable `reversed_num` to 0.
4.  Use a `while` loop that continues as long as `PRN > 0`.
5.  Inside the loop, extract the last digit: `digit = PRN % 10`.
6.  Append the digit to the reversed number: `reversed_num = (reversed_num * 10) + digit`.
7.  Remove the last digit from the original number: `PRN = PRN / 10`.
8.  After the loop, display `reversed_num`.
9.  **End**

### Program 3: Password Masking and Validation
1.  **Start**
2.  Initialize a string `password` with a predefined value.
3.  Set an attempt counter to 0 and max attempts to 3.
4.  Use a `do-while` loop to prompt the user to enter a password.
5.  For each character they type, display a `*` to mask the input.
6.  If the input matches the stored password, print "System Unlocked" and exit the loop.
7.  If it doesn't match, increment the attempt counter and show remaining attempts.
8.  The loop continues as long as the password is not correct and attempts are less than the max.
9.  After the loop, if attempts have exceeded the max, print "System Locked".
10. **End**

### Program 4: Plus (+) Pattern
1.  **Start**
2.  Prompt the user to enter an odd integer `n`.
3.  Calculate the middle index: `mid = n / 2`.
4.  Use an outer `for` loop for rows (`i` from 0 to `n-1`).
5.  Inside, use an inner `for` loop for columns (`j` from 0 to `n-1`).
6.  Use an `if` statement: if `i == mid` or `j == mid`, print a `*`.
7.  Else, print a space.
8.  After the inner loop, print a newline character.
9.  **End**

---

## Conclusion
Loops are fundamental to automating repetitive logic in C++. This experiment demonstrated how `for` loops are ideal for known iterations, `while` loops for dynamic conditions, and `do-while` loops for guaranteeing at least one execution. Mastering these structures is essential for reducing code redundancy and writing efficient, powerful programs.

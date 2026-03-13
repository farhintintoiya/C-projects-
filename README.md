---

# 🧮 Simple Calculator in C

A **simple command-line calculator** written in **C language** that performs basic arithmetic operations using the **switch-case statement**.
The calculator continues running until the user chooses to quit.

---

## 🚀 Features

* Perform basic operations:

  * ➕ Addition
  * ➖ Subtraction
  * ✖ Multiplication
  * ➗ Division
* Handles **division by zero error**
* Uses **switch-case control structure**
* Runs continuously using a **loop**
* User can exit the program by typing **`q`**

---

## 📚 Concepts Used

This project demonstrates the following **C programming concepts**:

* Switch Case
* do-while Loop
* Conditional Statements (`if-else`)
* User Input / Output
* Error Handling

---

## 📂 Project Structure

```
simple-calculator-c/
│
├── calculator.c
└── README.md
```

---

## ⚙ How to Run the Program

### 1️⃣ Compile the program

```bash
gcc calculator.c -o calculator
```

### 2️⃣ Run the program

```bash
./calculator
```

---

## 🖥 Example Output

```
Enter operator (+, -, *, /) or q to quit: +
Enter two numbers: 5 3
Result = 8.00

Enter operator (+, -, *, /) or q to quit: /
Enter two numbers: 10 0
Error: Division by zero not allowed

Enter operator (+, -, *, /) or q to quit: q
Calculator Closed.
```

---

## 🎯 Learning Purpose

This project is designed for **beginners learning C programming** to understand:

* Control flow using **switch-case**
* Looping with **do-while**
* Handling runtime errors
* Building simple command-line programs

---

## 📜 License

This project is open-source and available for learning purposes.

---

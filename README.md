# structured-programming-practice
# C Programming Exercises Solutions

This repository contains solutions to selected exercises from a C Programming textbook.  
Each program is written in standard C and focuses on fundamental programming concepts.

---

## 1. Arithmetic Operations

**Program Title:** Two Integer Arithmetic Calculator  
**Category:** Basic Arithmetic / Input-Output  

**Textbook Reference:** Chapter 2 – Exercise 2.16  

**Short Description:**  
The program asks the user for two integers and then calculates and displays their sum, product, difference, quotient, and remainder.

**Main Concepts Used:**  
- Variables (`int`)  
- `scanf` for input  
- Arithmetic operators (`+`, `-`, `*`, `/`, `%`)  
- `printf` for output  

**How the Program Works:**  
1. Reads two integers from the user.  
2. Performs the five basic arithmetic operations.  
3. Displays each result clearly labeled.

**Example Run:**
```
Enter the first integer: 17
Enter the second integer: 5

--- Results ---
Sum         = 22
Product     = 85
Difference  = 12
Quotient    = 3
Remainder   = 2
```

---

## 2. Three Numbers Analysis

**Program Title:** Sum, Average, Product, Smallest & Largest  
**Category:** Arithmetic + Decision Making  

**Textbook Reference:** Chapter 2 – Exercise 2.19  

**Short Description:**  
The program reads three different integers and displays their sum, average, product, the smallest value, and the largest value. Only single-selection `if` statements are used.

**Main Concepts Used:**  
- Integer and floating-point variables  
- Arithmetic operations  
- Single-selection `if` statements  
- Type casting for average  

**How the Program Works:**  
1. Reads three integers.  
2. Calculates sum, average (using float), and product.  
3. Uses separate `if` statements to find the smallest and largest numbers.  
4. Prints all results.

**Example Run:**
```
Enter three different integers: 13 27 14
Sum is 54
Average is 18
Product is 4914
Smallest is 13
Largest is 27
```

---

## 3. Mortgage Calculator

**Program Title:** Simple Mortgage Interest Calculator  
**Category:** Financial Calculation / Loops  

**Textbook Reference:** Chapter 3 – Exercise 3.17  

**Short Description:**  
The program calculates the total interest and the required monthly payment for a customer’s mortgage based on the loan amount, term (in years), and interest rate. It can process multiple customers.

**Main Concepts Used:**  
- Floating-point arithmetic  
- Simple interest formula  
- `while` loop for multiple customers  
- Sentinel-controlled input (negative amount to quit)  

**How the Program Works:**  
1. Repeatedly asks for mortgage amount, term, and interest rate.  
2. Calculates total interest using: `Amount × (Rate/100) × Years`.  
3. Adds interest to the principal to get the total amount payable.  
4. Divides by the number of months to get the monthly payment.  
5. Stops when a negative mortgage amount is entered.

**Example Run:**
```
Enter mortgage amount in dollars: 100000
Enter Mortgage term (in years): 10
Enter Interest rate: 5
The Monthly Payable Interest is: 1250.00

Enter mortgage amount in dollars: -1
```

---

## 4. Prime Numbers

**Program Title:** Prime Number Generator (1 to 100)  
**Category:** Nested Loops / Number Theory  

**Textbook Reference:** Chapter 4 – Exercise 4.12  

**Short Description:**  
The program finds and prints all prime numbers between 1 and 100.

**Main Concepts Used:**  
- Nested `for` loops  
- Boolean flag (`isPrime`)  
- Modulus operator (`%`) for divisibility checking  

**How the Program Works:**  
1. Loops through every number from 2 to 100.  
2. For each number, checks whether it has any divisor other than 1 and itself.  
3. If no divisor is found, the number is prime and is printed.

**Example Run:**
```
Prime numbers from 1 to 100 are:
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
```

---

## 5. Factorials

**Program Title:** Factorial Table (1 to 5)  
**Category:** Nested Loops / Mathematical Functions  

**Textbook Reference:** Chapter 4 – Exercise 4.14  

**Short Description:**  
The program calculates and displays the factorial of the integers from 1 to 5 in a neat tabular format.

**Main Concepts Used:**  
- Nested `for` loops  
- Accumulator variable  
- Formatted output with tabs  

**How the Program Works:**  
1. Outer loop runs from 1 to 5.  
2. Inner loop multiplies all integers from 1 up to the current number.  
3. Results are printed in a simple table.

**Example Run:**
```
n       n!
----------------
1       1
2       2
3       6
4       24
5       120
```

**Note:** Calculating 20! is difficult with normal integer types because the result is extremely large and can cause overflow.

---

## 6. Credit Limit Calculator

**Program Title:** Credit Limit Checker After Recession  
**Category:** Decision Making / Financial Logic  

**Textbook Reference:** Chapter 4 – Exercise 4.17  

**Short Description:**  
A company has cut every customer’s credit limit in half. The program reads three customers’ account numbers, old credit limits, and current balances, then calculates the new limit and reports which customers have exceeded it.

**Main Concepts Used:**  
- `for` loop (fixed number of customers)  
- Floating-point calculations  
- `if` statement for comparison  

**How the Program Works:**  
1. Loops three times (one for each customer).  
2. Reads account number, old credit limit, and current balance.  
3. Computes new credit limit = old limit / 2.  
4. Compares the balance with the new limit and prints a warning if the limit is exceeded.

**Example Run:**
```
--- Customer 1 ---
Enter account number: 1001
Enter credit limit before recession: 2000
Enter current balance: 1500

Account Number: 1001
New Credit Limit: 1000.00
*** This customer has exceeded the new credit limit! ***
```

---

## 7. Sales Calculator

**Program Title:** Online Retailer Sales Total  
**Category:** Switch Statement / Accumulation  

**Textbook Reference:** Chapter 4 – Exercise 4.19  

**Short Description:**  
An online store sells five products with fixed prices. The program reads pairs of product number and quantity sold, uses a `switch` statement to look up the price, and calculates the total retail value of all products sold.

**Main Concepts Used:**  
- `switch` statement  
- Sentinel-controlled loop  
- Accumulator for total sales  
- Floating-point arithmetic  

**How the Program Works:**  
1. Repeatedly asks for a product number (1–5) and quantity.  
2. Uses `switch` to assign the correct price.  
3. Multiplies price by quantity and adds it to a running total.  
4. Stops when the user enters product number 0.  
5. Displays the final total sales amount.

**Example Run:**
```
Product number (1-5, or 0 to quit): 1
Quantity sold: 10

Product number (1-5, or 0 to quit): 3
Quantity sold: 5

Product number (1-5, or 0 to quit): 0

--------------------------------
Total retail value of all products sold: $79.70
```

---

## 8. Approximating π (Pi)

**Program Title:** Leibniz Series Approximation of π  
**Category:** Series / Floating-Point Precision  

**Textbook Reference:** Chapter 4 – Exercise 4.26  

**Short Description:**  
The program approximates the value of π using the infinite series:  
π = 4 − 4/3 + 4/5 − 4/7 + 4/9 − 4/11 + …  
It prints a table showing the approximation after successive terms and demonstrates how slowly the series converges.

**Main Concepts Used:**  
- Floating-point (`double`) arithmetic  
- Alternating signs  
- Large iteration counts  
- Formatted output of high precision  

**How the Program Works:**  
1. Starts with π = 0.  
2. Adds terms of the form ±4/(2n−1) with alternating signs.  
3. Prints the current approximation after selected numbers of terms.  
4. Shows that many thousands of terms are needed for good accuracy.

**Example Run (first few terms):**
```
Terms           Approximate value of pi
----------------------------------------
1               4.0000000000
2               2.6666666667
3               3.4666666667
4               2.8952380952
5               3.3396825397
...
```

**Convergence Notes:**  
- ~600 terms → 3.14  
- ~5,000 terms → 3.141  
- ~40,000 terms → 3.1415  
- 150,000+ terms → 3.14159  

---

## Summary of Concepts Covered

| Exercise | Main Topics |
|----------|-------------|
| 2.16     | Basic arithmetic operators |
| 2.19     | if statements, finding min/max |
| 3.17     | Simple interest, loops, sentinel |
| 4.12     | Nested loops, prime checking |
| 4.14     | Nested loops, factorial |
| 4.17     | if statements, financial logic |
| 4.19     | switch statement, accumulation |
| 4.26     | Infinite series, floating-point precision |

All programs are written in standard C and can be compiled with any modern C compiler (gcc, clang, etc.).

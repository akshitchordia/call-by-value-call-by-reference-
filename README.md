# EXPERIMENT 10
# Name:- akshit chordia
# PRN- 24070123008
# Class- ENTC-A1
# Title:- Call  by value and Call by reference in C++

# Call by Value in C++

##  Overview
In **Call by Value**, when a function is called, the **actual values of arguments** are copied into the formal parameters of the function.  
This means that the function works with a **separate copy** of the data, not the original variable.

---

##  Key Points
- A **copy of the variable** is created inside the function.  
- Changes made inside the function **do not affect** the original variable in the caller.  
- Memory is allocated separately for the copied parameter.  
- It ensures **data safety**, as the original variable remains unchanged.  
- Slightly **less efficient** for large objects, since copying requires extra memory and time.  

---

##  Advantages
- Protects the original data from accidental modification.  
- Useful when only the **value is needed for calculations**.  

##  Disadvantages
- Creates overhead if large objects are copied.  
- Cannot be used when the function must modify the original variable.  

---
Call by Value in C++ is a **safe but less efficient** method of parameter passing, best suited for **small data types or when original values must remain unchanged**.


# Call by Reference in C++

##  Overview
In **Call by Reference**, when a function is called, the **address (reference) of the actual argument** is passed to the function.  
This means that the function works directly on the **original variable**, not on a copy.

---

##  Key Points
- No separate copy of the variable is created.  
- The function parameter becomes an **alias** of the original variable.  
- Any changes made inside the function are **reflected back** in the caller’s variable.  
- More **memory-efficient**, as no extra copy is made.  
- Provides a way to return multiple results from a function.  

---

##  Advantages
- Efficient for large objects, since no duplication of data occurs.  
- Allows functions to **modify the original values**.  
- Saves memory and time compared to call by value.  

##  Disadvantages
- Original data can be **accidentally changed** if not handled carefully.  
- Slightly less secure than call by value, since direct access is given.  

---
Call by Reference in C++ is an **efficient method** of parameter passing that allows direct modification of the original variables, making it suitable for situations where the function must update or process the caller’s data.


#  Key Differences: Call by Value vs Call by Reference in C++

| Feature              | Call by Value                          | Call by Reference                       |
|----------------------|----------------------------------------|-----------------------------------------|
| Data Passed          | A **copy** of the actual argument      | The **address/reference** of the argument |
| Effect on Original   | Original variable is **not changed**   | Original variable **is changed**         |
| Memory Usage         | Requires **extra memory** for the copy | **No extra memory** needed               |
| Safety               | Safer, protects original data          | Less safe, risk of accidental modification |
| Efficiency           | Slower for large objects (copying)     | Faster, no copying required              |
| Use Case             | When function should **not modify** data | When function **must modify** data       |

---

##
- Use **Call by Value** for small data types or when original values must remain unchanged.  
- Use **Call by Reference** when you want the function to directly work on and possibly modify the original variables.  

---
## Programs on call by value and call by reference

## Program 1: Call by Value (Swap attempt)

### Explanation
In Call by Value, only copies of the arguments are passed. Swapping happens inside the function but does not affect originals. So values in main remain unchanged.

### Algorithm
1. Start.  
2. Define a function that accepts integers by value.  
3. Swap them locally using a temp variable.  
4. In main, define a and b.  
5. Call the swap function.  
6. Print values of a and b.  
7. End.  


---

## Program 2: Call by Reference (Swap two numbers)

### Explanation
In Call by Reference, the function parameters are aliases of the actual arguments. When variables are passed, the function directly works on their memory locations. Hence, swapping inside the function affects the original variables.

### Algorithm
1. Start.  
2. Define a function that takes two integers by reference.  
3. Inside function, interchange the values using a temporary variable.  
4. In main, initialize two integers a and b.  
5. Print original values of a and b.  
6. Call the swap function.  
7. Print swapped values.  
8. End.  


---

## Program 2: Call by Pointer (Swap two numbers)

### Explanation
In Call by Pointer, the addresses of variables are passed. Dereferencing allows direct modification of original variables. This is similar to call by reference, but syntax uses pointers.

### Algorithm
1. Start.  
2. Define a function that accepts two pointers.  
3. Swap values of integers by dereferencing pointers.  
4. In main, define two integers a and b.  
5. Print original values.  
6. Call the swap function with addresses of a and b.  
7. Print swapped values.  
8. End.  


---

## Program 4: Salary Increment based on Conditions using pointers

### Explanation
This program uses a function with return value to check selection criteria. If three or more conditions are satisfied, salary is incremented by 20%. Demonstrates practical use of conditions and function call.

### Algorithm
1. Start.  
2. Define function to count conditions satisfied.  
3. Take input of projects, publications, profit, and new projects.  
4. Call function and get count.  
5. If count > 3, eligible for increment.  
6. Input salary and calculate increment.  
7. Print new salary.  
8. Else, print not qualified.  
9. End.

 
## Program 5: Modify Array using Pointers

### Explanation
Arrays are always passed as pointers in C++. So changes inside function reflect back in the original array. Here, array elements are replaced with values starting from the user’s input number.

### Algorithm
1. Start.  
2. Define function that updates array using a reference number.  
3. Loop through array and assign increasing values starting from num.  
4. In main, define an array and a number.  
5. Print original array.  
6. Call function to modify array.  
7. Print modified array.  
8. End.  

---

##  Conclusion (as per program )
- The **Call by Reference program** successfully shows that changes inside the function directly affect the original variables.  
- The **Call by Pointer program** demonstrates the same effect using pointers and dereferencing.  
- The **Call by Value program** highlights that swapping inside the function does not change the caller’s values, since only copies are modified.  
- The **Modify Array program** proves that arrays in C++ behave like pointers when passed to functions, allowing direct modification.  
- The **Salary Increment program** applies function calls and condition checks in a real-life style example, showing decision-making and return values.  

--- 
Hence, from all the above programs, we conclude that **parameter passing in C++ can be done by value, by reference, or by pointer**, and each method has its own behavior:  
- **Call by Value** keeps the original data safe.  
- **Call by Reference and Pointers** allow modification of the original variables.  
- Arrays are inherently passed by reference (as pointers).  
- Real-life problems can be solved effectively by applying these concepts.  

These programs together provide a clear understanding of how data is shared between functions and the main program in C++.

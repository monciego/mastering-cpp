# Statements and Functions

## Functions

A C++ function is a named block of code that performs a specific task or operation. It's like a mini-program within your program. Functions are essential in programming because they help you:

- **Modularize Code**: Functions allow you to break your program into smaller, manageable parts. Each function has a well-defined purpose, making your code more organized and easier to understand.

- **Reusability**: Once you create a function, you can use it multiple times in your program. This promotes code reuse and reduces duplication.

- **Abstraction**: Functions hide the complexity of their implementation. You don't need to know how a function works internally; you only need to know what it does and how to use it.

- **Parameterization**: Functions can accept input values called parameters or arguments. These values are provided when you call the function and allow you to customize its behavior.

- **Return Values**: Many functions produce output, known as a return value. This is the result of the function's computation. You can use or store this value for further processing.

Here's a simple example of a C++ function that adds two numbers:

```cpp
    #include <iostream>

    // Function declaration
    int add(int a, int b);

    int main() {
        // Function call
        int result = add(3, 5);

        // Display the result
        std::cout << "The sum is: " << result << std::endl;

        return 0;
    }

    // Function definition
    int add(int a, int b) {
        return a + b;
    }
```

## Statements

In C++, a statement is a syntactic construct that represents a complete instruction or action to be performed by the computer. Statements are the fundamental building blocks of C++ programs and are used to give instructions to the computer on what tasks to perform. C++ offers several types of statements, including:

1. Expression Statements: These are statements that consist of a single expression followed by a semicolon. For example:

```cpp
    x = 5; // Assignment statement
    y = x * 2; // Expression statement
```

2. Declaration Statements: These statements declare variables and their types. For example:

```cpp
    int age; // Declaration statement
    double price = 19.99; // Declaration and initialization statement
```

3. Compound Statements (Blocks): These are enclosed within curly braces {} and can contain multiple statements. They are often used to group statements together. For example:

```cpp
    {
        int a = 5;
        int b = 10;
        int sum = a + b;
    } // This is a block statement
```

4. Selection Statements: These statements allow you to make decisions in your program. Common selection statements include if, else if, and else. For example:

```cpp
    if (x > 0) {
        // Do something if x is greater than 0
    } else {
        // Do something else if x is not greater than 0
    }
```

5. Iteration Statements (Loops): These statements allow you to repeat a block of code multiple times. Common iteration statements include for, while, and do-while. For example:

```cpp
    for (int i = 0; i < 5; i++) {
        // Code to be executed 5 times
    }
```

6. Jump Statements: These statements allow you to change the flow of your program. Common jump statements include break, continue, and return. For example:

```cpp
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break; // Exit the loop when i is 5
        }
    }
```

Each of these types of statements serves a specific purpose in C++ programming, and you can combine them to create complex and meaningful programs. Understanding how to use statements effectively is crucial for writing C++ code that accomplishes your desired tasks.

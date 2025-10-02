# CC 101 - MIDTERM EXAM REVIEWER
by: **Ms. Fatima Marie P. Agdon, MSCS**

## IMPORTANT REMINDER
Do not print, reproduce, or re-publish this material. Such individuals identified doing such will be subjected to disciplinary actions.

## LESSON 1: Introduction to Problem Solving and Computational Thinking
### Computer Programming
- Programming refers to a technological process for telling a computer which tasks to perform in order to solve problems.
- A collaboration between humans and computers, in which humans create instructions for a computer to follow (code) in a language computers can understand.
### Programming Process
- Programmer writes code.
- Compiler/interpreter translates code.
- Computer scans and executes instructions.
- Task is performed.
### Algorithm, Pseudocode, Flowchart
| Approach | Definition |
|----------|------------|
| Algorithm | A set of step-by-step instructions that perform a specific task or operations. Written in natural language, not programming language. |
| Pseudocode | A set of instructions that mimic programming language instructions. |
| Flowchart | A visual program design tool. Uses symbols describe operations to be performed. |
-----
## LESSON 2: DATA, VARIABLES, AND OPERATORS
### C++
A programming language developed as the extended version of C++ by Bjarne Stroustrup.
### Data
The information that a program processes, stores, or manipulates. It can be anything that is meaningful for the program to work with.

### Constants and Variables
| Constants | Variables |
|-----------|-----------|
|Does not change its value over time.| Changes its value dependent on the equation|
|Usually written in numbers.| Specially written in letters or symbols.|
|Represent the known values in an equation, <br/> expression or in line of programming|Represent the unknown values.|
|Have fixed face values.| Do not have fixed face values.|

### Data Types
| Category | Examples |
|----------|----------|
| Basic | `int`, `float`, `double`, `char`, `bool`, `void` |
| Derived | `array`, `pointer`, `reference`, `function` |
| User-defined | `class`, `structure`, `union`, `typedef`, `using` |

### Basic Structure of a C++ Program
```cpp
# include <iostream>      // Header file statements for accessing standard library functions and classes.
using namespace std;     // Namespace declaration

// main() method - the entry point of the program
int main () {
    // statements
    cout << "This is a C++ program." << endl;
    return 0; // return statement
}
```
- Header Files in C++ contain declarations of functions and classes.

### C++ Syntax Rules
- **Case Sensitivity.** C++ is case-sensitive.
- **Semicolons.** Each statement ends with a semicolon.
- **Braces.** Used to define the scope of functions and control structures.

### C++ Comments
Comments are used as programmers’ notes, and does not affect the program’s behavior.
- **Single-Line** Comments start with `//`.
- **Multi-Line** Comments are enclosed between `/*` and `*/`.

```cpp
// This is a single-line comment

/*
This is a comment
spanning
multiple lines
*/
```

### C++ Variables
Variables are fundamental storage units and their names follow certain rules:
- **Start with a Letter or Underscore.** Names must begin with a letter (`A`-`Z` or `a`-`z`) or an underscore (`_`).
- **Alphanumeric and Underscores.** They can contain letters, digits, and underscores, **but should not start with a number**.
- **Avoid Reserved Keywords.** C++ reserved words (like `class`, `void`, `int`, etc.) cannot be used as variable names.
- **Case Sensitivity.** C++ is case-sensitive, meaning `Variable`, `variable`, and `VARIABLE` are different.

**DECLARING VARIABLES AND CONSTANTS**
```cpp
// Variables: type name
int value;
// Constant: const type name = value
const double PI_VALUE = 3.1416;
```

### C++ Output Operations
```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "This is a text to be displayed in the console." << endl;
    // cout is from the  <iostream> library
    // << is known as the Insertion Operator
    float value = 3.14159;
    int number = 10;
    char letter = 'A';
    cout << "Value: " << fixed << setprecision(2) << value << endl;
    /*
        fixed - ensures that the value to display is in fixed notation
        setprecision(decimal places) - from <iomanip> (input output manipulation)
        endl- adds a new line (line break)
    */
    cout << "Number: " << number << endl;
    cout << "Letter: " << letter;
    return 0;
}
```

### Escape Sequences
- Escape sequences are special characters characterized by a backslash (`\`) and a letter or symbol beside it.
- It is used in cout statements to show spaces, new lines, or show symbols that cannot be outputted using the normal way of printing.
```cpp
#include <iostream>
using namespace std;

int main() {
	cout<<"This is a new line.\n";
	cout<<"I need a long\tspace.\n";
	cout<<"This is a longer\t\t\tspace.\n";
	cout<<"He said, \"Marry me, Juliet you'll never have to be alone.\"\n";
	cout<<"But my daddy says, 'Stay away from Juliet.'\n";
	cout<<"This is a backslash: \\ \n";
	cout<<"Hello\bWorld\n";
	cout<<"Carriage return:\rOverwritten text\n";
	return 0;
}
```
### C++ Input Operations
```cpp
#include <iostream>
#include <string>
using namespace std;

int main () {
    string your_name;
    int year_level;

    cout << "Enter your name: ";
    getline(cin, your_name);
    cout << "Enter your year level: ";
    cin >> year_level;
    
    cout << "Hello " << your_name <<"! You are in level " << year_level <<" of college!" << endl;
    return 0; 
}
```

```
Enter your name: Avianna Rye Diaz
Enter your year level: 4
Hello Avianna Rye Diaz! You are in level 4 of college!
```
- `getline()` is a standard library function that is used to read a string or a line from an input stream. It extracts the characters from the input stream and appends it to the given string object until the delimiting character is encountered.
- Use `#include <string>` to use `getline()`.
- Note!!! `cin>>` works with various data types like integers, floats, characters, and strings
- However, `cin` reads whitespace as delimiter (spaces, tabs, newlines). This means it will read input up to the first whitespace and store it in the variable.

### C++ Operators
Assignment Operators
```cpp
	int num1 = 18;
	int num2 = 4;

	num1 += num2;   // Same as  num1 = num1 + num2
	cout<<"num1 += num2: " << num1 << endl;

	num1 -= num2;   // Same as  num1 = num1 - num2
	cout<<"num1 -= num2: " << num1 << endl;

	num1 *= num2;   // Same as  num1 = num1 * num2
	cout<<"num1 *= num2: " << num1 << endl;

	num1 /= num2;   // Same as  num1 = num1 / num2
	cout<<"num1 /= num2: " << num1 << endl;

	num1 %= num2;   // Same as  num1 = num1 % num2
	cout<<"num1 %= num2: " << num1 << endl;
```
Arithmetic Operators
| Symbol | Operator Name   | if `x = 5`, `y = 3` |
|--------|-----------------|---------------------|
| `+`    | Addition        | `8` → `x + y`       |
| `-`    | Subtraction     | `2` → `x - y`       |
| `*`    | Multiplication  | `15` → `x * y`      |
| `/`    | Division        | `1` → `x / y`       |
| `%`    | Modulo          | `2` → `x % y`       |

## C++ Errors
**Compile Time Errors** are mistakes that prevent your program from compiling.
```cpp
    int a = 10;
    cout <<"Value of a: " << A;
```
**Runtime Errors** occur when the program compiles but crashes or behaves unexpectedly.
```cpp
    int a = 10, b = 0, quotient;
    cout <<"Quotient of " << a  << " and " << b <<": " << quotient;
    return 0;
```
**Logical Errors.** The program executes, however, the output is not as expected due to an error to its logic.
```cpp
    float average = 90.0 + 91.0 + 92.0/3;
    cout << "The average of three numbers is: " << average;
```
----
## LESSON 3. CONTROL FLOW STRUCTURES
### Relational Operators
| SYMBOL | DESCRIPTION | SYNTAX |
|--------|-------------|--------|
| `==`   | **Equal To**<br>Returns `true` if `value1` and `value2` are equal.<br><i>This is different from the assignment operator.</i> | `value1 == value2` |
| `<`    | **Less Than**<br>Returns `true` if `value1` is less than `value2`. | `value1 < value2` |
| `<=`   | **Less Than Or Equal To**<br>Returns `true` if `value1` is less than or equal to `value2`. | `value1 <= value2` |
| `>`    | **Greater Than**<br>Returns `true` if `value1` is greater than `value2`. | `value1 > value2` |
| `>=`   | **Greater Than Or Equal To**<br>Returns `true` if `value1` is greater than or equal to `value2`. | `value1 >= value2` |
| `!=`   | **Not Equal**<br>Returns `true` if `value1` and `value2` are not equal. | `value1 != value2` |

### Decision Structure
**`if` statement**
```cpp
#include <iostream>
using namespace std;

int main () {
    int number = 90;
    if (number == 90) {
        cout << "The number is 90." << endl;
    }
    return 0;
}
```

**`if-else` statement**
```cpp
#include <iostream>
using namespace std;

int main () {
    int number = 90;
    if (number == 90) {
        cout << "The number is 90." << endl;
    }
    else {
        cout << "The number is not 90." << endl;
    }
    return 0;
}
```

**`if-else-if` statement**
```cpp
#include <iostream>
using namespace std;

int main () {
    int number = 90;
    if (number == 90) {
        cout << "The number is 90." << endl;
    }
    else if (number == 80) {
        cout << "The number is 80." << endl;
    }
    else {
        cout << "The number is neither 90 nor 80." << endl;
    }
    return 0;
}
```
**`switch` statement**
```cpp
#include <iostream>
using namespace std;

int main () {
    char letter = 'A';
    
    switch (letter) {
        case 'S':
            cout << "Exemplary";
            break;
        case 'A':
            cout << "Very Good";
            break;
        case 'B':
            cout << "Good";
            break;
        case 'C':
            cout << "Satisfactory";
            break;
        case 'F':
            cout << "Fail";
            break;
        default:
            cout <<"No grade match.";
            break;
    }
    return 0;
}
```
### Logical Operators for Compound Conditions
| SYMBOL | DESCRIPTION | SYNTAX |
|--------|-------------|--------|
| `!`    | **NOT**<br>Negates/flips the value of the condition. | `!condition` |
| `&&`   | **AND**<br>Returns `true` if all the conditions are true. | `condition1 && condition2` |
| `\|\|`   | **OR**<br>Returns `true` if *at least one* of the conditions is true. | `condition1 \|\| condition2` |

### Truth Tables
**NOT OPERATOR**
| `condition`  | `!condition` |
|------------|------------|
| TRUE       | FALSE      |
| FALSE      | TRUE       |

**AND/OR OPERATOR**
| `COND1` | `COND2` | `COND1 && COND2` | `COND1 \|\| COND2` |
|-------|-------|----------------|------------------|
| TRUE  | TRUE  | TRUE           | TRUE             |
| TRUE  | FALSE | FALSE          | TRUE             |
| FALSE | TRUE  | FALSE          | TRUE             |
| FALSE | FALSE | FALSE          | FALSE            |

### Sample Code
```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 3;

    cout << "x = " << x << ", y = " << y << endl;

    // Relational Operators
    cout << "\n=== Relational Operators ===" << endl;
    cout << "x == y: " << (x == y) << endl;   // false (0)
    cout << "x != y: " << (x != y) << endl;   // true  (1)
    cout << "x > y : " << (x > y)  << endl;   // true  (1)
    cout << "x < y : " << (x < y)  << endl;   // false (0)
    cout << "x >= y: " << (x >= y) << endl;   // true  (1)
    cout << "x <= y: " << (x <= y) << endl;   // false (0)

    // Logical Operators
    cout << "\n=== Logical Operators ===" << endl;
    bool cond1 = (x > y);   // true
    bool cond2 = (y > 0);   // true

    cout << "cond1: " << cond1 << ", cond2: " << cond2 << endl;
    cout << "!cond1: " << (!cond1) << endl;             // false (0)
    cout << "cond1 && cond2: " << (cond1 && cond2) << endl; // true  (1)
    cout << "cond1 || cond2: " << (cond1 || cond2) << endl; // true  (1)

    return 0;
}
```
Note: C++ prints boolean values as `0` or `1`. `0` means false, `1` means true.

### Looping Structure
`while` Loop
```cpp
	while(ctrval <= 10) {
		cout <<ctrval <<endl;
		ctrval++; //ctrval + 1
	}
```
| Iteration | ctrval (before increment) | Output | ctrval (after increment) |
|-----------|---------------------------|--------|--------------------------|
| 1         | 1                         | 1      | 2                        |
| 2         | 2                         | 2      | 3                        |
| 3         | 3                         | 3      | 4                        |
| ...       | ...                       | ...    | ...                      |
| 10        | 10                        | 10     | 11 (loop ends)           |

`do-while` Loop
```cpp
    do {
        cout <<"Enter upper bound value: ";
        cin>> up_bound;
    } while (up_bound < 1);
```
| Iteration | User Input (up_bound) | Condition (up_bound < 1) | Loop Continues? |
|-----------|------------------------|--------------------------|-----------------|
| 1         | -3                     | true                     | Yes             |
| 2         | 0                      | true                     | Yes             |
| 3         | 5                      | false                    | No (loop ends)  |

`for` Loop
```cpp
	int numval= 5; //counter value
	int factorial = 1;

	for (int ctrval=1; ctrval<=numval; ctrval++) {
		factorial *= ctrval;
         //factorial = factorial*ctrval
	}
	cout<<"Factorial of " <<numval <<": " <<factorial;
```
| Iteration | ctrval | factorial (before) | Operation          | factorial (after) |
|-----------|--------|---------------------|-------------------|-------------------|
| 1         | 1      | 1                   | 1 * 1             | 1                 |
| 2         | 2      | 1                   | 1 * 2             | 2                 |
| 3         | 3      | 2                   | 2 * 3             | 6                 |
| 4         | 4      | 6                   | 6 * 4             | 24                |
| 5         | 5      | 24                  | 24 * 5            | 120               |

### Break and Continue in C++ Loops

`break`
- Exits the **entire loop** immediately.
- Control moves to the statement **after the loop**.

```cpp
for (int i = 1; i <= 5; i++) {
    if (i == 3) {
        break;  // loop ends when i == 3
    }
    cout << i << " ";
}
// Output: 1 2
```
| Iteration | i Value | Condition (`i==3`) | Action       | Output |
|-----------|---------|---------------------|--------------|--------|
| 1         | 1       | false               | print `1`    | 1      |
| 2         | 2       | false               | print `2`    | 1 2    |
| 3         | 3       | true                | break (exit) | 1 2    |

`continue`
- Skips the current iteration of the loop.
- Control jumps to the next iteration.

```cpp
for (int i = 1; i <= 5; i++) {
    if (i == 3) {
        continue;  // skip printing when i == 3
    }
    cout << i << " ";
}
// Output: 1 2 4 5
```
| Iteration | i Value | Condition (`i==3`) | Action        | Output |
|-----------|---------|---------------------|---------------|--------|
| 1         | 1       | false               | print `1`     | 1      |
| 2         | 2       | false               | print `2`     | 1 2    |
| 3         | 3       | true                | skip printing | 1 2    |
| 4         | 4       | false               | print `4`     | 1 2 4  |
| 5         | 5       | false               | print `5`     | 1 2 4 5|

**Nested Loop**
```cpp
    for(int i = 1; i <= rows; ++i) {
        for(int j = 1; j <= i; ++j) {
             //inner loop for stars
                    cout << "* ";
        }
        cout << "\n";
    }
```
| Outer Loop `i` | Inner Loop `j` Iterations | Output per Row |
|----------------|----------------------------|----------------|
| 1              | j = 1                      | *              |
| 2              | j = 1, 2                   | * *            |
| 3              | j = 1, 2, 3                | * * *          |
----
## LESSON 4. FUNCTIONS
### What is a Function?
- A container for a few lines of code that accomplish a **specific task**.
-  Contains programming statements enclosed by `{ }`.
- Can be called multiple times for **reusability and modularity**.
- Uses parentheses `()` for parameters.
- Helps avoid repetition, makes programs easier to track, and supports reusability.

### Types of Functions
1.  **Pre-defined Functions**
    -   Built into the C++ Standard Library.
    -   Example: `sqrt()`, `pow()`, `strlen()`.
2.  **User-defined Functions**
    -   Created by the programmer to perform specific tasks.

### Aspects of a Function

1. **Function Declaration**
- Declares the function globally.
- Informs the compiler about the **function name, parameters, and return type**.

``` cpp
int add(int a, int b);
```
2. **Function Definition**
- Contains the actual code/statements to execute.
- A function can return **one value only**.
``` cpp
int add(int a, int b) {
    return a + b;
}
```
**3. Function Call**
- Executes the function when invoked.
- Must match the declaration in name, return type, and parameter list.

``` cpp
int result = add(5, 3); // function call
```
### Parameters

1. **Actual Parameters**
- Values passed during the function call.
- Can be constants, variables, or expressions.

2. **Formal Parameters**
- Variables declared in the function definition to receive values.\
- Local to the function and cannot be used elsewhere.

``` cpp
// Example
int square(int num) {   // formal parameter
    return num * num;
}

int main() {
    int x = 4;
    cout << square(x);  // actual parameter
}
```
**`Return` Keyword**
- Ends the function and sends a value back to the caller.
- Return type must be declared before the function name.

``` cpp
int multiply(int a, int b) {
    return a * b; // returns an int
}
```
**`void` Functions**
- Defined with `void`.
- Do not return a value.
- Function call is a standalone statement.

``` cpp
void greet() {
    cout << "Hello, World!";
}
```

**Recursive Functions**
- Functions that **call themselves**.
```cpp
int factorial(int n) {
    if (n == 0 || n == 1) return 1;  // Base case: 0! = 1, 1! = 1
    return n * factorial(n - 1);     // Recursive step
}
```
#### END OF REVIEWER 
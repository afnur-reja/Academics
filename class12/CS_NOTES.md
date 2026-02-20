# C++ Class

## Definition
A **class** is a user-defined data type in C++ that groups **data members** and **member functions** into a single unit. It acts as a **blueprint** for creating objects.

## Key Points
- **Data members** store the data of the class.
- **Member functions** operate on the data members.
- **Objects** are created from a class.

## Basic Syntax
```cpp
class ClassName {
    data members;
    member functions;
};
```


# Object

**Definition:**  
An object is an instance of a class that contains real values of data members and can access the member functions of the class.

**Key Points:**
1. An object is created from a class.  
2. It occupies memory in the system.  
3. It is used to access data members and member functions.  

**Syntax to Create Object:**
```cpp
ClassName objectName;
```

**Relation:**  
Class = Blueprint  
Object = Real entity created from blueprint  

> Memory Hook: Object = Instance of Class

---

## Constructor

**Definition:**  
A constructor is a special member function of a class that is automatically called when an object is created. It is used to initialize the data members of the class.

**Key Points:**
1. Constructor name is same as the class name.  
2. It has no return type (not even void).  
3. It is called automatically when object is created.  

**Syntax:**
```cpp
class A {
public:
    A() {
        // initialization
    }
};
```

> Memory Hook: Constructor = Initializes Object

---

## Destructor

**Definition:**  
A destructor is a special member function of a class that is automatically called when an object goes out of scope or is destroyed. It is used to release resources.

**Key Points:**
1. Destructor name is same as class name preceded by (~).  
2. It has no return type.  
3. It is called automatically when object is destroyed.  
4. A class can have only one destructor.

**Syntax:**
```cpp
class A {
public:
    ~A() {
        // cleanup code
    }
};
```

> Memory Hook: Destructor = Cleans Up Object


## Function Overloading

**Definition:**  
Function overloading is a feature of OOP in which two or more functions have the same name but different parameters (different number or type of arguments).

**Key Points:**
1. Function name remains same.  
2. Parameters must differ in number or data type.  
3. It improves code readability and reusability.  
4. It is an example of compile-time polymorphism.

**Example Syntax:**
```cpp
int add(int a, int b);
int add(int a, int b, int c);
float add(float a, float b);
```

> Memory Hook: Same Name + Different Parameters = Overloading


## Abstract Class

**Definition:**  
An abstract class is a class that contains at least one pure virtual function and cannot be instantiated (object cannot be created).

**Key Points:**
1. Contains at least one pure virtual function.  
2. Used to achieve abstraction.  
3. Object of abstract class cannot be created.  
4. Derived class must implement the pure virtual function.

**Pure Virtual Function Syntax:**
```cpp
virtual void show() = 0;
```

> Memory Hook: Abstract = Incomplete Class (No Object)

---

## Concrete Class

**Definition:**  
A concrete class is a class that does not contain any pure virtual function and whose objects can be created.

**Key Points:**
1. All functions are fully defined.  
2. Object of concrete class can be created.  
3. It provides complete implementation.

> Memory Hook: Concrete = Complete Class (Object Allowed)


## Base Class

**Definition:**  
A base class is a class whose properties and member functions are inherited by another class.

**Key Points:**
1. It is also called parent class or super class.  
2. Its members are inherited by the derived class.  
3. It promotes code reusability.  

**Syntax:**
```cpp
class Base {
    // members
};

class Derived : public Base {
    // inherited members
};
```

**Relation:**  
Base Class → Gives properties  
Derived Class → Uses properties  

> Memory Hook: Base = Parent Class



## Pointer

**Definition:**  
A pointer is a variable that stores the address of another variable.

**Key Points:**
1. Pointer stores memory address, not direct value.  
2. `*` is used to declare a pointer.  
3. `&` is used to get the address of a variable.  
4. `*` (dereference operator) is used to access value at that address.

**Syntax:**
```cpp
int a = 10;
int *p = &a;
```

**Relation:**  
`p` → stores address of `a`  
`*p` → gives value of `a`

> Memory Hook: Pointer = Address Holder


## Member Function

**Definition:**  
A member function is a function declared inside a class that is used to operate on the data members of the class.

**Key Points:**
1. It is defined inside the class or outside using scope resolution operator (::).  
2. It can access data members of the class directly.  
3. It defines the behavior of the objects.

**Syntax (Inside Class):**
```cpp
class A {
public:
    void show() {
        // function body
    }
};
```

**Syntax (Outside Class):**
```cpp
void A::show() {
    // function body
}
```

> Memory Hook: Member Function = Class Action



## Namespace

**Definition:**  
A namespace is a declarative region in C++ used to group related identifiers (variables, functions, classes) and avoid name conflicts.

**Key Points:**
1. Prevents naming conflicts in large programs.  
2. Allows same identifier names in different scopes.  
3. `std` is a standard namespace in C++.  
4. Accessed using scope resolution operator (::).

**Syntax:**
```cpp
namespace MySpace {
    int x = 10;
}

cout << MySpace::x;
```

**Using Directive:**
```cpp
using namespace std;
```

> Memory Hook: Namespace = Name Protector


## Advantages of OOP

Object Oriented Programming provides the following advantages:

**1. Code Reusability:**  
Using inheritance, existing code can be reused, reducing duplication.

**2. Data Security:**  
Encapsulation hides data and protects it from unauthorized access.

**3. Modularity:**  
Program is divided into small parts (classes), making it organized.

**4. Easy Maintenance:**  
Errors can be easily located and corrected.

**5. Flexibility & Extensibility:**  
New features can be added without changing existing code.

> Memory Hook: RSMEF  
Reuse – Security – Modularity – Easy Maintenance – Flexibility


## Pass by Value vs Pass by Reference

### Pass by Value

**Definition:**  
In pass by value, a copy of the variable is passed to the function.

**Key Points:**
1. Changes made inside the function do not affect the original variable.  
2. Separate memory location is used.  
3. Safer but uses more memory.

---

### Pass by Reference

**Definition:**  
In pass by reference, the address of the variable is passed to the function.

**Key Points:**
1. Changes made inside the function affect the original variable.  
2. No separate copy is created.  
3. Uses less memory and is more efficient.

---

### Difference Table

| Pass by Value | Pass by Reference |
|---------------|------------------|
| Copy is passed | Address is passed |
| Original not changed | Original gets changed |
| More memory used | Less memory used |

> Memory Hook: Value = Copy | Reference = Address


## Push and Pop Operation in Stack

A stack is a linear data structure that follows **LIFO (Last In First Out)** principle.

### Push Operation

**Definition:**  
Push is the operation of inserting an element at the top of the stack.

**Key Points:**
1. Element is added at the top position.  
2. Top pointer is incremented after insertion.  
3. If stack is full → **Overflow** condition occurs.

---

### Pop Operation

**Definition:**  
Pop is the operation of removing the top element from the stack.

**Key Points:**
1. Element is removed from the top position.  
2. Top pointer is decremented after removal.  
3. If stack is empty → **Underflow** condition occurs.

> Memory Hook: Stack = LIFO | Push = Insert | Pop = Remove


## Selection Sort

**Definition:**  
Selection sort is a simple sorting technique in which the smallest element from the unsorted part of the array is selected and placed at its correct position.

### Steps:

1. Assume the first element is the minimum.
2. Compare it with remaining elements to find the smallest.
3. Swap the smallest element with the first position.
4. Repeat for remaining elements.

**Time Complexity:** O(n²)

---

### C++ Program:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a[5] = {5, 3, 4, 1, 2};
    int i, j, min, temp;

    for(i = 0; i < 4; i++) {
        min = i;
        for(j = i + 1; j < 5; j++) {
            if(a[j] < a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    for(i = 0; i < 5; i++)
        cout << a[i] << " ";

    return 0;
}
```

> Memory Hook: Select → Swap → Repeat



## Multiple Inheritance

**Definition:**  
Multiple inheritance is a feature of OOP in which a derived class inherits the properties and member functions from more than one base class.

### Key Points:

1. A derived class can inherit from two or more base classes.  
2. It promotes code reusability.  
3. Base classes are separated by commas in the inheritance list.  
4. It may cause ambiguity problem (resolved using scope resolution operator).

---

### Syntax:

```cpp
class Base1 {
    // members
};

class Base2 {
    // members
};

class Derived : public Base1, public Base2 {
    // derived members
};
```

---

### Example Program:

```cpp
#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

class C : public A, public B {
};

int main() {
    C obj;
    obj.showA();
    obj.showB();
    return 0;
}
```

> Memory Hook: Multiple = Many Parents → One Child



## Binary Search

**Definition:**  
Binary search is a searching technique used to find an element in a **sorted array** by repeatedly dividing the search interval into half.

### Key Points:

1. It works only on sorted arrays.  
2. Compare the key element with the middle element.  
3. If key < middle → search left half.  
4. If key > middle → search right half.  
5. Repeat until element is found or search space becomes empty.  

**Time Complexity:** O(log n)

---

### C++ Program:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a[5] = {1, 3, 5, 7, 9};
    int key = 5;
    int low = 0, high = 4, mid;

    while(low <= high) {
        mid = (low + high) / 2;

        if(a[mid] == key) {
            cout << "Element Found at position " << mid;
            return 0;
        }
        else if(key < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    cout << "Element Not Found";
    return 0;
}
```

> Memory Hook: Sorted → Middle → Divide → Repeat


## Matrix Addition

**Definition:**  
Matrix addition is the process of adding corresponding elements of two matrices of the same order (same number of rows and columns).

### Conditions:

1. Both matrices must have the same order.  
2. Addition is done element-wise.

If  
A[i][j] and B[i][j] are elements,  
Then  
C[i][j] = A[i][j] + B[i][j]

---

### C++ Program:

```cpp
#include <iostream>
using namespace std;

int main() {
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};
    int C[2][2];

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Resultant Matrix:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
```

> Memory Hook: Same Order → Add Corresponding Elements



## Deletion of Element from an Array

**Definition:**  
Deletion in an array is the process of removing an element from a specific position and shifting the remaining elements to fill the gap.

### Steps:

1. Find the position of the element to be deleted.  
2. Shift all elements after that position one step to the left.  
3. Reduce the size of the array by 1.

---

### C++ Program:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos = 2;   // delete element at index 2 (30)

    for(int i = pos; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    n--;  // decrease size

    cout << "Array after deletion:\n";
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
```

> Memory Hook: Delete → Shift Left → Decrease Size



## Stack

**Definition:**  
A stack is a linear data structure that follows the **LIFO (Last In First Out)** principle.

### Key Characteristics:

1. Insertion and deletion are done only at one end called **TOP**.  
2. Operations performed are **Push** and **Pop**.  
3. It can be implemented using array or linked list.

---

### Basic Operations:

**1. Push:** Insert an element at the top.  
**2. Pop:** Remove the top element.  
**3. Peek/Top:** View the top element.  

**Conditions:**
- If stack is full → **Overflow**  
- If stack is empty → **Underflow**

---

### Array Implementation (C++ Program):

```cpp
#include <iostream>
using namespace std;

int stack[5], top = -1;

void push(int x) {
    if(top == 4)
        cout << "Overflow\n";
    else {
        top++;
        stack[top] = x;
    }
}

void pop() {
    if(top == -1)
        cout << "Underflow\n";
    else
        top--;
}

int main() {
    push(10);
    push(20);
    pop();
    return 0;
}
```

> Memory Hook: Stack = LIFO | One End = TOP


## Queue

**Definition:**  
A queue is a linear data structure that follows the **FIFO (First In First Out)** principle.

### Key Characteristics:

1. Insertion is done at the **rear** end.  
2. Deletion is done from the **front** end.  
3. It can be implemented using array or linked list.

---

### Basic Operations:

**1. Enqueue:** Insert an element at the rear.  
**2. Dequeue:** Remove an element from the front.  
**3. Peek/Front:** View the front element.

**Conditions:**
- If queue is full → **Overflow**  
- If queue is empty → **Underflow**

---

### Array Implementation (C++ Program):

```cpp
#include <iostream>
using namespace std;

int queue[5], front = -1, rear = -1;

void enqueue(int x) {
    if(rear == 4)
        cout << "Overflow\n";
    else {
        if(front == -1)
            front = 0;
        rear++;
        queue[rear] = x;
    }
}

void dequeue() {
    if(front == -1 || front > rear)
        cout << "Underflow\n";
    else
        front++;
}

int main() {
    enqueue(10);
    enqueue(20);
    dequeue();
    return 0;
}
```

> Memory Hook: Queue = FIFO | Insert at Rear, Delete from Front


## Insertion Sort

**Definition:**  
Insertion sort is a sorting technique in which elements are picked one by one and placed at their correct position in the sorted part of the array.

### Key Points:

1. First element is considered already sorted.  
2. Next element is compared with sorted elements.  
3. Elements are shifted to make space for correct position.  
4. Process repeats until all elements are sorted.

**Time Complexity:** O(n²)

---

### C++ Program:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a[5] = {5, 3, 4, 1, 2};
    int i, key, j;

    for(i = 1; i < 5; i++) {
        key = a[i];
        j = i - 1;

        while(j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    for(i = 0; i < 5; i++)
        cout << a[i] << " ";

    return 0;
}
```

> Memory Hook: Pick → Compare → Shift → Insert


## SQL (Structured Query Language)

**Definition:**  
SQL (Structured Query Language) is a standard language used to create, manage, and manipulate databases.

### Key Points:

1. Used to create and modify database structures.  
2. Used to insert, update, delete, and retrieve data.  
3. Works with Relational Database Management System (RDBMS).  
4. It is not case-sensitive.

---

### Types of SQL Commands:

**1. DDL (Data Definition Language)**  
Used to define database structure.  
Examples: `CREATE`, `ALTER`, `DROP`, `TRUNCATE`

**2. DML (Data Manipulation Language)**  
Used to manipulate data.  
Examples: `INSERT`, `UPDATE`, `DELETE`, `SELECT`

---

### Basic Example:

```sql
CREATE TABLE Student (
    Roll INT,
    Name VARCHAR(20),
    Marks INT
);

INSERT INTO Student VALUES (1, 'Rahul', 85);

SELECT * FROM Student;
```

> Memory Hook: SQL = Create + Store + Retrieve Data



## Advantages of SQL

1. **Easy to Learn and Use:**  
   SQL has simple and readable commands like SELECT, INSERT, DELETE.

2. **Fast Data Retrieval:**  
   It allows quick access to large amounts of data.

3. **Data Security:**  
   Provides user authentication and access control.

4. **Data Integrity:**  
   Maintains accuracy and consistency of data using constraints.

5. **Standard Language:**  
   Works with most relational database systems (MySQL, Oracle, etc.).

> Memory Hook: LFSIS  
Learn – Fast – Security – Integrity – Standard


## DDL (Data Definition Language)

**Definition:**  
DDL is a set of SQL commands used to define and modify the structure of a database.

### Key Points:
1. It creates or changes database objects like tables.  
2. It does not deal with actual data.  
3. Changes are permanent (auto-commit).

### Examples:
- `CREATE`
- `ALTER`
- `DROP`
- `TRUNCATE`

**Example:**
```sql
CREATE TABLE Student (
    Roll INT,
    Name VARCHAR(20)
);
```

---

## DML (Data Manipulation Language)

**Definition:**  
DML is a set of SQL commands used to manipulate data stored in database tables.

### Key Points:
1. It deals with actual data inside tables.  
2. Used to insert, update, delete, and retrieve data.  
3. Changes can be rolled back.

### Examples:
- `INSERT`
- `UPDATE`
- `DELETE`
- `SELECT`

**Example:**
```sql
INSERT INTO Student VALUES (1, 'Rahul');
```

---

### Difference Between DDL and DML

| DDL | DML |
|-----|-----|
| Defines structure | Manipulates data |
| Works on tables/database | Works on records |
| Auto-commit | Can rollback |

> Memory Hook: DDL = Design Database | DML = Manage Data


## Database

**Definition:**  
A database is an organized collection of related data stored electronically so that it can be easily accessed, managed, and updated.

### Key Points:

1. Stores data in structured form (tables).  
2. Reduces data redundancy.  
3. Ensures data security and integrity.  
4. Managed using DBMS (Database Management System).

---

### Example:

Student Table

| Roll | Name  | Marks |
|------|-------|-------|
| 1    | Rahul | 85    |

---

### Advantages:

- Easy data retrieval  
- Better data management  
- Improved security  

> Memory Hook: Database = Organized Data Collection


## Relational Algebra

**Definition:**  
Relational algebra is a procedural query language used to perform operations on relations (tables) in a relational database.

### Key Points:

1. It works on relations (tables).  
2. It forms the theoretical foundation of SQL.  
3. Operations take one or two relations as input and produce a new relation as output.

---

### Basic Operations:

1. **Selection (σ)** – Selects rows based on condition.  
2. **Projection (π)** – Selects specific columns.  
3. **Union (∪)** – Combines two relations.  
4. **Set Difference (-)** – Finds tuples present in one relation but not in another.  
5. **Cartesian Product (×)** – Combines all rows of two relations.

---

### Example:

σ Marks > 80 (Student)  
→ Selects students having marks greater than 80.

> Memory Hook: SPU-DC  
Selection – Projection – Union – Difference – Cartesian


## Column Constraints

**Definition:**  
Column constraints are rules applied to table columns in SQL to restrict the type of data that can be stored in them.

### Key Points:

1. They ensure data accuracy and integrity.  
2. Applied while creating a table.  
3. Help maintain valid and consistent data.

---

### Common Column Constraints:

1. **NOT NULL** – Column cannot have NULL value.  
2. **UNIQUE** – All values in column must be different.  
3. **PRIMARY KEY** – Uniquely identifies each record (NOT NULL + UNIQUE).  
4. **FOREIGN KEY** – Links one table to another.  
5. **CHECK** – Restricts values based on condition.  
6. **DEFAULT** – Assigns a default value if no value is given.

---

### Example:

```sql
CREATE TABLE Student (
    Roll INT PRIMARY KEY,
    Name VARCHAR(20) NOT NULL,
    Marks INT CHECK (Marks >= 0)
);
```

> Memory Hook: NUPFCD  
NOT NULL – UNIQUE – PRIMARY – FOREIGN – CHECK – DEFAULT


## XML (Extensible Markup Language)

**Definition:**  
XML is a markup language used to store and transport data in a structured and self-descriptive format.

### Key Points:

1. Tags are user-defined.  
2. It is case-sensitive.  
3. Used to store and exchange data.  
4. Focuses on data storage.

**Example:**
```xml
<Student>
   <Roll>1</Roll>
   <Name>Rahul</Name>
</Student>
```

---

## HTML (HyperText Markup Language)

**Definition:**  
HTML is a markup language used to create and design web pages.

### Key Points:

1. Tags are predefined.  
2. It is not case-sensitive.  
3. Used to display content on web browsers.  
4. Focuses on presentation of data.

---

## Difference Between XML and HTML

| XML | HTML |
|------|------|
| Used to store data | Used to display data |
| User-defined tags | Predefined tags |
| Case-sensitive | Not case-sensitive |
| Focus on data | Focus on presentation |

---

## Uses of XML

1. Data storage and transfer.  
2. Used in web services.  
3. Used to share data between different systems.  
4. Platform independent.

> Memory Hook: XML = Store Data | HTML = Show Data


## AGGREGATE FUNCTIONS (SQL) - UNIT 3 (3 Marks PYQ Ready)

**Definition** (1 Mark):  
**Aggregate Functions**: Built-in SQL functions that operate on multiple rows/values to return **single summary value** (SUM, AVG, COUNT, MAX, MIN).

### **List of Aggregate Functions** (2 Marks - Copy Table)
| Function | Purpose | Example |
|----------|---------|---------|
| **COUNT(*)** | Total rows | `COUNT(*) = 5` |
| **COUNT(column)** | Non-null values | `COUNT(name) = 4` |
| **SUM(column)** | Total sum | `SUM(marks) = 450` |
| **AVG(column)** | Average | `AVG(marks) = 75.5` |
| **MAX(column)** | Maximum value | `MAX(marks) = 95` |
| **MIN(column)** | Minimum value | `MIN(marks) = 45` |

### **Syntax & Usage** (3 Marks Complete Answer)
```sql
SELECT AGGREGATE_FUNCTION(column) FROM table_name;
-- Ex: SELECT COUNT(*) FROM STUDENT;
-- Ex: SELECT AVG(marks) FROM RESULT;



# 🚀 DSA Journey — Day 13: Linked List Logic Building

My daily **Data Structures & Algorithms (DSA)** practice repository for mastering problem-solving and coding interviews using **C++**.

---

# 📌 Topic: Singly Linked List Logic Building

**Language:** C++
**Category:** DSA Fundamentals

### 📝 What I Practiced

* Linked List Traversal
* Counting Nodes
* Searching for a Value
* Comparing Node Values
* Finding Maximum Element
* Counting Occurrences of a Value
* Finding Second Largest Element
* Handling Empty Linked Lists
* Using Temporary Pointers for Traversal
* Pointer Movement using `temp = temp->next`
* Edge Case Handling
* Building Logic Using Multiple Variables
* Dry Running Linked List Problems

---

# 🔄 Linked List Traversal

Practiced traversing a Singly Linked List using a temporary pointer.

```cpp
Node* temp = head;

while(temp != nullptr) {
    temp = temp->next;
}
```

Example:

```text
10 → 20 → 30 → 40 → nullptr
```

The `temp` pointer moves through every node until it reaches `nullptr`.

---

# 🔢 Count Nodes

Practiced counting the total number of nodes in a linked list.

```cpp
int count = 0;
Node* temp = head;

while(temp != nullptr) {
    count++;
    temp = temp->next;
}
```

Example:

```text
10 → 20 → 30 → nullptr
```

Output:

```text
3
```

The main idea is to increase the counter once for every node visited.

---

# 🔍 Search for an Element

Practiced searching for a particular value in the linked list.

```cpp
Node* temp = head;

while(temp != nullptr) {
    if(temp->data == value) {
        // value found
    }

    temp = temp->next;
}
```

Example:

```text
10 → 20 → 30 → 40
```

Searching for:

```text
30
```

The traversal checks:

```text
10 → 20 → 30 ✓
```

The value is found when:

```cpp
temp->data == value
```

---

# 🔎 Comparing Node Values

Practiced accessing and comparing values stored inside different nodes.

The important relationship is:

```cpp
temp->data
```

Here:

```text
temp      → address of current node
temp->data → value stored in current node
temp->next → address of next node
```

This makes it possible to build different comparison-based problems.

---

# 📈 Find Maximum Element

Practiced finding the largest value present in a linked list.

Basic logic:

```cpp
int maximum = head->data;
Node* temp = head->next;

while(temp != nullptr) {
    if(temp->data > maximum) {
        maximum = temp->data;
    }

    temp = temp->next;
}
```

Example:

```text
10 → 50 → 20 → 40
```

The maximum value is:

```text
50
```

The important idea is to maintain a variable containing the largest value found so far.

---

# 🔢 Count Occurrences

Practiced counting how many times a particular value appears in a linked list.

```cpp
int count = 0;
Node* temp = head;

while(temp != nullptr) {
    if(temp->data == value) {
        count++;
    }

    temp = temp->next;
}
```

Example:

```text
10 → 20 → 10 → 30 → 10
```

Searching for:

```text
10
```

Output:

```text
3
```

Every time the current node contains the required value, the counter increases.

---

# 🥈 Find Second Largest Element

Practiced building logic to find the **second largest value** in a linked list.

The basic idea is to maintain two variables:

```text
largest
secondLargest
```

While traversing the linked list, values are compared and the variables are updated when necessary.

Example:

```text
10 → 40 → 20 → 50 → 30
```

Largest:

```text
50
```

Second Largest:

```text
40
```

This problem helped me understand how multiple variables can work together while traversing a linked list.

---

# ⚠️ Empty Linked List

Practiced handling the case where:

```cpp
head == nullptr
```

An empty linked list contains no nodes.

```text
head
 ↓
nullptr
```

Before accessing:

```cpp
head->data
```

the list should be checked.

```cpp
if(head == nullptr) {
    // empty list
}
```

This prevents invalid access to a node that does not exist.

---

# 🧠 Important Pointer Pattern

A major pattern practiced today was:

```cpp
Node* temp = head;

while(temp != nullptr) {
    // process temp->data

    temp = temp->next;
}
```

This is one of the most important patterns for solving basic linked-list problems.

### Remember:

```text
temp        → current node
temp->data  → current node's value
temp->next  → next node
```

---

# 🔥 Logic Building Pattern

Most problems practiced today followed the same basic structure:

```text
Start from head
      ↓
Create required variables
      ↓
Traverse using temp
      ↓
Check / compare temp->data
      ↓
Update variables
      ↓
Move temp to next node
      ↓
Repeat until nullptr
      ↓
Print result
```

This helped me understand that many linked-list problems are not about changing the links. They are about **traversing the list and building logic around the node values**.

---

# 🧪 Dry Run Example

For the linked list:

```text
10 → 20 → 10 → 40 → 30 → nullptr
```

While traversing:

```text
temp = 10
temp = 20
temp = 10
temp = 40
temp = 30
temp = nullptr
```

During each step, the program can perform different operations such as:

```text
Count nodes
Search value
Find maximum
Count occurrences
Compare values
Find second largest
```

The traversal pattern remains almost the same; only the logic inside the loop changes.

---

# 📈 Learning Progress

```text
Linked List Basics
        ↓
Node Creation
        ↓
Traversal
        ↓
Insertion
        ↓
Deletion
        ↓
Counting Nodes
        ↓
Searching
        ↓
Finding Maximum
        ↓
Counting Occurrences
        ↓
Second Largest
        ↓
More Complex Linked List Problems
```

---

# 🗓️ Daily Practice Approach

### Day → Learn → Code → Test → Dry Run → Improve

For every new problem, I try to:

1. Understand the problem
2. Identify the required variables
3. Start traversal from `head`
4. Decide what condition is required
5. Update the variables during traversal
6. Move using `temp = temp->next`
7. Dry run the logic manually
8. Test edge cases
9. Improve my understanding of the pattern

---

# 🎯 Today's Main Learning

Today's practice was mainly about **building logic on top of linked-list traversal**.

I learned that once the traversal pattern is understood:

```cpp
Node* temp = head;

while(temp != nullptr) {
    // logic
    temp = temp->next;
}
```

many basic linked-list problems can be solved by changing only the logic inside the loop.

---

# 🔥 Next Goal

Continue practicing linked-list problems involving:

* Minimum Element
* Duplicate Values
* Sum of Nodes
* Average of Nodes
* Reverse Linked List
* Finding Middle Node
* Detecting Cycles
* More Pointer-Based Problems

---

# 🛠️ Technologies

* **Language:** C++
* **Editor:** VS Code
* **Version Control:** Git & GitHub

---

# 👨‍💻 About Me

**Krishna Sharma**

B.Tech CSE (AI/ML) Student

I am using this repository to strengthen my C++ fundamentals, practice Data Structures & Algorithms, and develop better problem-solving skills.

---

# ⭐ Final Goal

> **Understand the logic. Practice the pattern. Dry run the code. Solve the problem.**

This repository represents my ongoing journey from **C++ fundamentals to strong DSA and problem-solving skills**.

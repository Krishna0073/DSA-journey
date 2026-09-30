# 🚀 DSA Journey — Day 15: Stack Using Linked List

My daily **Data Structures & Algorithms (DSA)** practice repository for mastering problem-solving and coding interviews using **C++**.

---

# 📌 Topic: Stack Using Linked List

**Language:** C++
**Category:** DSA Fundamentals

### 📝 What I Practiced

* Implementing Stack using Linked List
* Understanding `top` pointer
* Stack `push()` operation
* Stack `pop()` operation
* Stack `peek()` operation
* Checking whether Stack is empty
* Displaying Stack elements
* Counting Stack elements
* Finding maximum element in Stack
* Searching for an element in Stack
* Reversing a Stack using pointers
* Dynamic memory allocation using `new`
* Releasing memory using `delete`
* Linked List traversal
* Understanding `Node*`
* Pointer movement using `temp = temp->next`
* Handling empty Stack conditions
* Using `nullptr`
* Pointer manipulation and node connections

---

# 🥞 Stack Concept

A **Stack** is a linear data structure that follows:

```text
LIFO
Last In → First Out
```

The element inserted last is removed first.

Example:

```text
push(10)
push(20)
push(30)
push(40)
```

Stack becomes:

```text
TOP
 ↓
40
30
20
10
```

If we perform:

```cpp
pop();
```

`40` is removed first.

---

# 🧩 Node Structure

The Stack is implemented using a Linked List.

```cpp
struct Node{
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=nullptr;
    }
};
```

Each node contains:

```text
data
 ↓
value stored in node

next
 ↓
address of next node
```

The structure is:

```text
Node
 ├── data
 └── next
```

---

# 🔝 Top Pointer

The Stack uses a pointer called `top`.

```cpp
Node* top=nullptr;
```

Initially:

```text
top
 ↓
nullptr
```

After inserting elements:

```text
top
 ↓
40 → 30 → 20 → 10 → nullptr
```

The `top` pointer always points to the element that will be removed first.

---

# 🔍 Check if Stack is Empty

The `isEmpty()` function checks whether the Stack contains any nodes.

```cpp
bool isEmpty(){
    return top==nullptr;
}
```

If:

```cpp
top == nullptr
```

the Stack is empty.

---

# ➕ Push Operation

`push()` inserts a new element at the top of the Stack.

```cpp
void push(int val){
    Node* newnode=new Node(val);
    newnode->next=top;
    top=newnode;
}
```

### Dry Run

Suppose:

```text
top
 ↓
30 → 20 → 10 → nullptr
```

Now:

```cpp
push(40);
```

First a new node is created:

```text
40
```

Then:

```cpp
newnode->next=top;
```

creates:

```text
40 → 30 → 20 → 10 → nullptr
```

Finally:

```cpp
top=newnode;
```

So:

```text
top
 ↓
40 → 30 → 20 → 10 → nullptr
```

---

# ➖ Pop Operation

`pop()` removes the element from the top of the Stack.

```cpp
void pop(){
    if(isEmpty()){
        return;
    }

    Node* temp=top;
    top=top->next;
    delete temp;
}
```

### Important Steps

First:

```cpp
Node* temp=top;
```

Store the current top node.

Then:

```cpp
top=top->next;
```

Move `top` to the next node.

Finally:

```cpp
delete temp;
```

Free the memory of the removed node.

Example:

```text
Before:

top
 ↓
40 → 30 → 20 → 10
```

After `pop()`:

```text
top
 ↓
30 → 20 → 10
```

---

# 👀 Peek Operation

`peek()` displays the element currently present at the top.

```cpp
void peek(){
    if(isEmpty()){
        cout<<"Stack is Empty";
        return;
    }

    cout<<top->data<<" ";
}
```

For:

```text
top
 ↓
40 → 30 → 20 → 10
```

Output:

```text
40
```

Unlike `pop()`, `peek()` does not remove the element.

---

# 📋 Display Stack

The `display()` function traverses the complete Stack.

```cpp
void display(){
    if(isEmpty()){
        cout<<"Stack is Empty";
        return;
    }

    Node* temp=top;

    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
```

The traversal pattern is:

```text
top
 ↓
40 → 30 → 20 → 10 → nullptr
```

Output:

```text
40 30 20 10
```

Important pattern:

```cpp
Node* temp=top;

while(temp!=nullptr){
    cout<<temp->data<<" ";
    temp=temp->next;
}
```

---

# 🔢 Count Stack Elements

The `count()` function counts the number of nodes in the Stack.

```cpp
int count(){
    int c=0;
    Node* temp=top;

    while(temp!=nullptr){
        c++;
        temp=temp->next;
    }

    return c;
}
```

Example:

```text
top
 ↓
40 → 30 → 20 → 10 → nullptr
```

Output:

```text
4
```

The counter increases once for every node visited.

---

# 📈 Find Maximum Element

The `maximum()` function finds the largest value in the Stack.

```cpp
int maximum(){
    Node* temp=top;
    int max=temp->data;

    while(temp!=nullptr){
        if(temp->data > max){
            max=temp->data;
        }

        temp=temp->next;
    }

    return max;
}
```

Example:

```text
40 → 30 → 20 → 10
```

Maximum:

```text
40
```

The important idea is:

```text
Start with first element
        ↓
Compare every next element
        ↓
Update max when a larger value is found
```

---

# 🔍 Search Element

The `search()` function searches for a value and returns its index.

```cpp
int search(int val){
    Node* temp=top;
    int index=0;

    while(temp!=nullptr){
        if(temp->data==val){
            return index;
        }

        temp=temp->next;
        index++;
    }

    return -1;
}
```

Example:

```text
top
 ↓
40 → 30 → 20 → 10
```

Searching:

```cpp
search(20);
```

Output:

```text
2
```

Because indexing starts from `0`:

```text
40 → index 0
30 → index 1
20 → index 2
10 → index 3
```

If the value does not exist:

```text
-1
```

is returned.

---

# 🔄 Reverse Stack

The Stack is reversed using three pointers:

```cpp
Node* prev=nullptr;
Node* current=top;
Node* next=nullptr;
```

Complete function:

```cpp
void reverse(){
    Node* prev=nullptr;
    Node* current=top;
    Node* next=nullptr;

    while(current!=nullptr){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }

    top=prev;
}
```

### Pointer Logic

The important three pointers are:

```text
prev
current
next
```

The main operations are:

```cpp
next=current->next;
current->next=prev;
prev=current;
current=next;
```

Example:

```text
Before:

top
 ↓
40 → 30 → 20 → 10 → nullptr
```

After reversing:

```text
top
 ↓
10 → 20 → 30 → 40 → nullptr
```

Finally:

```cpp
top=prev;
```

makes the new first node the Stack's top.

---

# 🧠 Important Pointer Pattern

A major pattern practiced today was Linked List traversal:

```cpp
Node* temp=top;

while(temp!=nullptr){
    temp=temp->next;
}
```

Here:

```text
temp
 ↓
current node
```

```text
temp->data
 ↓
value of current node
```

```text
temp->next
 ↓
address of next node
```

This same traversal pattern was used for:

```text
Display
Count
Maximum
Search
```

---

# 🔥 Stack Operations

The main Stack operations practiced were:

```text
push()
  ↓
Insert element at top

pop()
  ↓
Remove element from top

peek()
  ↓
View top element

isEmpty()
  ↓
Check whether Stack is empty
```

Additional logic-building operations:

```text
display()
count()
maximum()
search()
reverse()
```

---

# 🧪 Complete Example

Elements inserted:

```cpp
push(10);
push(20);
push(30);
push(40);
```

Stack becomes:

```text
TOP
 ↓
40
30
20
10
```

After:

```cpp
display();
```

Output:

```text
40 30 20 10
```

After:

```cpp
peek();
```

Output:

```text
40
```

After:

```cpp
pop();
```

Stack becomes:

```text
TOP
 ↓
30
20
10
```

Then:

```cpp
count();
```

returns:

```text
3
```

And:

```cpp
maximum();
```

returns:

```text
30
```

Searching:

```cpp
search(20);
```

returns:

```text
1
```

After:

```cpp
reverse();
```

Stack becomes:

```text
TOP
 ↓
10
20
30
```

---

# ⚠️ Empty Stack Handling

Before performing operations that access the top node, the Stack should be checked.

```cpp
if(isEmpty()){
    return;
}
```

For example:

```cpp
if(isEmpty()){
    cout<<"Stack is Empty";
    return;
}
```

This prevents accessing:

```cpp
top->data
```

when:

```cpp
top==nullptr
```

---

# 🧠 Logic Building Pattern

Most Stack operations using a Linked List follow this structure:

```text
Start from top
      ↓
Create required pointer/variables
      ↓
Check Stack condition
      ↓
Perform required operation
      ↓
Move through nodes if necessary
      ↓
Update result
      ↓
Return / print result
```

For traversal-based problems:

```text
top
 ↓
Create temp
 ↓
while(temp != nullptr)
 ↓
Process temp->data
 ↓
temp=temp->next
 ↓
Repeat
```

---

# 📚 Complexity

For the Linked List Stack:

| Operation   | Time Complexity |
| ----------- | --------------: |
| `push()`    |            O(1) |
| `pop()`     |            O(1) |
| `peek()`    |            O(1) |
| `isEmpty()` |            O(1) |
| `display()` |            O(n) |
| `count()`   |            O(n) |
| `maximum()` |            O(n) |
| `search()`  |            O(n) |
| `reverse()` |            O(n) |

---

# 📈 Learning Progress

```text
C++ Fundamentals
        ↓
Linked List Basics
        ↓
Node Creation
        ↓
Linked List Traversal
        ↓
Insertion
        ↓
Deletion
        ↓
Linked List Logic Building
        ↓
Double Pointers
        ↓
Node**
        ↓
Stack
        ↓
Stack Using Linked List
        ↓
Push
        ↓
Pop
        ↓
Peek
        ↓
Display
        ↓
Search / Count / Maximum
        ↓
Reverse Stack
```

---

# 🗓️ Daily Practice Approach

### Day → Learn → Code → Test → Dry Run → Improve

For every new DSA problem, I try to:

1. Understand the problem
2. Identify the required variables
3. Understand the data structure
4. Write the basic syntax
5. Build the logic step by step
6. Dry run the code manually
7. Test edge cases
8. Check pointer movement
9. Analyze time complexity
10. Improve the solution

---

# 🎯 Today's Main Learning

Today's practice focused on **implementing a Stack using a Linked List** and understanding how the `top` pointer controls Stack operations.

I practiced:

```text
push()
pop()
peek()
isEmpty()
display()
count()
maximum()
search()
reverse()
```

The most important concept was understanding that a Stack follows:

```text
LIFO
Last In → First Out
```

while the Linked List provides the nodes and pointers needed to implement it dynamically.

---

# 🔥 Key Takeaways

```text
top → points to the top node

push() → adds a node at top

pop() → removes the top node

peek() → reads the top node

isEmpty() → checks top == nullptr

temp → used for traversal

temp->data → current value

temp->next → next node

delete temp → releases removed node
```

The most important Stack pattern is:

```text
TOP
 ↓
New Node
 ↓
Previous Top
 ↓
Next Node
 ↓
nullptr
```

---

# 🚀 Next Goal

Continue practicing Stack problems involving:

* Stack using Arrays
* Stack using Linked List
* Reverse Stack
* Balanced Parentheses
* Expression Conversion
* Infix / Prefix / Postfix
* Stack-based problem solving
* More pointer-based Stack problems
* Understanding Stack applications

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

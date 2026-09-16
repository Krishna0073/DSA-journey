# 🚀 DSA Journey — Day 11: Linked List Insertion & Deletion

My daily **Data Structures & Algorithms (DSA)** practice repository for mastering problem-solving and coding interviews using **C++**.

---

# 📌 Topic: Singly Linked List Insertion & Deletion

**Language:** C++
**Category:** DSA Fundamentals

### 📝 What I Practiced

* Linked List Insertion
* Insertion at Beginning
* Insertion at End
* Insertion at Specific Position
* Linked List Deletion
* Deletion from Beginning
* Deletion from End
* Deletion from Specific Position
* Node Traversal
* Head Pointer Manipulation
* Pointer Manipulation
* Dynamic Memory Management using `new` and `delete`
* Handling Empty Linked Lists
* Handling Single-Node Linked Lists

---

# ➕ Linked List Insertion

Practiced inserting new nodes at different positions in a Singly Linked List.

## Insert at Beginning

```cpp
Node* newnode = new Node(val);

newnode->next = start;
start = newnode;
```

Example:

```text
10 → 20 → 30

Insert 5

5 → 10 → 20 → 30
```

The new node becomes the new `start` (head).

---

## Insert at End

```cpp
Node* newnode = new Node(val);

Node* temp = start;

while(temp->next != nullptr) {
    temp = temp->next;
}

temp->next = newnode;
```

Example:

```text
10 → 20 → 30

Insert 40

10 → 20 → 30 → 40
```

The traversal continues until the last node is reached.

---

## Insert at Specific Position

For inserting a node between two existing nodes:

```cpp
newnode->next = temp->next;
temp->next = newnode;
```

Example:

```text
10 → 20 → 30 → 40

Insert 25 at position 3

10 → 20 → 25 → 30 → 40
```

The important idea is that `temp` points to the node **before the insertion position**.

---

# ❌ Linked List Deletion

Practiced deleting nodes from different positions while maintaining correct pointer connections.

## Delete from Beginning

```cpp
Node* temp = start;

start = start->next;

delete temp;
```

Example:

```text
10 → 20 → 30

Delete 10

20 → 30
```

The `start` pointer moves to the second node and the old first node is deleted.

---

## Delete from End

To delete the last node, traverse until the **second-last node**.

```cpp
while(temp->next->next != nullptr) {
    temp = temp->next;
}

delete temp->next;
temp->next = nullptr;
```

Example:

```text
10 → 20 → 30 → 40

Delete 40

10 → 20 → 30
```

The second-last node's `next` is changed to `nullptr`.

---

## Delete from Specific Position

The node before the target node is located first.

```cpp
Node* del = temp->next;

temp->next = del->next;

delete del;
```

Example:

```text
10 → 20 → 30 → 40

Delete position 3

10 → 20 → 40
```

The target node is bypassed and then deleted from memory.

---

# 🧠 Important Pointer Patterns

### Insertion

```cpp
newnode->next = temp->next;
temp->next = newnode;
```

### Deletion

```cpp
Node* del = temp->next;
temp->next = del->next;
delete del;
```

These two patterns are the core logic behind insertion and deletion at a specific position.

---

# ⏱️ Time Complexity

| Operation             | Time Complexity |
| --------------------- | --------------: |
| Insert at Beginning   |            O(1) |
| Insert at End         |            O(n) |
| Insert at Position    |            O(n) |
| Delete from Beginning |            O(1) |
| Delete from End       |            O(n) |
| Delete from Position  |            O(n) |
| Traversal             |            O(n) |

---

# 🔄 Singly vs Doubly Linked List

### Singly Linked List

```text
10 → 20 → 30 → nullptr
```

Each node contains:

```cpp
Node* next;
```

### Doubly Linked List

```text
nullptr ← 10 ⇄ 20 ⇄ 30 → nullptr
```

Each node contains:

```cpp
Node* prev;
Node* next;
```

A Doubly Linked List allows traversal in both directions, while a Singly Linked List normally allows traversal only forward.

---

# 🛠️ Memory Management

Nodes are dynamically created using:

```cpp
Node* newnode = new Node(val);
```

When a node is no longer needed, it should be removed using:

```cpp
delete node;
```

This helps prevent unnecessary memory usage.

---

# 🎯 Key Learning

Today's main focus was understanding **how pointers are changed during insertion and deletion** rather than simply memorizing functions.

The most important patterns practiced were:

```text
Insertion:
Connect new node → Connect previous node

Deletion:
Save node → Bypass node → Delete node
```

---

# 🚀 DSA Progress

```text
Day 7  → Linked List Basics
Day 8  → Linked List Operations & Doubly Linked List
Day 9  → Linked List Practice
Day 10 → Linked List Sum & Doubly Linked List
Day 11 → Singly Linked List Insertion & Deletion
```

Continuing the journey toward stronger **DSA problem-solving and C++ coding skills**.

# 🚀 DSA Journey — Day 10: Linked List Sum & Doubly Linked List

My daily **Data Structures & Algorithms (DSA)** practice repository for mastering problem-solving and coding interviews using **C++**.

---

# 📌 Topic: Linked List Sum & Doubly Linked List Operations

**Language:** C++
**Category:** DSA Fundamentals

### 📝 What I Practiced

* Add Two Numbers using Linked Lists
* Linked List Traversal
* Carry Handling in Linked List Addition
* Creating Result Linked Lists
* Doubly Linked List
* `prev` and `next` Pointers
* Insertion at Beginning
* Insertion at End
* Insertion at Specific Position
* Deletion from Beginning
* Deletion from End
* Deletion from Specific Position
* Forward Traversal
* Backward Traversal
* Pointer Manipulation
* Dynamic Memory Management using `new` and `delete`

---

# 🧮 Add Two Numbers Using Linked Lists

Solved the problem of adding two numbers represented by linked lists.

Example:

```text
l1 = [2,4,3]
l2 = [5,6,4]

342 + 465 = 807

Output:

[7,0,8]
```

Since the digits are stored in reverse order, addition can be performed directly from the head of both linked lists.

### Core Logic

```cpp
int sum = carry;

if(l1 != nullptr) {
    sum += l1->val;
    l1 = l1->next;
}

if(l2 != nullptr) {
    sum += l2->val;
    l2 = l2->next;
}

int digit = sum % 10;
carry = sum / 10;
```

The `carry` stores the value that needs to be added to the next digit.

---

# 🔗 Doubly Linked List

A Doubly Linked List is a linked list where each node contains two pointers:

```cpp
Node* prev;
Node* next;
```

Structure:

```text
nullptr ← [10] ⇄ [20] ⇄ [30] → nullptr
```

`prev` allows movement toward the previous node, while `next` allows movement toward the next node.

---

# ➕ Doubly Linked List Insertion

### Insert at Beginning

```cpp
newNode->next = head;
head->prev = newNode;
head = newNode;
```

Example:

```text
10 ⇄ 20 ⇄ 30

Insert 5

5 ⇄ 10 ⇄ 20 ⇄ 30
```

### Insert at End

```text
10 ⇄ 20 ⇄ 30

Insert 40

10 ⇄ 20 ⇄ 30 ⇄ 40
```

### Insert at Specific Position

Both `prev` and `next` connections must be updated when inserting a node between two nodes.

```text
10 ⇄ 20 ⇄ 30

Insert 15

10 ⇄ 15 ⇄ 20 ⇄ 30
```

---

# ❌ Doubly Linked List Deletion

### Delete from Beginning

```text
10 ⇄ 20 ⇄ 30

Delete 10

20 ⇄ 30
```

The new head's `prev` becomes:

```cpp
head->prev = nullptr;
```

### Delete from End

```text
10 ⇄ 20 ⇄ 30

Delete 30

10 ⇄ 20
```

The previous node's `next` becomes:

```cpp
temp->prev->next =
```

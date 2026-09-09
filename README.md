# 🚀 DSA Journey — Day 8: Linked List Insertion & Deletion

My daily **Data Structures & Algorithms (DSA)** practice repository for mastering problem-solving and coding interviews using **C++**.

---

# 📌 Topic: Linked List — Insertion & Deletion

**Language:** C++
**Category:** DSA Fundamentals

### 📝 What I Practiced

* Linked List Insertion
* Insertion at Beginning
* Insertion at End
* Insertion at a Specific Position
* Linked List Deletion
* Deletion from Beginning
* Deletion from End
* Deletion of a Specific Node
* Pointer Manipulation
* Updating `next` Pointers
* Dynamic Memory Management using `new` and `delete`

---

# ⚡ Time & Space Complexity

| Algorithm                   | Time Complexity | Space Complexity |
| --------------------------- | --------------: | ---------------: |
| Insert at Beginning         |            O(1) |             O(1) |
| Insert at End               |            O(n) |             O(1) |
| Insert at Specific Position |            O(n) |             O(1) |
| Delete from Beginning       |            O(1) |             O(1) |
| Delete from End             |            O(n) |             O(1) |
| Delete Specific Node        |            O(n) |             O(1) |
| Linked List Traversal       |            O(n) |             O(1) |

> **Note:** If a tail pointer or direct reference to the required node is available, some insertion/deletion operations can be performed in **O(1)**.

---

# 💡 Concepts Learned

### 1. Insertion

Insertion means adding a new node to an existing linked list by modifying the `next` pointers.

For inserting a node between two nodes:

```cpp
newNode->next = previous->next;
previous->next = newNode;
```

Example:

```text
10 → 20 → 30

Insert 15

10 → 15 → 20 → 30
```

---

### 2. Deletion

Deletion means removing a node from the linked list and reconnecting the surrounding nodes.

For deleting a node:

```cpp
previous->next = current->next;
delete current;
```

Example:

```text
10 → 15 → 20 → 30

Delete 20

10 → 15 → 30
```

---

### 3. Pointer Manipulation

Learned how changing the `next` pointer can modify the structure of an entire linked list.

```text
Before:

10 → 20 → 30

After changing the link:

10 ─────→ 30
     20
```

---

### 4. Dynamic Memory Management

Used:

```cpp
new Node(value);
```

to dynamically create nodes and:

```cpp
delete node;
```

to release memory when a node is removed.

---

### 5. Traversal After Modification

After insertion or deletion, the list can be traversed again using:

```cpp
Node* temp = head;

while(temp != nullptr) {
    cout << temp->data << " ";
    temp = temp->next;
}
```

---

# 📂 Files Included

```text
01-CreateNode.cpp
02-Traversal.cpp
03-ConnectNodes.cpp
04-InsertAtBeginning.cpp
05-InsertAtEnd.cpp
06-InsertAtPosition.cpp
07-DeleteFromBeginning.cpp
08-DeleteFromEnd.cpp
09-DeleteAtPosition.cpp
```

Each file contains a complete C++ implementation with comments and output.

---

# 📚 Concepts Practiced

* Linked Lists
* Nodes
* Pointers
* Dynamic Memory Allocation
* Head & Tail
* Node Traversal
* Insertion
* Deletion
* Pointer Manipulation
* `new` and `delete`
* Updating Node Connections

---

# 🔥 Key Pointer Patterns

### Insertion

```cpp
newNode->next = previous->next;
previous->next = newNode;
```

### Deletion

```cpp
previous->next = current->next;
delete current;
```

These pointer operations form the foundation of linked list manipulation.

---

# ✅ Progress Tracker

| Day       | Topic                                | Status           |
| --------- | ------------------------------------ | ---------------- |
| Day 1     | Two Sum                              | ✅ Completed      |
| Day 2     | C++ STL                              | ✅ Completed      |
| Day 3     | Arrays, Sorting & Searching          | ✅ Completed      |
| Day 7     | Linked List Basics                   | ✅ Completed      |
| **Day 8** | **Linked List Insertion & Deletion** | **🚀 Completed** |

---

## 🎯 Goal

Solve DSA problems consistently, strengthen problem-solving skills, and build strong fundamentals for **coding interviews and placements** one day at a time.

**Day 8 Completed 🚀**

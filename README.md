# 🚀 DSA Journey — Day 12: Linked List Logic Building

My daily **Data Structures & Algorithms (DSA)** practice repository for mastering problem-solving and coding interviews using **C++**.

---

# 📌 Topic: Singly Linked List Logic Building

**Language:** C++
**Category:** DSA Fundamentals

### 📝 What I Practiced

* Linked List Traversal
* Counting Nodes
* Searching and Comparing Node Values
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
```

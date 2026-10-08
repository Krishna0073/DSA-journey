🚀 DSA Journey — Day 37
My daily Data Structures & Algorithms (DSA) practice repository for strengthening C++ fundamentals, improving problem-solving skills, and preparing for coding interviews.
📌 Current Topic: Priority Queue Using Linked List
Language: C++
Category: Data Structures & Algorithms
Current Progress: Day 37
🧠 What This Repository Is About
This repository contains my ongoing DSA practice in C++.
I am using it to learn concepts step by step, implement them from scratch, practice different operations, and improve my understanding of pointers, data structures, algorithms, and problem-solving.
The journey currently includes:
- C++ fundamentals
- Arrays
- Searching
- Sorting
- Linked Lists
- Pointers
- Double Pointers
- Stack
- Queue
- Priority Queue
- Logic-building problems
- Time complexity
📚 Topics Practiced
🔗 Linked List
- Node creation
- Linked List traversal
- Insertion
- Deletion
- Single Linked List
- Doubly Linked List
- Double pointers
- Reversing a Linked List
- Removing duplicates
- Linked List operations
- Linked List problem solving
🥞 Stack
- Stack basics
- Stack using Linked List
- push()
- pop()
- peek()
- Checking whether Stack is empty
- Displaying Stack elements
- Counting elements
- Finding maximum element
- Searching elements
- Reversing a Stack
- Pointer-based Stack operations
Stack Concept
A Stack follows:
LIFO
Last In → First Out
Example:
TOP
 ↓
40
30
20
10
If pop() is performed, 40 is removed first.
🚶 Queue
- Queue using Array
- Queue using Linked List
- Queue insertion
- Queue deletion
- Front and Rear pointers
- Queue traversal
- Understanding FIFO
Queue Concept
A Queue follows:
FIFO
First In → First Out
⭐ Priority Queue
- Priority Queue using Array
- Priority Queue using Linked List
- Priority-based insertion
- Maintaining sorted order
- Pointer traversal
- Node connections
- Dynamic memory allocation
Priority Queue Concept
A Priority Queue processes elements according to their priority instead of simply following normal FIFO order.
Example:
5 → 10 → 20 → 30
If smaller values have higher priority:
5 = Highest Priority
30 = Lowest Priority
🔍 Searching
The repository contains practice for searching algorithms, including:
- Binary Search
🔄 Sorting
Sorting algorithms practiced include:
- Bubble Sort
- Insertion Sort
- Merge Sort
- Selection Sort
🧩 Logic Building
Additional practice includes:
- Basic logic problems
- Two Sum
- Character/array practice
- General programming practice
⏱️ Time Complexity
I am also practicing analysis of algorithm efficiency using:
- Time Complexity
- Big-O notation
- Understanding how operations scale with input size
🗂️ Repository Files
The repository currently contains the following practice files/programs:
🔗 Linked List
- single linked list.cpp
- single linked list practice.cpp
- single linked list question.cpp
- operations on double linked list
- reverse linked list.cpp
- remove duplicate.cpp
- LinkedList1.cpp
- linked list DoublePointer.cpp
- Add two Numbers
- Insertion and deletion.cpp
🥞 Stack
- Stackbasic.cpp
- Stack using LL.cpp
- Stack_Practice_Linked_List
🚶 Queue
- Queue using array.cpp
- Queue using linked list.cpp
⭐ Priority Queue
- Priority_queue_using_array.cpp
- Priority_queue_using_Linked_List.cpp
🔍 Searching
- binary search.cpp
🔄 Sorting
- bubble sort.cpp
- insertion sort.cpp
- mergesort.cpp
- selection sort.cpp
🧠 Logic Building / Practice
- basic logic practice.cpp
- practice11.cpp
- charrray.cpp
- two sum.cpp
⏱️ Complexity
- Time complexity day2
📈 DSA Learning Progress
C++ Fundamentals
       ↓
Arrays
       ↓
Searching
       ↓
Sorting
       ↓
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
Doubly Linked List
       ↓
Reverse Linked List
       ↓
Remove Duplicates
       ↓
Pointers
       ↓
Double Pointers
       ↓
Stack
       ↓
Stack Using Linked List
       ↓
Queue Using Array
       ↓
Queue Using Linked List
       ↓
Priority Queue
       ↓
Priority Queue Using Array
       ↓
Priority Queue Using Linked List
       ↓
More DSA Problems 🚀
🧠 Important Pointer Patterns
One of the major parts of my DSA journey is understanding pointers and Linked Lists.
A common traversal pattern is:
Node* temp=head;

while(temp!=nullptr){
    temp=temp->next;
}
Here:
temp
 ↓
Current Node
temp->data
 ↓
Value stored in current node
temp->next
 ↓
Address of the next node
Another important Linked List insertion pattern is:
newnode->next=temp->next;
temp->next=newnode;
Understanding these pointer movements is an important part of my DSA practice.
🧪 My Problem-Solving Approach
For every new DSA problem, I try to follow:
Understand
    ↓
Identify
    ↓
Write Syntax
    ↓
Build Logic
    ↓
Code
    ↓
Dry Run
    ↓
Test Edge Cases
    ↓
Debug
    ↓
Analyze Complexity
    ↓
Improve
Daily Practice Pattern
Learn → Code → Test → Dry Run → Debug → Improve

📊 Complexity of Common Operations
Stack Using Linked List
Operation	Time Complexity
push()	O(1)
pop()	O(1)
peek()	O(1)
isEmpty()	O(1)
display()	O(n)
count()	O(n)
maximum()	O(n)
search()	O(n)
reverse()	O(n)


Priority Queue Using Linked List
Operation	Time Complexity
Insert	O(n)
Delete highest priority	O(1)
Peek	O(1)
Display	O(n)
Search	O(n)


⚖️ Queue vs Priority Queue
Feature	Queue	Priority Queue
Processing	FIFO	Priority based
Main rule	First In → First Out	Highest priority first
Ordering	Insertion order	Priority order
Example	Normal waiting line	Emergency service


📝 Current Day — Day 37
Priority Queue Using Linked List
The current focus is implementing a Priority Queue using a Linked List.
The main concepts being practiced are:
Node Creation
      ↓
Linked List
      ↓
Priority Comparison
      ↓
Priority-Based Insertion
      ↓
Pointer Traversal
      ↓
Node Connections
      ↓
Dynamic Memory
      ↓
Edge Cases
      ↓
Complexity Analysis
The main goal is not only to make the code work, but to understand why each pointer and operation is required.
🔥 Key Takeaways
Node* → stores the address of a node

temp → used for traversal

temp->data → current node's value

temp->next → address of the next node

new → dynamically creates a node

delete → releases dynamically allocated memory

top → points to the top of a Linked List Stack

Priority Queue → processes elements according to priority

Linked List → provides dynamic node-based storage
🗓️ Journey So Far
Day 1+
  ↓
C++ Fundamentals
  ↓
Arrays
  ↓
Searching
  ↓
Sorting
  ↓
Linked Lists
  ↓
Pointers
  ↓
Double Pointers
  ↓
Stack
  ↓
Queue
  ↓
Priority Queue
  ↓
Day 37 🚀
This repository is continuously updated as I learn and practice new DSA concepts.
🛠️ Technologies
- Language: C++
- Editor: VS Code
- Version Control: Git
- Platform: GitHub
👨‍💻 About Me
Krishna Sharma
B.Tech CSE (AI/ML) Student
I am using this repository to strengthen my C++ fundamentals, practice Data Structures & Algorithms, and develop better problem-solving skills.
🎯 Goals
My goal is to gradually build strong fundamentals in:
- Data Structures
- Algorithms
- Problem Solving
- C++
- Competitive Programming
- Coding Interviews
I want to focus on understanding the logic behind a solution, rather than simply memorizing code.
⭐ Final Goal
Understand the logic. Practice the pattern. Dry run the code. Solve the problem.

This repository represents my ongoing journey from C++ fundamentals to strong DSA and problem-solving skills.
🚀 Current Status
C++ Fundamentals       ✅
Arrays                 ✅
Searching              ✅
Sorting                ✅
Linked Lists           ✅
Pointers               ✅
Double Pointers        ✅
Stack                  ✅
Queue                  ✅
Priority Queue         🚀
More DSA Problems      🔜
💪 Keep Coding
Learn.
Practice.
Fail.
Debug.
Understand.
Improve.
Repeat.
Day 37 — Still building. 🚀

🚀 DSA Journey — Day 37: Priority Queue Using Linked ListMy daily Data Structures & Algorithms (DSA) practice repository for mastering problem-solving and coding interviews using C++.📌 Topic: Priority Queue Using Linked ListLanguage: C++Category: DSA Fundamentals / Advanced Linear Data Structures📝 What I PracticedImplementing Priority Queue using Linked ListMaintaining elements in ordered priority sequence during insertionPriority Queue enqueue() (Insertion based on priority)Priority Queue dequeue() (Removal of highest priority element)Accessing the highest priority element (peek() / front())Checking whether Priority Queue is emptyDisplaying Priority Queue elementsDynamic memory allocation using newMemory cleanup using deletePointer manipulation and node links update (temp->next)Handling edge cases (Empty queue, inserting at head, inserting at tail)📂 Repository Files & Practice OverviewBelow is the structured list of all files in this repository tracking my learning journey:   File / Module NameDescription / Topic CoveredPriority_queue_using_Linked_List.cppPriority Queue implementation using Linked List (Day 37)   Priority_queue_using_array.cppPriority Queue implementation using Array   Queue using Linked list.cppStandard Queue using Linked List   Queue using array.cppStandard Queue using Array   LinkedList_DoublePointer.cppLinked List operations using double pointers (Node**)   Stack using LL.cppStack implementation using Linked List   Stack.basic.cppStack implementation using Array / Basics   Stack_Practice_Linked_listLinked List Stack practice problems   Add two NumbersAdd two numbers represented as Linked Lists   reverse linked list.cppReversing a Linked List in-place   remove duplicate.cppRemoving duplicates from a Linked List   operations on double linked listComplete operations on Doubly Linked List   single linked lis questiont.cppPractice problems on Singly Linked List   single linked list practice.cppFundamental practice on Singly Linked List   single linked list.cppStandard Singly Linked List implementation   LinkedList1.cppIntroductory Linked List code   Insertion and deletion.cppLinked List node insertion and deletion operations   two sum.cppTwo Sum problem implementation   binary search.cppBinary Search algorithm   bubble sort.cppBubble Sort algorithm   Insertion sort.cppInsertion Sort algorithm   selection sort.cppSelection Sort algorithm   mergesorted.cppMerging two sorted structures/arrays   ch array.cppCharacter Array practice and basic string manipulation   basicLogic practice.cppBasic problem-solving and logic-building code   Time_complexity day2Notes and examples analyzing Time Complexity   practice11.cppMiscellaneous practice code   👑 Priority Queue ConceptA Priority Queue is an extension of a queue where each element has a priority value associated with it. Elements with higher priority are served before elements with lower priority.PlaintextHigher Priority Element → Dequeued First
Equal Priority → Served in FIFO Order
Order Behavior (Higher Value = Higher Priority):Plaintextenqueue(10, priority 1)
enqueue(30, priority 3)
enqueue(20, priority 2)
Stored order inside Linked List:PlaintextHEAD
 ↓
(30, P:3) → (20, P:2) → (10, P:1) → nullptr
When performing dequeue(), (30, P:3) is removed first because it has the highest priority.🧩 Node Structure for Priority QueueC++struct Node {
    int data;
    int priority;
    Node* next;

    Node(int val, int p) {
        data = val;
        priority = p;
        next = nullptr;
    }
};
➕ Enqueue (Insertion by Priority)When inserting a node, we place it in the correct sorted position based on priority.C++void enqueue(Node*& head, int val, int p) {
    Node* newNode = new Node(val, p);

    // Case 1: Head is empty or new node has higher priority than head
    if (head == nullptr || p > head->priority) {
        newNode->next = head;
        head = newNode;
        return;
    }

    // Case 2: Traverse to find correct position
    Node* temp = head;
    while (temp->next != nullptr && temp->next->priority >= p) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}
➖ Dequeue OperationSince the list is kept ordered by priority, removing the highest priority element is as simple as removing the head node.C++void dequeue(Node*& head) {
    if (head == nullptr) {
        cout << "Priority Queue Underflow!\n";
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}
👀 Peek OperationC++int peek(Node* head) {
    if (head == nullptr) {
        cout << "Priority Queue is empty!\n";
        return -1;
    }
    return head->data;
}
📚 Complexity AnalysisOperationTime ComplexitySpace Complexityenqueue()$O(N)$$O(1)$dequeue()$O(1)$$O(1)$peek()$O(1)$$O(1)$isEmpty()$O(1)$$O(1)$📈 Learning ProgressPlaintextC++ Fundamentals
        ↓
Sorting & Searching Algorithms
        ↓
Singly & Doubly Linked Lists
        ↓
Stacks & Queues (Arrays & Linked Lists)
        ↓
Priority Queue using Array
        ↓
Priority Queue using Linked List (Day 37)
👨‍💻 About MeKrishna SharmaB.Tech CSE (AI/ML) StudentI am using this repository to document my daily C++ practice, master Data Structures & Algorithms, and prepare for technical coding interviews.⭐ Final GoalUnderstand the logic. Practice the pattern. Dry run the code. Solve the problem.

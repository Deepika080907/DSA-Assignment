# DSA Assignment - Stack and Circular Queue

This repository contains the solutions for the DSA assignment implemented in C.

## Q1 - Stack Using Array

### Operations
- PUSH(x)
- POP()
- PEEK()
- DISPLAY()

### Conditions
- Stack Overflow: occurs when the stack is full and another element is inserted.
- Stack Underflow: occurs when POP is performed on an empty stack.

### Complexity

| Operation | Time Complexity | Space Complexity |
|---|---|---|
| PUSH | O(1) | O(1) |
| POP | O(1) | O(1) |
| PEEK | O(1) | O(1) |
| DISPLAY | O(n) | O(1) |

The array used for the stack requires O(n) total space.

---

## Q2 - Circular Queue Using Array

### Operations
- ENQUEUE(x)
- DEQUEUE()
- FRONT()
- DISPLAY()

### Conditions
- Queue Overflow: occurs when the circular queue is full.
- Queue Underflow: occurs when the queue is empty.

### Complexity

| Operation | Time Complexity | Space Complexity |
|---|---|---|
| ENQUEUE | O(1) | O(1) |
| DEQUEUE | O(1) | O(1) |
| FRONT | O(1) | O(1) |
| DISPLAY | O(n) | O(1) |

The array used for the queue requires O(n) total space.

---

## Circular Queue vs Linear Queue

| Feature | Linear Queue | Circular Queue |
|---|---|---|
| Memory utilization | May waste unused positions | Reuses positions |
| Wrap-around | No | Yes |
| False overflow | Possible | Avoided |
| ENQUEUE | O(1) | O(1) |
| DEQUEUE | O(1) | O(1) |

In a linear queue, after deletions, empty positions may remain at the beginning while REAR reaches the last index. This can cause false overflow. A circular queue solves this problem by wrapping REAR back to the beginning.

## Language

C Programming

## Concepts Used

- Arrays
- Stack
- Queue
- Circular Queue
- LIFO
- FIFO
- Time Complexity
- Space Complexity

## Files

- `Q1_Stack_Array/stack.c` - Stack implementation
- `Q2_Circular_Queue/circular_queue.c` - Circular queue implementation

#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

// Check whether queue is empty
int isEmpty()
{
    return front == -1;
}

// Check whether queue is full
int isFull()
{
    return (rear + 1) % MAX == front;
}

// ENQUEUE operation
void enqueue(int x)
{
    if (isFull())
    {
        printf("Queue Overflow! Queue is full.\n");
        return;
    }

    if (isEmpty())
    {
        front = rear = 0;
    }
    else
    {
        rear = (rear + 1) % MAX;
    }

    queue[rear] = x;
    printf("%d inserted into circular queue.\n", x);
}

// DEQUEUE operation
void dequeue()
{
    int value;

    if (isEmpty())
    {
        printf("Queue Underflow! Queue is empty.\n");
        return;
    }

    value = queue[front];

    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % MAX;
    }

    printf("%d deleted from circular queue.\n", value);
}

// FRONT operation
void getFront()
{
    if (isEmpty())
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("Front element = %d\n", queue[front]);
}

// DISPLAY operation
void display()
{
    int i;

    if (isEmpty())
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("Circular Queue elements are:\n");

    i = front;
    while (1)
    {
        printf("%d ", queue[i]);

        if (i == rear)
            break;

        i = (i + 1) % MAX;
    }

    printf("\n");
}

int main()
{
    int choice, value;

    while (1)
    {
        printf("\n===== CIRCULAR QUEUE MENU =====\n");
        printf("1. ENQUEUE\n");
        printf("2. DEQUEUE\n");
        printf("3. FRONT\n");
        printf("4. DISPLAY\n");
        printf("5. EXIT\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                getFront();
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Program terminated.\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}

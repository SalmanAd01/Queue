#include <stdio.h>
#define MAX_SIZE 100
int num;
int arr[MAX_SIZE];
int front=0,rear=0;
void enqueue(int);
void take_element(){
    for (int i = 0; i < num; i++)
    {
        int temp;
        scanf("%d",&temp);
        enqueue(temp);
    }
}
void display(){
    printf("The Elements in the queue is given by\n");
    for (int i = front; i < rear; i++)
    {
        printf("Element is : %d\n",arr[i]);
    }
    
}
int isfull(){
    if (rear == MAX_SIZE -1)
    {
        return 1;
    }
    return 0;
}
int isempty(){
    if (front == rear)
    {
        return 1;
    }
    return 0;
}
void enqueue(int val){
    if (isfull())
    {
        printf("Queue Overflow\n");
    }
    else
    {
        arr[rear] = val;
        rear++;
    }
}
int dequeue(){
    if (isempty())
    {
        printf("Queue Underfolw\n");
        return -1;
    }
    else
    {
        int val = arr[front];
        front++;
        return val;
    }
}
int main(){
    printf("Enter The Size Of The Queue\n");
    scanf("%d",&num);
    take_element();
    int choice,number;
    char ch;
    do
    {
        printf("Enter 1 to display the element of the queue\nEnter 2 to enqueue the element\nEnter 3 to Dequeue The Element\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            display();
            break;
        case 2: 
            printf("Enter the number which you wanted to enqueue\n");
            scanf("%d",&number);
            enqueue(number);
            break;
        case 3:
            printf("Dequeue Number is %d\n",dequeue());
            break;
        default:
        printf("Enter the valid number\n");
            break;
        }
        printf("Enter the S to stop\n");
        scanf(" %c",&ch);
    } while (ch !='S');
    
    return 0;
}

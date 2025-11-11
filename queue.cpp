#include<iostream>
using namespace std;
#define invalid -9999999


int size=5;

struct Queue
{
    int q[5];
    int front, rear;

    bool isEmpty()
    {
        if(front==-1 && rear==-1)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }

    bool isFull()
    {
        if(rear==size-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool enqueue(int element)
    {
        if(isFull())
        {
            return false;
        }
        else if(isEmpty())
        {
            front=0;
            rear=0;
            q[rear]=element;
            return true;
        }
        else
        {
            rear++;
            q[rear]=element;
            return true;
        }
    }

    bool dequeue()
    {
        if(isEmpty())
        {
            return false;
        }
        else if(front==rear)
        {
            front=-1;
            rear=-1;
            return true;
        }
        else
        {
            front++;
            return true;
        }
    }

    int getFrontElement()
    {
        if(isEmpty())
        {
            return invalid;
        }
        else
        {
            return q[front];
        }
    }

    void show()
    {
        if(isEmpty())
        {
            cout<<"Nothing to show."<<endl;
        }
        else
        {
            for(int i=front; i<=rear; i++)
            {
                cout<<q[i]<<" "<<endl;
            }
            cout<<endl;
        }
    }
};

struct Circular_Queue
{
    int q[5];
    int front;
    int rear;

    bool isEmpty()
    {
        if(front==-1 && rear==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isFull()
    {
        if(front==(rear+1)%size)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool enqueue(int element)
    {
        if(isFull())
        {
            return false;
        }
        else if(isEmpty())
        {
            front = 0; 
            rear = 0;
            q[rear]=element;
            return true;
        }
        else
        {
            rear = (rear+1)%size;
            q[rear]=element;
            return true;
        }
    }

    bool dequeue()
    {
        if(isEmpty())
        {
            return false;
        }
        else if(front==rear)
        {
            front=-1;
            rear=-1;
            return true;
        }
        else
        {
            front = (front+1)%size;
            return true;
        }
    }

    int getFrontElement()
    {
        if(isEmpty())
        {
            return invalid;
        }
        else
        {
            return q[front];
        }
    }

    void show()
    {
        
        if(isEmpty())
        {
            cout<<"Nothing to show."<<endl;
        }
        else if(front<=rear)
        {
            for(int i=front; i<=rear; i++)
            {
                cout<<q[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            for(int i=front; i<size; i++)
            {
                cout<<q[i]<<" ";
            }
            for(int i=0; i<=rear; i++)
            {
                cout<<q[i]<<" ";
            }
            cout<<endl;
        }
    }
};

/*int main()
{
    Queue q1;
    q1.front=-1;
    q1.rear=-1;

    q1.show();
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    //cout<<"Front = "<<q1.front<<endl;
   //cout<<"Rear = "<<q1.rear<<endl;
    q1.dequeue();
    //cout<<"Front = "<<q1.front<<endl;
    //cout<<"Rear = "<<q1.rear<<endl;
    q1.dequeue();
    //cout<<q1.isEmpty()<<endl;
    //cout<<"Front = "<<q1.front<<endl;
    //cout<<"Rear = "<<q1.rear<<endl;
    q1.dequeue();
    cout<<q1.isEmpty()<<endl;

    cout<<"Front = "<<q1.front<<endl;
    cout<<"Rear = "<<q1.rear<<endl;





    return 0;
}*/

int main()
{
    Circular_Queue q1;
    q1.front=-1;
    q1.rear=-1;

    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);
    q1.show();
    q1.dequeue();
    q1.show();
    q1.enqueue(60);
    q1.show();
   
    q1.enqueue(30);
    
    q1.dequeue();
    q1.dequeue();
    q1.enqueue(30);
    cout<<"Front = "<<q1.front<<endl;
    cout<<"Rear = "<<q1.rear<<endl;
    cout<<q1.isFull()<<endl;
    q1.show();










}
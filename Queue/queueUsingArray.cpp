#include<iostream>
using namespace std;

class Queue
{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    int count;

    Queue(int s)
    {
        this->size=s;
        arr = new int[s];
        cout<<"Queue of size " <<s<<" is created."<<endl;
        count=0;
        front = rear = 0;
    }

    void push(int val)
    {
        if(count<size)
        {
            arr[rear%size] = val;
            rear++;
            count++;
        }
        else{
            cout<<"Overflow !! There is no space in Queue"<<endl;
        }
    }
    void pop()
    {
        if(count==0) //no element in queue
        {
            cout<<"Underflow!! Queue is empty"<<endl;
        }
        else
        {
            arr[front%size]=-1;
            front++;
            count--;

        }

    }
    void top()
    {
        if(count==0)
        {
            cout<<"Queue is empty"<<endl;
        }
        else{
            cout<<"Top element : "<<arr[front % size]<<endl;
        }

    }
    void print()
    {
        cout<<"Current elements in the queue are :"<<endl;
        for(int i=front;i<rear;i++)
        {
            cout<<arr[i%size]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.print();
    cout<<"After popping:"<<endl;
    q.pop();
    q.print();
    cout<<"After pushing 75:"<<endl;
    q.push(75);
    q.print();
    q.top();
    q.pop();
    q.pop();
    q.top();
    q.print();
    q.push(99);
    q.push(199);
    q.print();
    


    return 0;
}
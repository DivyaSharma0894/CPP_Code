#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
class stack
{
    Node *top;

public:
    stack()
    {
        top = NULL;
    }
    void push(int x)
    {
        Node *ans = new Node(x);
        ans->next = top;
        top = ans;
    }
    void pop()
    {
        if (isempty())
        {
            return;
        }
        Node *temp = top;
        top = top->next;
        delete temp;
    }
    int peek()
    {
        if (isempty())
        {
            return -1;
        }
        return top->data;
    }
    bool isempty()
    {
        return top == NULL;
    }
    void display()
    {
        Node *temp = top;
        if (isempty())
        {
            cout<<"list is empty"<<endl;
        }else{
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;}
    }
};
int main()
{
    stack list;
    list.push(10);
    list.push(20);
    list.push(30);
    list.push(40);
    list.push(50);
    list.pop();
    list.display();
    cout<<list.peek();
}
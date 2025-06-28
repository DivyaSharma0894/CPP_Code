#include<iostream>
using namespace std;
class dequeue{
    public:
    int capacity;
    int front;
    int rear;
    int *arr;
    int size;
dequeue(int val){
    capacity=val;
    front=0;
    rear=-1;
    arr=new int[capacity];
    size=0;
}
bool isfull(){
    return size==capacity;
}
bool isempty(){
    return size==0;
}
void insertfront(int val){
    if(isfull()){
        cout<<"full"<<endl;
    }
    else{
        front=(front-1+capacity)%capacity;
        arr[front]=val;
        size++;
    }
}
void insertrear(int val){
    if(isfull()){
        cout<<"full"<<endl;
    }
    else{
        rear=(rear+1)%capacity;
        arr[rear]=val;
        size++;
    }
}
void deletefront(){
    if(isempty()){
        cout<<"empty"<<endl;
    }
    else{
        front=(front+1)%capacity;
        size--;
    }
}
void deleterear(){
    if(isempty()){
        cout<<"empty"<<endl;
    }
    else{
        rear=(rear-1+capacity)%capacity;
        size--;
    }
}
int Front(){

    return arr[front];
}
int  Rear(){
    return arr[rear];
}
};
int main(){
     dequeue dq(5);  // Size of deque is 5

    dq.insertrear(10);
    dq.insertrear(20);
    dq.insertfront(5);
    dq.insertfront(1);

    cout << "Front element: " << dq.Front() << endl;
    cout << "Rear element: " << dq.Rear() << endl;

    dq.deletefront();
    dq.deleterear();

    cout << "After deletions:\n";
    cout << "Front element: " << dq.Front() << endl;
    cout << "Rear element: " << dq.Rear() << endl;

    return 0;

}
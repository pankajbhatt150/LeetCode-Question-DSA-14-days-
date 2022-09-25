class MyCircularQueue {
public:
int *data;
int front;
int rear;
int nxtEle;
int size;
int capacity;

MyCircularQueue(int k) {
    data = new int[k];
    front = -1;
    rear = -1;
    nxtEle = 0;
    size = 0;
    capacity = k;
}

bool enQueue(int value) {
    if(size==capacity){
        return false;
    }
    
    data[nxtEle] = value;
    rear = nxtEle;
    nxtEle = (nxtEle + 1) % capacity;
    if(front == -1) {
        front = 0;
    }
    size++;
    return true;
}

bool deQueue() {
    if(size == 0) {
        return false;
    }
    front = (front+1)%capacity;
    size--;
    if(size == 0) {
        front = -1;
        nxtEle = 0;
        rear = -1;
    }
    return true;
}

int Front() {
    if(front  == -1) {
        return -1;
    }
    return data[front];
}

int Rear() {
    if(rear == -1) {
        return -1;
    }
    return data[rear];
}

bool isEmpty() {
    return size == 0;
}

bool isFull() {
    return size == capacity;
}
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
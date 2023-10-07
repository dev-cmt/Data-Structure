#include <iostream>
using namespace std;

const int MAX_SIZE =1000;

class Queue{
private:
    int array[MAX_SIZE];
    int head, tail, count;
public:
    Queue(){
        head = 0;
        tail = 0;
        count = 0;
    }
    void push(int x){
        array[tail] = x;
        tail++;
        if(tail >= MAX_SIZE){
            tail = 0;
        }
        count++;
    }
    int pop(){
        int x = array[head];
        head++;
        if(head >= MAX_SIZE){
            head = 0;
        }
        count--;
        return x;
    }
    int peek(){
        return array[head];
    }
    bool isEmpty(){
        if(count == 0){
            return false;
        }
    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(10);
    q.push(10);
    q.push(10);
    q.push(10);

    while(!q.isEmpty()){
        cout << q.pop() << "";
    }
    cout << endl;
    return 0;
}

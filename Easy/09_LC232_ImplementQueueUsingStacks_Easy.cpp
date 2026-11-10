
#include <stack>
using namespace std;

class MyQueue {
private:
    stack<int> inputStack;
    stack<int> outputStack;

    void transfer() {
        if (outputStack.empty()) {
            while (!inputStack.empty()) {
                outputStack.push(inputStack.top());
                inputStack.pop();
            }
        }
    }

public:
    MyQueue() {
    }

    void push(int x) {
        inputStack.push(x);
    }

    int pop() {
        transfer();
        int value = outputStack.top();
        outputStack.pop();
        return value;
    }

    int peek() {
        transfer();
        return outputStack.top();
    }

    bool empty() {
        return inputStack.empty() && outputStack.empty();
    }
};


#include <stack>
using namespace std;

class MinStack {
private:
    stack<int> values;
    stack<int> minimums;

public:
    MinStack() {
    }

    void push(int val) {
        values.push(val);

        if (minimums.empty() || val <= minimums.top()) {
            minimums.push(val);
        }
    }

    void pop() {
        if (values.top() == minimums.top()) {
            minimums.pop();
        }

        values.pop();
    }

    int top() {
        return values.top();
    }

    int getMin() {
        return minimums.top();
    }
};

#include <iostream>
#include <vector>

using namespace std;

class Stack {
private:
	int top;
	vector<int> stack;
public:
	Stack();
	~Stack();
	int isEmpty();
	void push(int x);
	int pop();
	int size();
	int stackTop();
};

Stack::Stack() {
	top = -1;
}

int Stack::isEmpty() {
	if (top == -1)
		return 1;
	else
		return 0;
}

void Stack::push(int x) {
	stack.push_back(x);
	top++;
}

int Stack::pop() {
	if (isEmpty())
		return -1;
	else {
		int num = stack[top--];
		stack.pop_back();
		return num;
	}
}

int Stack::size() {
	return top + 1;
}

int Stack::stackTop() {
	if (isEmpty())
		return -1;
	else
		return stack[top];
}

Stack::~Stack() {
}


int main() {
	int k;
	Stack stack;
	int num;
	int sum = 0;
	
	cin >> k;

	for (int i = 0; i < k; i++) {
		cin >> num;
		if (num == 0)
			stack.pop();
		else {
			stack.push(num);
		}
	}
	while (!stack.isEmpty()) {
		sum += stack.pop();
	}
	cout << sum << endl;

	return 0;
}
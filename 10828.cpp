#include <iostream>
#include <vector>
#include <string>

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
	Stack *myStack = new Stack;
	string input;
	int tCase;

	cin >> tCase;

	for (int i = 0; i < tCase; i++) {
		cin >> input;
		if (input.compare("push")== 0) {
			int inputNum;
			cin>>inputNum;
			myStack->push(inputNum);
		}
		else if (input.compare("pop")== 0) {
			cout << myStack->pop() << endl;
		}
		else if (input.compare("size")== 0) {
			cout << myStack->size() << endl;
		}
		else if (input.compare("empty")== 0) {
			cout << myStack->isEmpty() << endl;
		}
		else if (input.compare("top")== 0) {
			cout << myStack->stackTop() << endl;
		}
	}
	return 0;
}
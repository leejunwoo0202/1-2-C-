#ifndef STACK1_H_INCLUDED
#define STACK1_H_INCLUDED
typedef int STACK_ITEM;
class Stack {
	enum { MAXSTACK = 20 };
	int top;
	STACK_ITEM item[MAXSTACK];
public:
	Stack();   // »ý¼ºÀÚ
	bool empty();
	bool full();
	void initialize();
	void push(STACK_ITEM s);
	STACK_ITEM pop();
};
#endif  // STACK1_H_INCLUDED  
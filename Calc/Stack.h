#pragma once

template <class T>
struct Element
{
	T data;
	Element<T>* next;
};


///////////////////////////////////////
template <class T>
class Stack
{
private:
	Element<T>* Head;
public:
	Stack<T>() {}
	~Stack<T>() {}
	void Push(T d)
	{
		
			Element<T>* new_Element = new Element<T>;
			new_Element->data = d;
			new_Element->next = Head;
			Head = new_Element;	
	}

	T Pop()
	{
		T temp = Head->data;
		Element<T> *new_Element = Head;
		Head = Head->next;
		delete new_Element;
		return T(temp);
	}
};


#pragma once
#include <iostream>
#include <cstddef>
using namespace std;
template <typename Item_Type>
class SingleLinkedList {
private:
	//setting up the default constructor, node and the nextptr inside the struct of the Class. 
	struct Node {
		Item_Type data;
		Node* next;
		Node(const Item_Type& item) : data(item), next(nullptr) {}
	};
	Node* head;
	Node* tail;
	size_t num_items;
public:
	SingleLinkedList();
	~SingleLinkedList();

	void push_front(const Item_Type& item);
	void push_back(const Item_Type& item);
	void pop_front();
	void pop_back();
	Item_Type front() const;
	Item_Type back() const;
	bool empty() const;
	void insert(size_t index, const Item_Type& item);
	bool remove(size_t index);
	size_t find(const Item_Type& item) const;
	size_t size() const;
};
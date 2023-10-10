#include "SingleLinkedList.h"
template <typename Item_Type>
//default constructor
SingleLinkedList<Item_Type>::SingleLinkedList() {
	head = nullptr;
	tail = nullptr;
	num_items = 0;
}
//pops the front of the list
template <typename Item_Type>
SingleLinkedList<Item_Type>::~SingleLinkedList() {
	while (!empty()) {
		pop_front();
	}
}
//pushes the head to the front of the linked list before incrementing the size of the linked list. 
template<typename Item_Type>
void SingleLinkedList<Item_Type>::push_front(const Item_Type& item) {
	Node* newNode = new Node(item);
	if (empty()) {
		tail = newNode;
		head = newNode;
	}
	else {
		newNode->next = head;
		head = newNode;

	}
	num_items++;
}
//pushes the item to the back of the linked list before incrementing the size of the linked list. 
template<typename Item_Type>
void SingleLinkedList<Item_Type>::push_back(const Item_Type& item) {
	Node* newNode = new Node(item);
	if (empty()) {
		tail = newNode;
		head = newNode;
	}
	else {
		newNode->next = tail;
		tail = newNode;
	}
	num_items++;
}
//pops the front of the linked list and sets head to equal the next pointer of the linked list. 
template<typename Item_Type>
void SingleLinkedList<Item_Type>::pop_front() {
	if (!empty()) {
		Node* tempNode = head;
		head = head->next;
		delete tempNode;
		num_items--; //decrement num_items because of the removal of the front item in the linked list.  
	}
}
//pops the back of the linked list before decreasing the size of the linked list due to the removal of the item. 
template<typename Item_Type>
void SingleLinkedList<Item_Type>::pop_back() {
	if (!empty()) {
		if (num_items == 1) {
			//deletes the head and makes head and tail nullptr because of the size of num_items
			delete head;
			head = nullptr;
			tail = nullptr;
		}
		else {
			//assigns tempNode to head and assigns tempNode to equal next pointer
			Node* tempNode = head;
			while (tempNode->next != tail) {
				tempNode = tempNode->next;
			}
			//after while loop and deletes the tail. 
			delete tail;
			tail = tempNode;
			tail->next = nullptr;
		}
		num_items--;
	}
}
template<typename Item_Type>
Item_Type SingleLinkedList<Item_Type>::front() const {
	//if the list is not empty, return the head pointing to data
	if (!empty()) {
		return head->data;
	}
	//else, print a message stating that the list is empty
	else {
		throw out_of_range("The Linked List is empty!");
	}
}
template<typename Item_Type>
Item_Type SingleLinkedList<Item_Type>::back() const{
	//if the list is not empty, return the tail pointing to data
	if(!empty()) {
		return tail->data;
	}
	//else, print a message stating that the list is empty
	else {
		throw out_of_range("The Linked List is empty!");
	}
}
template<typename Item_Type>
bool SingleLinkedList<Item_Type>::empty() const {
	//if num_items is 0, then the list is empty so return true
	if (num_items == 0) {
		return true;
	}
	//else, return false
	else {
		return false;
	}
}
//inserts the item at any given index based on if the index is located within the linked list. 
template<typename Item_Type>
void SingleLinkedList<Item_Type>::insert(size_t index, const Item_Type& item) {
	//if the index is 0, inserts the item at index 0
	if (index == 0) {
		push_front(item);
	}
	//if the index is not zero, follows the or statement and if correct, appends item to the back
	else if (index < 0 || index > item) {
		push_back(item);
	}
	else {
		Node* new_node = new Node(item);
		Node* current = head;
		for (size_t i = 0; i < index - 1; i++) {
			current = current->nextPtr;
		}
		new_node->nextPtr = current->nextPtr;
		current->nextPtr = new_node;
		num_items++;
	}
}
//removes the item from the linked list. 
template <typename Item_Type>
bool SingleLinkedList<Item_Type>::remove(size_t index) {
	//if the index is not inside the list, return false
	if (index > num_items) {
		return false;
	}
	if (empty()) {
		return false;
	}
	//if index is 0, then call the pop_front function
	if (index == 0) {
		return pop_front();
	}
	//else, assigns headptr to current before calling for loop to assign current to equal nextptr.
	else {
		Node* current = head;
		for (size_t i = 0; i < index - 1; i++) {
			current = current->nextPtr;
		}
		//after the for loop, assign temp pointer to equal current pointing to nextPtr
		Node* temp = current->nextPtr;
		//Assign current pointing to nextPtr to temp pointing to nextPtr;
		current->nextPtr = temp->nextPtr;
		delete temp;//delete temp
		num_items--;//decrement items
		return true;//return true to show that it has been removed
	}
}
//finds the given index and goes through a while loop that returns the item at the given index. 
template<typename Item_Type>
size_t SingleLinkedList<Item_Type>::find(const Item_Type& item) const {
	Node* currentNode = head;
	size_t index = 0;
	//while loop that returns the index of the SingleLinkedList using pointers. 
	while (currentNode->data != tail->data) {
		if (currentNode->data == item) {
			return index;
		}
		//if the pointer doesnt find the item, increment index and sets currentNode to equal next pointer
		currentNode = currentNode->next;
		index++;
	}
	return num_items++;
}
//returns the size of the linked list. 
template<typename Item_Type>
size_t SingleLinkedList<Item_Type>::size()const {
	return num_items;
}

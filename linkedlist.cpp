#include <iostream>
#include "linkedlist.h"

template<typename T>
ll_node<T>::ll_node(T value, ll_node<T>* next){
	this->value = value;
	this->next = next;
}

template<typename T>
ll_node<T>::ll_node(T value){
	this->value = value;
	this->next = nullptr;
}

template<typename T>
ll_node<T>::ll_node(T value, T next){
	this->value = value;
	this->next = new ll_node<T>(next);
}

template<typename T>
void ll_node<T>::set_next(ll_node<T>* next){
	this->next = next;
}

template<typename T>
ll_node<T>* ll_node<T>::get_next(void) const{
	return this->next;
}

template<typename T>
void ll_node<T>::set_value(T value){
	this->value = value;
}

template<typename T>
T ll_node<T>::get_value(void) const{
	return this->value;
}

template<typename T>
linked_list<T>::linked_list(ll_node<T>* head){
	this->head = head;
}

template<typename T>
void linked_list<T>::add_next(ll_node<T>* next){
	ll_node<T>* current = this->head;
	while(current != nullptr){
		current = current->get_next();
	}
	current->set_next(next);
}

template<typename T>
void linked_list<T>::print_all_values(){
	ll_node<T>* current = this->head;
	while(current != nullptr){
		std::cout << current->get_value() << " ";
		current = current->get_next();
	}
	std::cout << std::endl;
}

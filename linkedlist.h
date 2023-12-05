#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template<typename T>
class ll_node{
private:
	T value;
	ll_node<T>* next;
public:
	ll_node(T value, ll_node<T>* next);
	ll_node(T value, T next);
	ll_node(T value);

	void set_next(ll_node<T>* next);
	ll_node<T>* get_next(void) const;

	void set_value(T value);
	T get_value(void) const;
};

template<typename T>
class linked_list{
private:
	ll_node<T>* head;
public:
	linked_list(ll_node<T>* head);
	void add_next(ll_node<T>* next);
	void print_all_values();
};

#endif //LINKEDLIST_H

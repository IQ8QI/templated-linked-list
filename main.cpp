#include <iostream>
#include "linkedlist.h"

int main(){
	ll_node<int>* head = new ll_node<int>(5);
	linked_list<int> my_ll(head);
	my_ll.add_next(new ll_node<int>(4, 3));
	my_ll.print_all_values();
}

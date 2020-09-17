#include <iostream>
#include <cstdlib>

struct list
{
	int node_data;
	struct list *next;
};

struct list* init(int data)
{
	struct list *lst;
	lst = (struct list*)malloc(sizeof(struct list));
	lst->node_data=data;
	lst->next = NULL;
	return(lst);
}

struct list* add_node(list *lst, int data)
{
	struct list *temp, *p;
	temp = (struct list*)malloc(sizeof(list));
	p = lst->next;
	lst->next = temp;
	temp->node_data = data;
       	temp->next = p;
	return temp;
}

struct list* delete_node(list *lst, list *root)
{
	struct list *temp;
	temp = root;
	while(temp->next != lst)
	{
		temp = temp->next;
	}
	temp->next = lst->next;
	free(lst);
	return(temp);
}

int main()
{
	using namespace std;
	
	return 0;
}

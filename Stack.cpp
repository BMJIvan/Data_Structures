#include <iostream>

struct node
{
    int data;
    node *next;
};

class linked_list
{
    private:
        node *head, *tail;

    public:
        linked_list()
        {
            head = NULL;
            tail = NULL;
        }

        void add_node(int n)
        {
            node *tmp = new node;
            tmp->data = n;
            tmp->next = NULL;

            if(head == NULL)
            {
                head = tmp;
                tail = tmp;
            }
            else
            {
                tail->next = tmp;
                tail = tail->next;

            }
        }

        void front(int n)
        {
            node *tmp = new node;
            tmp->data = n;
            tmp->next = head;
            head = tmp;
        }

        void after(int pos, int value)
        {
            node *tmp;
            tmp = head;
            while(pos>0)
            {
                tmp=tmp->next;
            }
            node * p = new node;
            p->data = value;
            p->next = tmp->next;
            tmp->next = p;
        }

        static void display(linked_list a)
        {
            node *tmp;
            tmp = a.head;
            while(tmp != NULL)
            {
                std::cout << tmp->data << std::endl;
                tmp=tmp->next;
            }
        }
        static void concatenate(linked_list *list_a, linked_list *list_b)
        {
            if(list_a->head != NULL  && list_b->head != NULL)
            {
                list_a->tail->next = list_b->head;
            }
        }
};

int main()
{
    linked_list a;
    linked_list b;
    for(int i = 0; i < 10; i++)
    {
        a.add_node(i);
        b.add_node(i*10);
    }


    linked_list c;
    linked_list d;

    a.front(100);
    //a.after(1000, 11);
    a.add_node(10000);

    linked_list::concatenate(&a, &b);
    linked_list::concatenate(&c, &d);

    linked_list::display(a);
    linked_list::display(c);
    return 0;
}
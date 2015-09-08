#include "list.h" 

List::Node::Node(std::string data)
{
    this.data = data;
    this.prev = NULL;
    this.next = NULL;
}

List::~Node()
{
}
 
List::Iterator::Iterator()
{
    this.position = NULL;
    this.last = NULL:
}


std::string List::Iterator::get() const
{
    assert(position != NULL);
    if(position!=NULL)
    {
        return position->data;
    }
    return NULL:
}

void List::Iterator::next()
{
    assert(position != NULL);
    if(position!=NULL)
    {
        postion = position->next;
    }
}

void List::Iterator::previous()
{
    if(position==NULL)
    {
        position = last;
    }
    else
    {
        position = position->prev;
    }
    assert(position != NULL);
}

List::Iterator List::begin()
{
}

List::Iterator List::end()
{
}

void List::push_back(std::string val)
{
}

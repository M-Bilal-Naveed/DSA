#include<iostream>
using namespace std;

class node {
public:
    node(int );
    void setData(int );
    int getData();
    void setNext(node *);
    node* getNext();
    void setPrev(node *);
    node* getPrev();
    void showData();
private:
    int data;
    node *next;
    node *prev;
};

node::node(int d) {
    setData(d);
    next = NULL;
    prev = NULL;
}

void node::setData(int d) {
    data = d;
}

int node::getData() {
    return data;
}

void node::setNext(node *ptr) {
    next = ptr;
}

node* node::getNext() {
    return next;
}

void node::setPrev(node *ptr) {
    prev = ptr;
}

node* node::getPrev() {
    return prev;
}

void node::showData() {
    cout << data << "   ";
}

class list {
private:
    node *head;
    node *current;
    int size;
public:
    list();
    void add(int );
    void showList();
    void forward();
    void backword();
    void remove();
    void showCurrent();//adde to show the value which is going to be removd
    int length(); // Added to get the size of the list
};

list::list() {
    size = 0;
    head = NULL;
    current = NULL;
}

void list::add(int d) {
    node *ptr = new node(d);
    if (size == 0) {
        head = ptr;
        current = ptr;
        current->setNext(ptr);
        current->setPrev(ptr);
    } else {
        ptr->setNext(current->getNext());
        ptr->setPrev(current);
        current->getNext()->setPrev(ptr);
        current->setNext(ptr);
        current = ptr;
    }
    size++;
}

void list::showList() {
    node *ptr = head;
    do {
        ptr->showData();
        ptr = ptr->getNext();
    } while (ptr != head);
    cout << endl;
}

void list::forward() {
    current = current->getNext();
}

void list::backword() {
    current = current->getPrev();
}

void list::remove() {
    node *ptr = current;
    ptr->getNext()->setPrev(ptr->getPrev());
    ptr->getPrev()->setNext(ptr->getNext());

    // Check if the element being removed is the head
   if (ptr == head) {
        head = ptr->getNext();
    }

    current = current->getNext();
    delete ptr;
    size--;
}

int list::length() {
    return size;
}
void list::showCurrent()
{
	node* ptr= current;
	ptr->showData();
	ptr=ptr->getNext();
}

int main() {
    cout << "hello world" << endl;
    
    list l;
    int i, n = 10, m = 3;
    for (i = 1; i <= n; i++)
        l.add(i);
    
    l.showList();
    while (l.length() > 1)
     {
        for (i = 1; i <= m; i++)
            l.forward();
            //l.forward();
        cout << "Remove: ";
        l.showCurrent();cout<<endl;
        l.remove();
        cout<<"Now list contains: ";l.showList();cout<<endl;
    } 
    
    cout << "Leader is: ";
    l.showList();
    
    return 0;
}


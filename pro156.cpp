#include<iostream>
using namespace std;

template<class T>
struct  node
{
    T data;
    struct node *next;
};

template<class T>
class SinglyLL
{
    public:
        struct node<T> *Head;
        int Count;

        SinglyLL();
        void InsertFirst(T);
        void InsertLast(T);
        void Display();
        int CountNode();
        void DeleteFirst(T);
        void DeleteLast(T);
        void InsertAtPos(T, int)

};

template<class T>
SinglyLL<T>::SinglyLL()
{
    Head = NULL;
    Count = 0;
}

template<class T>
void SinglyLL<T>::InsertFirst(T no)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;

    newn->data = no;
    newn->next = NULL;

    if(Head == NULL)
    {
        Head = newn;
    }
    else
    {
        newn->next = Head;
        Head = newn;
    }
    Count++;
}

template<class T>
void SinglyLL<T>::InsertLast(T no)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;

    newn->data = no;
    newn->next = NULL;

    if(Head == NULL)
    {
        Head = newn;
    }
    else
    {
        struct node<T> *temp = Head;
        while (temp->next != NULL)
       {
        temp = temp -> next;
       }
       temp->next = newn;
    }
    Count++;
}

template<class T>
void SinglyLL<T>::Display()
{
    cout<<"Elements from Linked list are : "<<endl;
    struct node<T> *temp = Head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

template<class T>
int SinglyLL<T>::CountNode()
{
    return Count;
}

template<class T>
void SinglyLL<T>::DeleteFirst(T no)
{
    struct node<T> *newn = NULL;
    if(Head == NULL)
    {
        return;
    }
    else
    {
        struct node<T> *temp = Head;
        Head = temp->next;
        free(temp); 
    }
}

template<class T>
void SinglyLL<T>::DeleteLast(T no)
{
    struct node<T> *newn = NULL;
    if(Head == NULL)
    {
        return;
    }
    else if((Head)->next == NULL)
    {
        free(Head);
        Head = NULL;
    }
    else
    {
        newn = Head;
        while (newn->next->next != NULL)
        {
            newn = newn->next;
        }

        free(newn->next);
        newn->next = NULL;
    }
}

template<class T>
void SinglyLL<T>::InsertAtPos(T no, pos)
{
    
}




int main()
{
    SinglyLL<int>obj1;
    SinglyLL<float>obj2;

    obj1.InsertFirst(21);
    obj1.InsertFirst(11);
    obj1.InsertLast(51);
    obj1.InsertLast(101);
    
    obj1.Display();
    cout<<"Number of nodes are :"<<obj1.CountNode()<<endl;

    obj2.InsertFirst(21);
    obj2.InsertFirst(11);
    obj2.InsertLast(51);
    obj2.InsertLast(101);
    
    obj2.Display();
    cout<<"Number of nodes are :"<<obj2.CountNode()<<endl;
    
    obj1.DeleteFirst(101);
    obj1.Display();
   
    obj1.DeleteLast(11);
    obj1.Display();
    

    return 0;
}
//  All Generic Linked List Progams are Combined

#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////
//                                                     //
//              Code of Singly Linear                  //
//                                                     //
/////////////////////////////////////////////////////////

template <class T>
struct nodeSL
{
    T data;
    struct nodeSL<T> *next;
};

template <class T>
class SinglySL
{
    private:
        struct nodeSL<T> * First;
        int iCount;
        
    public:
        SinglySL();

        void Display();
        int Count();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

template <class T>
SinglySL<T>::SinglySL()
{
    First = NULL;
    iCount = 0;
}

template <class T>
void SinglySL<T>::Display()
{
    struct nodeSL<T> * temp = NULL;

    if(First == NULL)
    {
        cout<<"LL is empty.\n";
        return;
    }

    temp = First;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |->";
        temp = temp -> next;
    }
    cout<<" NULL\n";
}

template <class T>
int SinglySL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglySL<T>::InsertFirst(T No)
{
    struct nodeSL<T> * newn = NULL;

    newn = new nodeSL<T>;     // malloc

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)   // if(iCout == 0)
    {
        First = newn;
    }   
    else
    {
        newn->next = First;
        First = newn;
    } 

    iCount++;
}

template <class T>
void SinglySL<T>::InsertLast(T No)
{
    struct nodeSL<T> * newn = NULL;
    struct nodeSL<T> * temp = NULL;

    newn = new nodeSL<T>;     // malloc

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)   // if(iCout == 0)
    {
        First = newn;
    }   
    else
    {
        temp = First;

        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    } 

    iCount++;
}

template <class T>
void SinglySL<T>::InsertAtPos(T No, int iPos)
{
    struct nodeSL<T> * newn = NULL;
    struct nodeSL<T> * temp = NULL;
    int i = 0;

    if((iPos < 1) || (iPos > iCount+1))
    {
        cout<<"Invalid Position\n";
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(No);
    }
    else
    {
        temp = First;
        
        newn = new nodeSL<T>;
        newn->data = No;
        newn->next = NULL;

        for(i = 1; i < iPos -1; i++)
        {
            temp = temp -> next;
        }

        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }
}

template <class T>
void SinglySL<T>::DeleteFirst()
{
    struct nodeSL<T> * temp = NULL;

    if(First == NULL)
    {
        cout<<"LinkedList is empty"<<endl;
        return;
    }
    else if(First -> next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        temp = First;
        First = First -> next;
        delete temp;
    }

    iCount--;
}

template <class T>
void SinglySL<T>::DeleteLast()
{
    struct nodeSL<T> * temp = NULL;

    if(First == NULL)
    {
        cout<<"LinkedList is empty"<<endl;
        return;
    }
    else if(First -> next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        temp = First;
        
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        
        delete temp->next;
        temp -> next = NULL;
    }

    iCount--;
}

template <class T>
void SinglySL<T>::DeleteAtPos(int iPos)
{
    int i = 0;
    struct nodeSL<T> * temp1 = NULL;
    struct nodeSL<T> * temp2 = NULL;

    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid Position\n";
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp1 = First;

        for(i = 1; i < iPos -1; i++)
        {
            temp1 = temp1 -> next;
        }
        
        temp2 = temp1->next;
        temp1->next = temp2->next;
        delete temp2;

        iCount--;
    }
}

/////////////////////////////////////////////////////////
//                                                     //
//              Code of Doubly Circular                //
//                                                     //
/////////////////////////////////////////////////////////

template <class T>
struct nodeDC
{
    T data;
    struct nodeDC<T> *next;
    struct nodeDC<T> *prev;
};

template <class T>
class DoublyDC
{
    private:
        struct nodeDC<T> * First;
        struct nodeDC<T> * Last;
        int iCount;

    public:
        DoublyDC();

        void Display();
        int Count();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

template <class T>
DoublyDC<T>::DoublyDC()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

template <class T>
void DoublyDC<T>::Display()
{
    if((First == NULL) && (Last == NULL))
    {
        cout<<"Linked is empty.\n";
        return;
    }

    cout<<"<=>";
    do
    {
        cout<<"| "<<First->data<<" |<=>";
        First = First->next;

    }while(Last->next != First);

    cout<<"\n";
}

template <class T>
int DoublyDC<T>::Count()
{
    return iCount;
}

template <class T>
void DoublyDC<T>::InsertFirst(T No)
{
    struct nodeDC<T> * newn = NULL;
    
    newn = new nodeDC<T>;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        First->prev = newn;
        newn->next = First;
        First = newn;
    }
    Last->next = First;
    First->prev = Last;

    iCount++;
}

template <class T>
void DoublyDC<T>::InsertLast(T No)
{
    struct nodeDC<T> * newn = NULL;
    
    newn = new nodeDC<T>;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last->next = newn;
        newn->prev = Last;
        Last = newn;  
    }
    Last->next = First;
    First->prev = Last;

    iCount++;
}

template <class T>
void DoublyDC<T>::InsertAtPos(T No, int iPos)
{
    struct nodeDC<T> * temp = NULL;
    struct nodeDC<T> * newn = NULL;

    int i = 0;

    if((iPos < 1) || (iPos > iCount + 1))
    {   
        cout<<"Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(No);
    }
    else
    {
        newn = new nodeDC<T>;
        
        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        temp = First;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp ->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;

        iCount++;
    }
}

template <class T>
void DoublyDC<T>::DeleteFirst()
{
    if((First == NULL) && (Last == NULL))
    {
        return;
    }
    else if(First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        First = First->next;
        delete Last->next;
        First->prev = Last;
        Last->next = First;
    }

    iCount--;
}

template <class T>
void DoublyDC<T>::DeleteLast()
{
    if((First == NULL) && (Last == NULL))
    {
        return;
    }
    else if(First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        Last = Last->prev;
        delete(First->prev);

        Last->next = First;
        First->prev = Last;
    }

    iCount--;
}

template <class T>
void DoublyDC<T>::DeleteAtPos(int iPos)
{
    struct nodeDC<T> * temp = NULL;

    int i = 0;

    if((iPos < 1) || (iPos > iCount))
    {   
        cout<<"Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = First;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp ->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;

        iCount--;
    }
}

/////////////////////////////////////////////////////////
//                                                     //
//              Code of Singly Circular                //
//                                                     //
/////////////////////////////////////////////////////////

template <class T>
struct nodeCL
{
    T data;
    struct nodeCL<T> *next;
};

template <class T>
class SinglyCL
{
    private:
        struct nodeCL<T> * First;
        struct nodeCL<T> * Last;
        int iCount;
    
    public:
        SinglyCL();

        void Display();
        int Count();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

template <class T>
SinglyCL<T>::SinglyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

template <class T>
void SinglyCL<T>::Display()
{
    if((First == NULL) && (Last == NULL))
    {
        cout<<"NULL"<<endl;
        return;
    }
    
    cout<<"->";
    do
    {
        cout<<"| "<<First->data<<" |->";
        First = First->next;

    } while(Last->next != First);

    cout<<endl;
}

template <class T>
int SinglyCL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyCL<T>::InsertFirst(T No)
{
    struct nodeCL<T> * newn = NULL;
    newn = new nodeCL<T>;
    newn->data = No;
    newn->next = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }

    Last->next = First;

    iCount++;
}

template <class T>
void SinglyCL<T>::InsertLast(T No)
{
    struct nodeCL<T> * newn = NULL;
    newn = new nodeCL<T>;
    newn->data = No;
    newn->next = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last->next = newn;

        Last = newn;
    }

    Last->next = First;
    iCount++;
}

template <class T>
void SinglyCL<T>::InsertAtPos(T No, int iPos)
{
    struct nodeCL<T> * newn = NULL;
    struct nodeCL<T> * temp = NULL;
    int i = 0;

    if((iPos < 1) && (iPos > iCount + 1))
    {
        cout<<"Invalid Position \n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(No);
    }
    else
    {
        newn = new nodeCL<T>;        
        newn->next = NULL;
        newn->data = No;

        temp = First;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp -> next;
        }

        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }
}

template <class T>
void SinglyCL<T>::DeleteFirst()
{
    if((First == NULL) && (Last == NULL))
    {
        cout<<"LL is empty\n";
    }
    else if(First == Last)
    {
        delete(First);
        First = NULL;
        Last = NULL;
    }
    else
    {
        First = First->next;
        delete(Last->next);
        Last->next = First;
    }

    iCount--;
}

template <class T>
void SinglyCL<T>::DeleteLast()
{
    struct nodeCL<T> * temp = NULL;

    if((First == NULL) && (Last == NULL))
    {
        cout<<"LL is empty\n";
    }
    else if(First == Last)
    {
        delete(First);
        First = NULL;
        Last = NULL;
    }
    else
    {
        temp = First;

        while(temp->next != Last)
        {
            temp = temp -> next;
        }

        delete(Last);
        Last = temp;
        Last->next = First;
    }

    iCount--;
}

template <class T>
void SinglyCL<T>::DeleteAtPos(int iPos)
{
    struct nodeCL<T> * temp1 = NULL;
    struct nodeCL<T> * temp2 = NULL;
    int i = 0;

    if((iPos < 1) && (iPos > iCount))
    {
        cout<<"Invalid Position \n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp1 = First;

        for(i = 1; i < iPos - 1; i++)
        {
            temp1 = temp1 -> next;
        }

        temp2 = temp1->next;
        temp1->next = temp2->next;
        delete(temp2);

        iCount--;
    } 
}

/////////////////////////////////////////////////////////
//                                                     //
//              Code of Doubly Linear                  //
//                                                     //
/////////////////////////////////////////////////////////

template <class T>
struct nodeDL
{
    T data;
    struct nodeDL<T> *next;
    struct nodeDL<T> *prev;
};

template <class T>
class DoublyLL
{
    private:
        struct nodeDL<T> * First;
        int iCount;

    public:
        DoublyLL();

        void Display();
        int Count();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

template <class T>
DoublyLL<T>::DoublyLL()
{
    First = NULL;
    iCount = 0;
}

template <class T>
void DoublyLL<T>::Display()
{
    struct nodeDL<T> * temp = NULL;
    temp = First;

    cout<<"NULL->";

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |->";
        temp = temp -> next;
    }

    cout<<"NULL\n";
}

template <class T>
int DoublyLL<T>::Count()
{
    return iCount;
}

template <class T>
void DoublyLL<T>::InsertFirst(T No)
{
    struct nodeDL<T> * newn = NULL;

    newn = new nodeDL<T>;

    newn->next = NULL;
    newn->data = No;
    newn->prev = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        First->prev = newn;
        newn->next = First;
        First = newn;
    }

    iCount++;
}

template <class T>
void DoublyLL<T>::InsertLast(T No)
{
    struct nodeDL<T> * newn = NULL;
    struct nodeDL<T> * temp = NULL;

    newn = new nodeDL<T>;

    newn->next = NULL;
    newn->data = No;
    newn->prev = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        temp = First;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        newn->prev = temp;
        temp->next = newn;
    }

    iCount++;
}

template <class T>
void DoublyLL<T>::InsertAtPos(T No, int iPos)
{
    struct nodeDL<T> * newn = NULL;
    struct nodeDL<T> * temp = NULL;
    int i = 0;

    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"Invalid Position\n"<<endl;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(No);
    }
    else
    {
        temp = First;
        newn = new nodeDL<T>;

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp -> next;
        }

        newn->next = temp->next;
        newn->prev = temp;
        temp->next->prev = newn;
        temp->next = newn;

        iCount++;
    }
}

template <class T>
void DoublyLL<T>::DeleteFirst()
{
    if(First == NULL)
    {
        cout<<"Unable to delete nodeDL LL is empty->\n"<<endl;
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        First = First->next;
        delete First->prev;
        First->prev = NULL;
    }

    iCount--;
}

template <class T>
void DoublyLL<T>::DeleteLast()
{
    struct nodeDL<T> * temp = NULL;

    if(First == NULL)
    {
        cout<<"Unable to delete nodeDL LinkedList is empty->\n"<<endl;
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        temp = First;

        while(temp->next->next != NULL)
        {
            temp = temp -> next;
        }
        
        delete temp->next;
        temp->next = NULL;
    }

    iCount--;
}

template <class T>
void DoublyLL<T>::DeleteAtPos(int iPos)
{
    struct nodeDL<T> * temp = NULL;
    int i = 0;

    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid Position\n"<<endl;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = First; 

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp -> next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;

        iCount--;
    }
}

/////////////////////////////////////////////////////////
//                                                     //
//              Code of Stack                          //
//                                                     //
/////////////////////////////////////////////////////////

template <class T>
struct nodeST
{
    T data;
    struct nodeST<T> *next;
};

template <class T>
class Stack
{
    private:
        struct nodeST<T> * First;
        int iCount;
    
    public:
        Stack();

        void Display();
        int Count();

        void Push(T No);      // InsertFirst()
        T Pop();              //DeleteFirst()        
};

template <class T>
Stack<T>::Stack()
{
    First = NULL;
    iCount = 0;
}

template <class T>
void Stack<T>::Display()
{
    cout<<"Elements of stack are : \n";
    struct nodeST<T> * temp = First;

    while(temp != NULL)
    {
        cout<<temp->data<<"\n";
        temp = temp->next;
    }
    cout<<"\n";
}

template <class T>
int Stack<T>::Count()
{
    return iCount;
}

template <class T>
void Stack<T>::Push(T No)
{
    struct nodeST<T> * newn = NULL;

    newn = new nodeST<T>;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    iCount++;
}   

template <class T>
T Stack<T>::Pop()
{
    T iValue;
    struct nodeST<T> * temp = NULL;

    if(First == NULL)
    {
        cout<<"Unable to pop the element as Stack is empty->\n";
        return -1;
    }
    else
    {   
        temp = First;

        iValue = First -> data;
        First = First -> next;
        delete temp;

        iCount--;
    }
    return iValue;
}

/////////////////////////////////////////////////////////
//                                                     //
//              Code of Queue                          //
//                                                     //
/////////////////////////////////////////////////////////

template <class T>
struct nodeQE
{
    T data;
    struct nodeQE<T> *next;
};

template <class T>
class Queue
{
    private:
        struct nodeQE<T> * First;
        int iCount;

    public:
        Queue();
        void Display();
        int Count();
        void EnQueue(T No);  // InsertLast()
        T DeQueue();   // DeleteFirst()
};

template <class T>
Queue<T>::Queue()
{
    First = NULL;
    iCount = 0;
}

template <class T>
void Queue<T>::Display()
{
    cout<<"Elements of Queue are : \n";
    struct nodeQE<T> * temp = First;

    while(temp != NULL)
    {
        cout<<temp->data<<"\t";
        temp = temp -> next;
    }
    cout<<"\n";
}

template <class T>
int Queue<T>::Count()
{
    return iCount;
}

template <class T>
void Queue<T>::EnQueue(T No)
{
    struct nodeQE<T> * newn = NULL;
    struct nodeQE<T> * temp = NULL;

    newn = new nodeQE<T>;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        temp = First;

        while(temp ->next != NULL)
        {
            temp = temp -> next;
        }

        temp->next = newn;
    }
    iCount++;
}

template <class T>
T Queue<T>::DeQueue()
{
    T iValue = 0;
    struct nodeQE<T> * temp = NULL;

    if(First == NULL)
    {
        cout<<"Unable to remove the element as queue is empty\n";
        return -1;
    }
    else
    {
        temp = First;

        iValue = First -> data;
        First = First -> next;
        delete temp;
        
        iCount--;
    }

    return iValue;
}

int main()
{
    cout<<"\n-------------------------------------------------------------------------\n";
    cout<<"----------------------GENERIC SINGLY LINEAR LINKED LIST------------------";
    cout<<"\n-------------------------------------------------------------------------\n";

    cout<<"\n-----------------<Singly Linear Linked List of INTEGERS>-----------------\n";

    SinglySL<int> *islobj = new SinglySL<int>();

    islobj->InsertFirst(51);
    islobj->InsertFirst(21);
    islobj->InsertFirst(11);

    cout<<"\n";
    islobj->Display();
    cout<<"Number of elements are : "<<islobj->Count()<<endl;

    islobj->InsertLast(101);
    islobj->InsertLast(111);
    islobj->InsertLast(121);

    cout<<"\n";
    islobj->Display();
    cout<<"Number of elements are : "<<islobj->Count()<<endl;

    islobj->InsertAtPos(105,5);

    cout<<"\n";
    islobj->Display();
    cout<<"Number of elements are : "<<islobj->Count()<<endl;

    islobj->DeleteAtPos(5);

    cout<<"\n";
    islobj->Display();
    cout<<"Number of elements are : "<<islobj->Count()<<endl;

    cout<<"\n-----------------<Singly Linear Linked List of FLOATS>-------------------\n";

    SinglySL<float> *fslobj = new SinglySL<float>();

    fslobj->InsertFirst(51.94f);
    fslobj->InsertFirst(21.94f);
    fslobj->InsertFirst(11.94f);

    cout<<"\n";
    fslobj->Display();
    cout<<"Number of elements are : "<<fslobj->Count()<<endl;

    fslobj->InsertLast(101.94f);
    fslobj->InsertLast(111.94f);
    fslobj->InsertLast(121.94f);

    cout<<"\n";
    fslobj->Display();
    cout<<"Number of elements are : "<<fslobj->Count()<<endl;

    fslobj->InsertAtPos(105.94f,5);

    cout<<"\n";
    fslobj->Display();
    cout<<"Number of elements are : "<<fslobj->Count()<<endl;

    fslobj->DeleteAtPos(5);

    cout<<"\n";
    fslobj->Display();
    cout<<"Number of elements are : "<<fslobj->Count()<<endl;

    cout<<"\n-----------------<Singly Linear Linked List of CHARACTERS>---------------\n";

    SinglySL<char> *cslobj = new SinglySL<char>();

    cslobj->InsertFirst('C');
    cslobj->InsertFirst('B');
    cslobj->InsertFirst('A');

    cout<<"\n";
    cslobj->Display();
    cout<<"Number of elements are : "<<cslobj->Count()<<endl;

    cslobj->InsertLast('D');
    cslobj->InsertLast('E');
    cslobj->InsertLast('F');

    cout<<"\n";
    cslobj->Display();
    cout<<"Number of elements are : "<<cslobj->Count()<<endl;

    cslobj->InsertAtPos('G',5);

    cout<<"\n";
    cslobj->Display();
    cout<<"Number of elements are : "<<cslobj->Count()<<endl;

    cslobj->DeleteAtPos(5);

    cout<<"\n";
    cslobj->Display();
    cout<<"Number of elements are : "<<cslobj->Count()<<endl;

    cout<<"\n-----------------<Singly Linear Linked List of DOUBLES>------------------\n";

    SinglySL<double> *dslobj = new SinglySL<double>();

    dslobj->InsertFirst(51.132341566);
    dslobj->InsertFirst(21.132341566);
    dslobj->InsertFirst(11.132341566);

    cout<<"\n";
    dslobj->Display();
    cout<<"Number of elements are : "<<dslobj->Count()<<endl;

    dslobj->InsertLast(101.132341566);
    dslobj->InsertLast(111.132341566);
    dslobj->InsertLast(121.132341566);

    cout<<"\n";
    dslobj->Display();
    cout<<"Number of elements are : "<<dslobj->Count()<<endl;

    dslobj->InsertAtPos(105.132341566,5);

    cout<<"\n";
    dslobj->Display();
    cout<<"Number of elements are : "<<dslobj->Count()<<endl;

    dslobj->DeleteAtPos(5);

    cout<<"\n";
    dslobj->Display();
    cout<<"Number of elements are : "<<dslobj->Count()<<endl;

    cout<<"\n-------------------------------------------------------------------------\n";
    cout<<"---------------------GENERIC DOUBLY CIRCULAR LINKED LIST-----------------";
    cout<<"\n-------------------------------------------------------------------------\n";

    cout<<"\n-----------------<Doubly Circular Linked List of INTEGERS>---------------\n";

    DoublyDC<int> *idcobj = new DoublyDC<int>();

    idcobj->InsertFirst(51);
    idcobj->InsertFirst(21);
    idcobj->InsertFirst(11);

    cout<<"\n";
    idcobj->Display();
    cout<<"Number of elements are : "<<idcobj->Count()<<endl;

    idcobj->InsertLast(101);
    idcobj->InsertLast(111);
    idcobj->InsertLast(121);

    cout<<"\n";
    idcobj->Display();
    cout<<"Number of elements are : "<<idcobj->Count()<<endl;

    idcobj->InsertAtPos(105, 5);

    cout<<"\n";
    idcobj->Display();
    cout<<"Number of elements are : "<<idcobj->Count()<<endl;

    idcobj->DeleteAtPos(5);

    cout<<"\n";
    idcobj->Display();
    cout<<"Number of elements are : "<<idcobj->Count()<<endl;

    cout<<"\n-----------------<Doubly Circular Linked List of FLOATS>-----------------\n";

    DoublyDC<float> *fdcobj = new DoublyDC<float>();

    fdcobj->InsertFirst(51.94f);
    fdcobj->InsertFirst(21.94f);
    fdcobj->InsertFirst(11.94f);

    cout<<"\n";
    fdcobj->Display();
    cout<<"Number of elements are : "<<fdcobj->Count()<<endl;

    fdcobj->InsertLast(101.94f);
    fdcobj->InsertLast(111.94f);
    fdcobj->InsertLast(121.94f);

    cout<<"\n";
    fdcobj->Display();
    cout<<"Number of elements are : "<<fdcobj->Count()<<endl;

    fdcobj->InsertAtPos(105.94f, 5);

    cout<<"\n";
    fdcobj->Display();
    cout<<"Number of elements are : "<<fdcobj->Count()<<endl;

    fdcobj->DeleteAtPos(5);

    cout<<"\n";
    fdcobj->Display();
    cout<<"Number of elements are : "<<fdcobj->Count()<<endl;

    cout<<"\n-----------------<Doubly Circular Linked List of CHARACTERS>-------------\n";

    DoublyDC<char> *cdcobj = new DoublyDC<char>();

    cdcobj->InsertFirst('C');
    cdcobj->InsertFirst('B');
    cdcobj->InsertFirst('A');

    cout<<"\n";
    cdcobj->Display();
    cout<<"Number of elements are : "<<cdcobj->Count()<<endl;

    cdcobj->InsertLast('D');
    cdcobj->InsertLast('E');
    cdcobj->InsertLast('F');

    cout<<"\n";
    cdcobj->Display();
    cout<<"Number of elements are : "<<cdcobj->Count()<<endl;

    cdcobj->InsertAtPos('G', 5);

    cout<<"\n";
    cdcobj->Display();
    cout<<"Number of elements are : "<<cdcobj->Count()<<endl;

    cdcobj->DeleteAtPos(5);

    cout<<"\n";
    cdcobj->Display();
    cout<<"Number of elements are : "<<cdcobj->Count()<<endl;

    cout<<"\n-----------------<Doubly Circular Linked List of DOUBLES>----------------\n";

    DoublyDC<double> *ddcobj = new DoublyDC<double>();

    ddcobj->InsertFirst(51.132341566);
    ddcobj->InsertFirst(21.132341566);
    ddcobj->InsertFirst(11.132341566);

    cout<<"\n";
    ddcobj->Display();
    cout<<"Number of elements are : "<<ddcobj->Count()<<endl;

    ddcobj->InsertLast(101.132341566);
    ddcobj->InsertLast(111.132341566);
    ddcobj->InsertLast(121.132341566);

    cout<<"\n";
    ddcobj->Display();
    cout<<"Number of elements are : "<<ddcobj->Count()<<endl;

    ddcobj->InsertAtPos(105.132341566, 5);

    cout<<"\n";
    ddcobj->Display();
    cout<<"Number of elements are : "<<ddcobj->Count()<<endl;

    ddcobj->DeleteAtPos(5);

    cout<<"\n";
    ddcobj->Display();
    cout<<"Number of elements are : "<<ddcobj->Count()<<endl;

    cout<<"\n-------------------------------------------------------------------------\n";
    cout<<"--------------------GENERIC SINGLY CIRCULAR LINKED LIST------------------";
    cout<<"\n-------------------------------------------------------------------------\n";

    cout<<"\n-----------------<Singly Circular Linked List of INTEGERS>---------------\n";

    SinglyCL<int> *iscobj = new SinglyCL<int>(); 

    iscobj->InsertFirst(51);
    iscobj->InsertFirst(21);
    iscobj->InsertFirst(11);

    cout<<"\n";
    iscobj->Display();
    cout<<"Number of elements are : "<<iscobj->Count()<<endl;

    iscobj->InsertLast(101);
    iscobj->InsertLast(111);
    iscobj->InsertLast(121);

    cout<<"\n";
    iscobj->Display();
    cout<<"Number of elements are : "<<iscobj->Count()<<endl;

    iscobj->InsertAtPos(105,5);

    cout<<"\n";
    iscobj->Display();
    cout<<"Number of elements are : "<<iscobj->Count()<<endl;

    iscobj->DeleteAtPos(5);

    cout<<"\n";
    iscobj->Display();
    cout<<"Number of elements are : "<<iscobj->Count()<<endl;

    cout<<"\n-----------------<Singly Circular Linked List of FLOATS>-----------------\n";

    SinglyCL<float> *fscobj = new SinglyCL<float>(); 

    fscobj->InsertFirst(51.94f);
    fscobj->InsertFirst(21.94f);
    fscobj->InsertFirst(11.94f);

    cout<<"\n";
    fscobj->Display();
    cout<<"Number of elements are : "<<fscobj->Count()<<endl;

    fscobj->InsertLast(101.94f);
    fscobj->InsertLast(111.94f);
    fscobj->InsertLast(121.94f);

    cout<<"\n";
    fscobj->Display();
    cout<<"Number of elements are : "<<fscobj->Count()<<endl;

    fscobj->InsertAtPos(105.94f,5);

    cout<<"\n";
    fscobj->Display();
    cout<<"Number of elements are : "<<fscobj->Count()<<endl;

    fscobj->DeleteAtPos(5);

    cout<<"\n";
    fscobj->Display();
    cout<<"Number of elements are : "<<fscobj->Count()<<endl;

    cout<<"\n-----------------<Singly Circular Linked List of CHARACTERS>-------------\n";

    SinglyCL<char> *cscobj = new SinglyCL<char>(); 

    cscobj->InsertFirst('C');
    cscobj->InsertFirst('B');
    cscobj->InsertFirst('A');

    cout<<"\n";
    cscobj->Display();
    cout<<"Number of elements are : "<<cscobj->Count()<<endl;

    cscobj->InsertLast('D');
    cscobj->InsertLast('E');
    cscobj->InsertLast('F');

    cout<<"\n";
    cscobj->Display();
    cout<<"Number of elements are : "<<cscobj->Count()<<endl;

    cscobj->InsertAtPos('G',5);

    cout<<"\n";
    cscobj->Display();
    cout<<"Number of elements are : "<<cscobj->Count()<<endl;

    cscobj->DeleteAtPos(5);

    cout<<"\n";
    cscobj->Display();
    cout<<"Number of elements are : "<<cscobj->Count()<<endl;

    cout<<"\n-----------------<Singly Circular Linked List of DOUBLES>----------------\n";

    SinglyCL<double> *dscobj = new SinglyCL<double>(); 

    dscobj->InsertFirst(51.132341566);
    dscobj->InsertFirst(21.132341566);
    dscobj->InsertFirst(11.132341566);

    cout<<"\n";
    dscobj->Display();
    cout<<"Number of elements are : "<<dscobj->Count()<<endl;

    dscobj->InsertLast(101.132341566);
    dscobj->InsertLast(111.132341566);
    dscobj->InsertLast(121.132341566);

    cout<<"\n";
    dscobj->Display();
    cout<<"Number of elements are : "<<dscobj->Count()<<endl;

    dscobj->InsertAtPos(105.132341566,5);

    cout<<"\n";
    dscobj->Display();
    cout<<"Number of elements are : "<<dscobj->Count()<<endl;

    dscobj->DeleteAtPos(5);

    cout<<"\n";
    dscobj->Display();
    cout<<"Number of elements are : "<<dscobj->Count()<<endl;

    cout<<"\n-------------------------------------------------------------------------\n";
    cout<<"--------------------GENERIC DOUBLY LINEAR LINKED LIST--------------------";
    cout<<"\n-------------------------------------------------------------------------\n";

    cout<<"\n----------------<Doubly Linear Linked List of INTEGERS>------------------\n";
    
    DoublyLL<int> *idlobj = new DoublyLL<int>();

    idlobj->InsertFirst(51);
    idlobj->InsertFirst(21);
    idlobj->InsertFirst(11);

    cout<<"\n";
    idlobj->Display();
    cout<<"Number of elements are : "<<idlobj->Count()<<endl;

    idlobj->InsertLast(101);
    idlobj->InsertLast(111);
    idlobj->InsertLast(121);

    cout<<"\n";
    idlobj->Display();
    cout<<"Number of elements are : "<<idlobj->Count()<<endl;

    idlobj->InsertAtPos(105,5);

    cout<<"\n";
    idlobj->Display();
    cout<<"Number of elements are : "<<idlobj->Count()<<endl;

    idlobj->DeleteAtPos(5);

    cout<<"\n";
    idlobj->Display();
    cout<<"Number of elements are : "<<idlobj->Count()<<endl;

    cout<<"\n----------------<Doubly Linear Linked List of FLOATS>--------------------\n";
    
    DoublyLL<float> *fdlobj = new DoublyLL<float>();

    fdlobj->InsertFirst(51.94f);
    fdlobj->InsertFirst(21.94f);
    fdlobj->InsertFirst(11.94f);

    cout<<"\n";
    fdlobj->Display();
    cout<<"Number of elements are : "<<fdlobj->Count()<<endl;

    fdlobj->InsertLast(101.94f);
    fdlobj->InsertLast(111.94f);
    fdlobj->InsertLast(121.94f);

    cout<<"\n";
    fdlobj->Display();
    cout<<"Number of elements are : "<<fdlobj->Count()<<endl;

    fdlobj->InsertAtPos(105.94f,5);

    cout<<"\n";
    fdlobj->Display();
    cout<<"Number of elements are : "<<fdlobj->Count()<<endl;

    fdlobj->DeleteAtPos(5);

    cout<<"\n";
    fdlobj->Display();
    cout<<"Number of elements are : "<<fdlobj->Count()<<endl;

    cout<<"\n----------------<Doubly Linear Linked List of CHARACTERS>----------------\n";
    
    DoublyLL<char> *cdlobj = new DoublyLL<char>();

    cdlobj->InsertFirst('C');
    cdlobj->InsertFirst('B');
    cdlobj->InsertFirst('A');

    cout<<"\n";
    cdlobj->Display();
    cout<<"Number of elements are : "<<cdlobj->Count()<<endl;

    cdlobj->InsertLast('D');
    cdlobj->InsertLast('E');
    cdlobj->InsertLast('F');

    cout<<"\n";
    cdlobj->Display();
    cout<<"Number of elements are : "<<cdlobj->Count()<<endl;

    cdlobj->InsertAtPos('G',5);

    cout<<"\n";
    cdlobj->Display();
    cout<<"Number of elements are : "<<cdlobj->Count()<<endl;

    cdlobj->DeleteAtPos(5);

    cout<<"\n";
    cdlobj->Display();
    cout<<"Number of elements are : "<<cdlobj->Count()<<endl;

    cout<<"\n----------------<Doubly Linear Linked List of DOUBLES>--------------------\n";
    
    DoublyLL<double> *ddlobj = new DoublyLL<double>();

    ddlobj->InsertFirst(51.132341566);
    ddlobj->InsertFirst(21.132341566);
    ddlobj->InsertFirst(11.132341566);

    cout<<"\n";
    ddlobj->Display();
    cout<<"Number of elements are : "<<ddlobj->Count()<<endl;

    ddlobj->InsertLast(101.132341566);
    ddlobj->InsertLast(111.132341566);
    ddlobj->InsertLast(121.132341566);

    cout<<"\n";
    ddlobj->Display();
    cout<<"Number of elements are : "<<ddlobj->Count()<<endl;

    ddlobj->InsertAtPos(105.132341566,5);

    cout<<"\n";
    ddlobj->Display();
    cout<<"Number of elements are : "<<ddlobj->Count()<<endl;

    ddlobj->DeleteAtPos(5);

    cout<<"\n";
    ddlobj->Display();
    cout<<"Number of elements are : "<<ddlobj->Count()<<endl;

    cout<<"\n-------------------------------------------------------------------------\n";
    cout<<"-----------------------------GENERIC STACK-------------------------------";
    cout<<"\n-------------------------------------------------------------------------\n";

    cout<<"\n-------------------------<Stack of INTEGERS>-----------------------------\n";

    Stack<int> *istobj = new Stack<int>();

    istobj->Push(10);
    istobj->Push(20);
    istobj->Push(30);
    istobj->Push(40);

    cout<<"\n";
    istobj->Display();
    cout<<"Number of elements in the stack are : "<<istobj->Count()<<endl;

    cout<<"\n";
    cout<<"Poped element is : "<<istobj->Pop()<<endl;

    cout<<"\n";
    cout<<"Poped element is : "<<istobj->Pop()<<endl;

    cout<<"\n";
    istobj->Display();
    cout<<"Number of elements in the stack are : "<<istobj->Count()<<endl;

    istobj->Push(50);

    cout<<"\n";
    istobj->Display();
    cout<<"Number of elements in the stack are : "<<istobj->Count()<<endl;

    cout<<"\n-------------------------<Stack of FLOATS>-------------------------------\n";

    Stack<float> *fstobj = new Stack<float>();

    fstobj->Push(10.94f);
    fstobj->Push(20.94f);
    fstobj->Push(30.94f);
    fstobj->Push(40.94f);

    cout<<"\n";
    fstobj->Display();
    cout<<"Number of elements in the stack are : "<<fstobj->Count()<<endl;

    cout<<"\n";
    cout<<"Poped element is : "<<fstobj->Pop()<<endl;

    cout<<"\n";
    cout<<"Poped element is : "<<fstobj->Pop()<<endl;

    cout<<"\n";
    fstobj->Display();
    cout<<"Number of elements in the stack are : "<<fstobj->Count()<<endl;

    fstobj->Push(50.94f);

    cout<<"\n";
    fstobj->Display();
    cout<<"Number of elements in the stack are : "<<fstobj->Count()<<endl;

    cout<<"\n-------------------------<Stack of CHARACTERS>---------------------------\n";

    Stack<char> *cstobj = new Stack<char>();

    cstobj->Push('A');
    cstobj->Push('B');
    cstobj->Push('C');
    cstobj->Push('D');

    cout<<"\n";
    cstobj->Display();
    cout<<"Number of elements in the stack are : "<<cstobj->Count()<<endl;

    cout<<"\n";
    cout<<"Poped element is : "<<cstobj->Pop()<<endl;

    cout<<"\n";
    cout<<"Poped element is : "<<cstobj->Pop()<<endl;

    cout<<"\n";
    cstobj->Display();
    cout<<"Number of elements in the stack are : "<<cstobj->Count()<<endl;

    cstobj->Push('E');

    cout<<"\n";
    cstobj->Display();
    cout<<"Number of elements in the stack are : "<<cstobj->Count()<<endl;

    cout<<"\n-------------------------<Stack of DOUBLES>------------------------------\n";

    Stack<double> *dstobj = new Stack<double>();

    dstobj->Push(10.132341566);
    dstobj->Push(20.132341566);
    dstobj->Push(30.132341566);
    dstobj->Push(40.132341566);

    cout<<"\n";
    dstobj->Display();
    cout<<"Number of elements in the stack are : "<<dstobj->Count()<<endl;

    cout<<"\n";
    cout<<"Poped element is : "<<dstobj->Pop()<<endl;

    cout<<"\n";
    cout<<"Poped element is : "<<dstobj->Pop()<<endl;

    cout<<"\n";
    dstobj->Display();
    cout<<"Number of elements in the stack are : "<<dstobj->Count()<<endl;

    dstobj->Push(50.132341566);

    cout<<"\n";
    dstobj->Display();
    cout<<"Number of elements in the stack are : "<<dstobj->Count()<<endl;

    cout<<"\n-------------------------------------------------------------------------\n";
    cout<<"-----------------------------GENERIC QUEUE-------------------------------";
    cout<<"\n-------------------------------------------------------------------------\n";

    cout<<"\n-------------------------<Queue of INTEGERS>-----------------------------\n";

    Queue<int> *iqeobj = new Queue<int>();

    iqeobj->EnQueue(10);
    iqeobj->EnQueue(20);
    iqeobj->EnQueue(30);
    iqeobj->EnQueue(40);

    cout<<"\n";
    iqeobj->Display();
    cout<<"Number of elements in the Queue are : "<<iqeobj->Count()<<endl;

    cout<<"\n";
    cout<<"Removed element is : "<<iqeobj->DeQueue()<<endl;

    cout<<"\n";
    cout<<"Removed element is : "<<iqeobj->DeQueue()<<endl;

    cout<<"\n";
    iqeobj->Display();
    cout<<"Number of elements in the Queue are : "<<iqeobj->Count()<<endl;

    iqeobj->EnQueue(50);

    cout<<"\n";
    iqeobj->Display();
    cout<<"Number of elements in the Queue are : "<<iqeobj->Count()<<endl;

    cout<<"\n-------------------------<Queue of FLOATS>-------------------------------\n";

    Queue<float> *fqeobj = new Queue<float>();

    fqeobj->EnQueue(10.94f);
    fqeobj->EnQueue(20.94f);
    fqeobj->EnQueue(30.94f);
    fqeobj->EnQueue(40.94f);

    cout<<"\n";
    fqeobj->Display();
    cout<<"Number of elements in the Queue are : "<<fqeobj->Count()<<endl;

    cout<<"\n";
    cout<<"Removed element is : "<<fqeobj->DeQueue()<<endl;

    cout<<"\n";
    cout<<"Removed element is : "<<fqeobj->DeQueue()<<endl;

    cout<<"\n";
    fqeobj->Display();
    cout<<"Number of elements in the Queue are : "<<fqeobj->Count()<<endl;

    fqeobj->EnQueue(50.94f);

    cout<<"\n";
    fqeobj->Display();
    cout<<"Number of elements in the Queue are : "<<fqeobj->Count()<<endl;

    cout<<"\n-------------------------<Queue of CHARACTERS>---------------------------\n";

    Queue<char> *cqeobj = new Queue<char>();

    cqeobj->EnQueue('A');
    cqeobj->EnQueue('B');
    cqeobj->EnQueue('C');
    cqeobj->EnQueue('D');

    cout<<"\n";
    cqeobj->Display();
    cout<<"Number of elements in the Queue are : "<<cqeobj->Count()<<endl;

    cout<<"\n";
    cout<<"Removed element is : "<<cqeobj->DeQueue()<<endl;

    cout<<"\n";
    cout<<"Removed element is : "<<cqeobj->DeQueue()<<endl;

    cout<<"\n";
    cqeobj->Display();
    cout<<"Number of elements in the Queue are : "<<cqeobj->Count()<<endl;

    cqeobj->EnQueue('E');

    cout<<"\n";
    cqeobj->Display();
    cout<<"Number of elements in the Queue are : "<<cqeobj->Count()<<endl;

    cout<<"\n-------------------------<Queue of DOUBLES>------------------------------\n";

    Queue<double> *dqeobj = new Queue<double>();

    dqeobj->EnQueue(10.132341566);
    dqeobj->EnQueue(20.132341566);
    dqeobj->EnQueue(30.132341566);
    dqeobj->EnQueue(40.132341566);

    cout<<"\n";
    dqeobj->Display();
    cout<<"Number of elements in the Queue are : "<<dqeobj->Count()<<endl;

    cout<<"\n";
    cout<<"Removed element is : "<<dqeobj->DeQueue()<<endl;

    cout<<"\n";
    cout<<"Removed element is : "<<dqeobj->DeQueue()<<endl;

    cout<<"\n";
    dqeobj->Display();
    cout<<"Number of elements in the Queue are : "<<dqeobj->Count()<<endl;

    dqeobj->EnQueue(50.132341566);

    cout<<"\n";
    dqeobj->Display();
    cout<<"Number of elements in the Queue are : "<<dqeobj->Count()<<endl;

    return 0;
}
/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Data_Structure\03_July_2024>g++ DS462.cpp   

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Data_Structure\03_July_2024>a

    -------------------------------------------------------------------------
    ----------------------GENERIC SINGLY LINEAR LINKED LIST------------------
    -------------------------------------------------------------------------

    -----------------<Singly Linear Linked List of INTEGERS>-----------------

    | 11 |->| 21 |->| 51 |-> NULL
    Number of elements are : 3

    | 11 |->| 21 |->| 51 |->| 101 |->| 111 |->| 121 |-> NULL
    Number of elements are : 6

    | 11 |->| 21 |->| 51 |->| 101 |->| 105 |->| 111 |->| 121 |-> NULL
    Number of elements are : 7

    | 11 |->| 21 |->| 51 |->| 101 |->| 111 |->| 121 |-> NULL
    Number of elements are : 6

    -----------------<Singly Linear Linked List of FLOATS>-------------------

    | 11.94 |->| 21.94 |->| 51.94 |-> NULL
    Number of elements are : 3

    | 11.94 |->| 21.94 |->| 51.94 |->| 101.94 |->| 111.94 |->| 121.94 |-> NULL
    Number of elements are : 6

    | 11.94 |->| 21.94 |->| 51.94 |->| 101.94 |->| 105.94 |->| 111.94 |->| 121.94 |-> NULL
    Number of elements are : 7

    | 11.94 |->| 21.94 |->| 51.94 |->| 101.94 |->| 111.94 |->| 121.94 |-> NULL
    Number of elements are : 6

    -----------------<Singly Linear Linked List of CHARACTERS>---------------

    | A |->| B |->| C |-> NULL
    Number of elements are : 3

    | A |->| B |->| C |->| D |->| E |->| F |-> NULL
    Number of elements are : 6

    | A |->| B |->| C |->| D |->| G |->| E |->| F |-> NULL
    Number of elements are : 7

    | A |->| B |->| C |->| D |->| E |->| F |-> NULL
    Number of elements are : 6

    -----------------<Singly Linear Linked List of DOUBLES>------------------

    | 11.1323 |->| 21.1323 |->| 51.1323 |-> NULL
    Number of elements are : 3

    | 11.1323 |->| 21.1323 |->| 51.1323 |->| 101.132 |->| 111.132 |->| 121.132 |-> NULL
    Number of elements are : 6

    | 11.1323 |->| 21.1323 |->| 51.1323 |->| 101.132 |->| 105.132 |->| 111.132 |->| 121.132 |-> NULL
    Number of elements are : 7

    | 11.1323 |->| 21.1323 |->| 51.1323 |->| 101.132 |->| 111.132 |->| 121.132 |-> NULL
    Number of elements are : 6

    -------------------------------------------------------------------------
    ---------------------GENERIC DOUBLY CIRCULAR LINKED LIST-----------------
    -------------------------------------------------------------------------

    -----------------<Doubly Circular Linked List of INTEGERS>---------------

    <=>| 11 |<=>| 21 |<=>| 51 |<=>
    Number of elements are : 3

    <=>| 11 |<=>| 21 |<=>| 51 |<=>| 101 |<=>| 111 |<=>| 121 |<=>
    Number of elements are : 6

    <=>| 11 |<=>| 21 |<=>| 51 |<=>| 101 |<=>| 105 |<=>| 111 |<=>| 121 |<=>
    Number of elements are : 7

    <=>| 11 |<=>| 21 |<=>| 51 |<=>| 101 |<=>| 111 |<=>| 121 |<=>
    Number of elements are : 6

    -----------------<Doubly Circular Linked List of FLOATS>-----------------

    <=>| 11.94 |<=>| 21.94 |<=>| 51.94 |<=>
    Number of elements are : 3

    <=>| 11.94 |<=>| 21.94 |<=>| 51.94 |<=>| 101.94 |<=>| 111.94 |<=>| 121.94 |<=>
    Number of elements are : 6

    <=>| 11.94 |<=>| 21.94 |<=>| 51.94 |<=>| 101.94 |<=>| 105.94 |<=>| 111.94 |<=>| 121.94 |<=>
    Number of elements are : 7

    <=>| 11.94 |<=>| 21.94 |<=>| 51.94 |<=>| 101.94 |<=>| 111.94 |<=>| 121.94 |<=>
    Number of elements are : 6

    -----------------<Doubly Circular Linked List of CHARACTERS>-------------

    <=>| A |<=>| B |<=>| C |<=>
    Number of elements are : 3

    <=>| A |<=>| B |<=>| C |<=>| D |<=>| E |<=>| F |<=>
    Number of elements are : 6

    <=>| A |<=>| B |<=>| C |<=>| D |<=>| G |<=>| E |<=>| F |<=>
    Number of elements are : 7

    <=>| A |<=>| B |<=>| C |<=>| D |<=>| E |<=>| F |<=>
    Number of elements are : 6

    -----------------<Doubly Circular Linked List of DOUBLES>----------------

    <=>| 11.1323 |<=>| 21.1323 |<=>| 51.1323 |<=>
    Number of elements are : 3

    <=>| 11.1323 |<=>| 21.1323 |<=>| 51.1323 |<=>| 101.132 |<=>| 111.132 |<=>| 121.132 |<=>
    Number of elements are : 6

    <=>| 11.1323 |<=>| 21.1323 |<=>| 51.1323 |<=>| 101.132 |<=>| 105.132 |<=>| 111.132 |<=>| 121.132 |<=>
    Number of elements are : 7

    <=>| 11.1323 |<=>| 21.1323 |<=>| 51.1323 |<=>| 101.132 |<=>| 111.132 |<=>| 121.132 |<=>
    Number of elements are : 6

    -------------------------------------------------------------------------
    --------------------GENERIC SINGLY CIRCULAR LINKED LIST------------------
    -------------------------------------------------------------------------

    -----------------<Singly Circular Linked List of INTEGERS>---------------

    ->| 11 |->| 21 |->| 51 |->
    Number of elements are : 3

    ->| 11 |->| 21 |->| 51 |->| 101 |->| 111 |->| 121 |->
    Number of elements are : 6

    ->| 11 |->| 21 |->| 51 |->| 101 |->| 105 |->| 111 |->| 121 |->
    Number of elements are : 7

    ->| 11 |->| 21 |->| 51 |->| 101 |->| 111 |->| 121 |->
    Number of elements are : 6

    -----------------<Singly Circular Linked List of FLOATS>-----------------

    ->| 11.94 |->| 21.94 |->| 51.94 |->
    Number of elements are : 3

    ->| 11.94 |->| 21.94 |->| 51.94 |->| 101.94 |->| 111.94 |->| 121.94 |->
    Number of elements are : 6

    ->| 11.94 |->| 21.94 |->| 51.94 |->| 101.94 |->| 105.94 |->| 111.94 |->| 121.94 |->
    Number of elements are : 7

    ->| 11.94 |->| 21.94 |->| 51.94 |->| 101.94 |->| 111.94 |->| 121.94 |->
    Number of elements are : 6

    -----------------<Singly Circular Linked List of CHARACTERS>-------------

    ->| A |->| B |->| C |->
    Number of elements are : 3

    ->| A |->| B |->| C |->| D |->| E |->| F |->
    Number of elements are : 6

    ->| A |->| B |->| C |->| D |->| G |->| E |->| F |->
    Number of elements are : 7

    ->| A |->| B |->| C |->| D |->| E |->| F |->
    Number of elements are : 6

    -----------------<Singly Circular Linked List of DOUBLES>----------------

    ->| 11.1323 |->| 21.1323 |->| 51.1323 |->
    Number of elements are : 3

    ->| 11.1323 |->| 21.1323 |->| 51.1323 |->| 101.132 |->| 111.132 |->| 121.132 |->
    Number of elements are : 6

    ->| 11.1323 |->| 21.1323 |->| 51.1323 |->| 101.132 |->| 105.132 |->| 111.132 |->| 121.132 |->
    Number of elements are : 7

    ->| 11.1323 |->| 21.1323 |->| 51.1323 |->| 101.132 |->| 111.132 |->| 121.132 |->
    Number of elements are : 6

    -------------------------------------------------------------------------
    --------------------GENERIC DOUBLY LINEAR LINKED LIST--------------------
    -------------------------------------------------------------------------

    ----------------<Doubly Linear Linked List of INTEGERS>------------------

    NULL->| 11 |->| 21 |->| 51 |->NULL
    Number of elements are : 3

    NULL->| 11 |->| 21 |->| 51 |->| 101 |->| 111 |->| 121 |->NULL
    Number of elements are : 6

    NULL->| 11 |->| 21 |->| 51 |->| 101 |->| 105 |->| 111 |->| 121 |->NULL
    Number of elements are : 7

    NULL->| 11 |->| 21 |->| 51 |->| 101 |->| 111 |->| 121 |->NULL
    Number of elements are : 6

    ----------------<Doubly Linear Linked List of FLOATS>--------------------

    NULL->| 11.94 |->| 21.94 |->| 51.94 |->NULL
    Number of elements are : 3

    NULL->| 11.94 |->| 21.94 |->| 51.94 |->| 101.94 |->| 111.94 |->| 121.94 |->NULL
    Number of elements are : 6

    NULL->| 11.94 |->| 21.94 |->| 51.94 |->| 101.94 |->| 105.94 |->| 111.94 |->| 121.94 |->NULL
    Number of elements are : 7

    NULL->| 11.94 |->| 21.94 |->| 51.94 |->| 101.94 |->| 111.94 |->| 121.94 |->NULL
    Number of elements are : 6

    ----------------<Doubly Linear Linked List of CHARACTERS>----------------

    NULL->| A |->| B |->| C |->NULL
    Number of elements are : 3

    NULL->| A |->| B |->| C |->| D |->| E |->| F |->NULL
    Number of elements are : 6

    NULL->| A |->| B |->| C |->| D |->| G |->| E |->| F |->NULL
    Number of elements are : 7

    NULL->| A |->| B |->| C |->| D |->| E |->| F |->NULL
    Number of elements are : 6

    ----------------<Doubly Linear Linked List of DOUBLES>--------------------

    NULL->| 11.1323 |->| 21.1323 |->| 51.1323 |->NULL
    Number of elements are : 3

    NULL->| 11.1323 |->| 21.1323 |->| 51.1323 |->| 101.132 |->| 111.132 |->| 121.132 |->NULL
    Number of elements are : 6

    NULL->| 11.1323 |->| 21.1323 |->| 51.1323 |->| 101.132 |->| 105.132 |->| 111.132 |->| 121.132 |->NULL
    Number of elements are : 7

    NULL->| 11.1323 |->| 21.1323 |->| 51.1323 |->| 101.132 |->| 111.132 |->| 121.132 |->NULL
    Number of elements are : 6

    -------------------------------------------------------------------------
    -----------------------------GENERIC STACK-------------------------------
    -------------------------------------------------------------------------

    -------------------------<Stack of INTEGERS>-----------------------------

    Elements of stack are :
    40
    30
    20
    10

    Number of elements in the stack are : 4

    Poped element is : 40

    Poped element is : 30

    Elements of stack are :
    20
    10

    Number of elements in the stack are : 2

    Elements of stack are :
    50
    20
    10

    Number of elements in the stack are : 3

    -------------------------<Stack of FLOATS>-------------------------------

    Elements of stack are :
    40.94
    30.94
    20.94
    10.94

    Number of elements in the stack are : 4

    Poped element is : 40.94

    Poped element is : 30.94

    Elements of stack are :
    20.94
    10.94

    Number of elements in the stack are : 2

    Elements of stack are :
    50.94
    20.94
    10.94

    Number of elements in the stack are : 3

    -------------------------<Stack of CHARACTERS>---------------------------

    Elements of stack are :
    D
    C
    B
    A

    Number of elements in the stack are : 4

    Poped element is : D

    Poped element is : C

    Elements of stack are :
    B
    A

    Number of elements in the stack are : 2

    Elements of stack are :
    E
    B
    A

    Number of elements in the stack are : 3

    -------------------------<Stack of DOUBLES>------------------------------

    Elements of stack are :
    40.1323
    30.1323
    20.1323
    10.1323

    Number of elements in the stack are : 4

    Poped element is : 40.1323

    Poped element is : 30.1323

    Elements of stack are :
    20.1323
    10.1323

    Number of elements in the stack are : 2

    Elements of stack are :
    50.1323
    20.1323
    10.1323

    Number of elements in the stack are : 3

    -------------------------------------------------------------------------
    -----------------------------GENERIC QUEUE-------------------------------
    -------------------------------------------------------------------------

    -------------------------<Queue of INTEGERS>-----------------------------

    Elements of Queue are :
    10      20      30      40
    Number of elements in the Queue are : 4

    Removed element is : 10

    Removed element is : 20

    Elements of Queue are :
    30      40
    Number of elements in the Queue are : 2

    Elements of Queue are :
    30      40      50
    Number of elements in the Queue are : 3

    -------------------------<Queue of FLOATS>-------------------------------

    Elements of Queue are :
    10.94   20.94   30.94   40.94
    Number of elements in the Queue are : 4

    Removed element is : 10.94

    Removed element is : 20.94

    Elements of Queue are :
    30.94   40.94
    Number of elements in the Queue are : 2

    Elements of Queue are :
    30.94   40.94   50.94
    Number of elements in the Queue are : 3

    -------------------------<Queue of CHARACTERS>---------------------------

    Elements of Queue are :
    A       B       C       D
    Number of elements in the Queue are : 4

    Removed element is : A

    Removed element is : B

    Elements of Queue are :
    C       D
    Number of elements in the Queue are : 2

    Elements of Queue are :
    C       D       E
    Number of elements in the Queue are : 3

    -------------------------<Queue of DOUBLES>------------------------------

    Elements of Queue are :
    10.1323 20.1323 30.1323 40.1323
    Number of elements in the Queue are : 4

    Removed element is : 10.1323

    Removed element is : 20.1323

    Elements of Queue are :
    30.1323 40.1323
    Number of elements in the Queue are : 2

    Elements of Queue are :
    30.1323 40.1323 50.1323
    Number of elements in the Queue are : 3

*/
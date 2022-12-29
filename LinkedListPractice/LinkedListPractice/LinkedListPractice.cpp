#include <iostream>

using namespace std;


template <class Type>
struct nodeType
{
    Type info; //content of node
    nodeType<Type>* link; //pointer to the next node
};

template <class Type>
class linkedList
{
protected:
    nodeType<Type>* first;
    nodeType<Type>* last;

public:
    
    //initializing first and last of the linked list
    linkedList()
    {
        first = nullptr;
        last = nullptr;
    }

    void printList() const
    {
        nodeType<Type>* current;

        current = first;

        while (current != last)
        {
            cout << current->info << " ";
            current = current->link;
        }
    }

    void insertNode(const Type& newItem)
    {
        nodeType<Type>* current;
        nodeType<Type>* trailCurrent;
        nodeType<Type>* newNode;

        newNode = new nodeType<Type>;
        
        newNode->info = newItem;
        newNode->link = nullptr;

        if (first == nullptr)
        {
            first = newNode;
            last = newNode;
        }
        else
        {
            last->link = newNode;
            last = last->link;
        }
    }
};

int main()
{
    linkedList<int> list;
    int num;

    cout << "Insert a list of numbers to be displayed, use '-999' to end the list: ";
    do
    {
        cin >> num;
        list.insertNode(num);
    } while (num != -999);

    cout << "\nList: ";
    list.printList();

    return 0;
}

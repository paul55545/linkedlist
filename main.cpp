#include <iostream>



using namespace std;

class nod {
private:
    int value;
    nod* nextPtr;
    
public:

    void setValue(int valuec) {
        this->value = valuec;
    }

    int getValue() {
        return this->value;
    }

    void setPtr(nod* Ptr) {
        this->nextPtr = Ptr;
    }

    nod* getPtr() {
        return this->nextPtr;
    }

    nod() {
        value = 0;
        nextPtr = nullptr;
    }

    nod(int a) {
        value = a;
        nextPtr = nullptr;
    }

    ~nod() {
        cout << "nod destructor called for value " << this->value << endl;
    }

};

class lista {

private:
    nod* capat, * curent;
public:
    lista() {
        capat = nullptr;
        curent = nullptr;
    }

    void push(nod* b) {
        if (capat == nullptr) {
            this->capat = b;
            this->curent = b;
        }
        else {
            curent->setPtr(b);
            curent = b;
        }
    }

    /*void insert() {
        nod* link = new nod;
        link->getValue();
        link->curent = capat;
    }*/

   /* void insert() {
        nod* link= new nod;
        link = link->getPtr();
        link = link->getValue();
        link=link->
    }*/

    void insert() {
        nod* link = new nod;
        curent = link->getPtr();
        link = link->getPtr();
       /* capat = link->getPtr();*/
        
    }

    void deleteNod() {
        nod* tempnod = capat;
        capat = capat->getPtr();
    }


   /* void sort() {
        int i, j, k, tempPtr, tempValue;
        for(i=0;i<capat-1;i++)
    }*/

    void print() {
        nod* it = capat;

        while (it->getPtr() != nullptr) {
            cout << it->getValue() << " ";
            it = it->getPtr();
        }

        cout << it->getValue() << endl;
    }

    ~lista() {
        nod* itrt = capat;
        nod* ptr = nullptr;


        while (itrt != nullptr) {
            ptr = itrt;
            itrt = itrt->getPtr();
            delete ptr;

        }
    }
};

int main()
{
    
    nod a(100);
    nod *b = new nod(200);
    cout << a.getValue() << endl;
    cout << b->getValue() << endl;


    lista l;


    for (int i = 0; i < 100; i++) {
        l.push(new nod(i));
    }

    nod* c = new nod(200);
    l.insert();
    l.deleteNod();


    l.print();

 


}

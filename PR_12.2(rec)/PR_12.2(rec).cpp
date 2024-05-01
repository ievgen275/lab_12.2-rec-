#include <iostream>
#include <Windows.h>

using namespace std;

typedef int Info;
struct Elem {
    Elem* link;
    Info info;
};

Elem* p = nullptr;

void appendRecursive(Elem*& current, Info newData) {
    if (current == nullptr) {
        current = new Elem();
        current->info = newData;
        current->link = nullptr;
        return;
    }
    appendRecursive(current->link, newData);
}

void increaseListValuesRecursive(Elem* current, Info increaseBy) {
    if (current != nullptr) {
        current->info += increaseBy;
        increaseListValuesRecursive(current->link, increaseBy);
    }
}

void printListRecursive(Elem* current) {
    if (current != nullptr) {
        cout << current->info << " ";
        printListRecursive(current->link);
    }
    else {
        cout << endl;
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    appendRecursive(p, 1);
    appendRecursive(p, 2);
    appendRecursive(p, 3);
    appendRecursive(p, 4);
    appendRecursive(p, 5);

    cout << "Початковий список: ";
    printListRecursive(p);

    Info increaseBy;
    cout << "Введіть на скільки збільшити значення кожного елемента: ";
    cin >> increaseBy;

    increaseListValuesRecursive(p, increaseBy);

    cout << "Змінений список: ";
    printListRecursive(p);

    return 0;
}

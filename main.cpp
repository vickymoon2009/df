#include "Person.h"

int main()
{
    Person<string, int> obj1("Kirill", 17);
    Person<int, string> obj2(17, "Kirill");
    Person<string, string> obj3("Kirill", "programmer");
    Person<int, int> obj4(20, 100);

    obj1.Init(5);
    obj1.Print();

    cout << endl;

    obj2.Init(3);
    obj2.Print();

    cout << endl;

    obj3.Init(4);
    obj3.Print();

    cout << endl;

    obj4.Init(2);
    obj4.Print();

    return 0;
}

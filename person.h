#pragma once
#include <iostream>
#include <string>
using namespace std;

template<class T1, class T2>
class Person
{
    T1 first;
    T2 second;
    double* grades = nullptr;
    int size = 0;

public:
    Person();
    Person(T1 a, T2 b);

    void Init(int s);
    void Print();

    ~Person();

    T1 GetFirst();
    void SetFirst(T1 value);

    T2 GetSecond();
    void SetSecond(T2 value);
};

template<class T1, class T2>
Person<T1, T2>::Person()
{
    first = T1();
    second = T2();
}

template<class T1, class T2>
Person<T1, T2>::Person(T1 a, T2 b)
{
    first = a;
    second = b;
}

template<class T1, class T2>
void Person<T1, T2>::Init(int s)
{
    delete[] grades;

    size = s;
    grades = new double[size]{};

    for (int i = 0; i < size; i++)
    {
        grades[i] = rand() % 12 + 1;
    }
}

template<class T1, class T2>
void Person<T1, T2>::Print()
{
    cout << "First: " << first << endl;
    cout << "Second: " << second << endl;
    cout << "Grades: ";

    for (int i = 0; i < size; i++)
    {
        cout << grades[i] << "\t";
    }

    cout << endl;
}

template<class T1, class T2>
Person<T1, T2>::~Person()
{
    cout << "Destructor\n";
    delete[] grades;
}

template<class T1, class T2>
T1 Person<T1, T2>::GetFirst()
{
    return first;
}

template<class T1, class T2>
void Person<T1, T2>::SetFirst(T1 value)
{
    first = value;
}

template<class T1, class T2>
T2 Person<T1, T2>::GetSecond()
{
    return second;
}

template<class T1, class T2>
void Person<T1, T2>::SetSecond(T2 value)
{
    second = value;
}

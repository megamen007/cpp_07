#pragma once 

#include <iostream>
#include <string>
#include <exception>

template <typename T>
class Array 
{
private:
    T *data;
    int size;
public:
    Array(
        data = null;
        size = 0;
    );
    //default 
    Array(unsigned int n)
    {
        size = n;
        data = new T [size];
    }
    //assignment operator overload 
   Array &operator=(Array &Assignment)
    {
        int i = 0;
        if (this != &Assignment)
            delete [] data;
        size = Assignment.size
        data = new T[size];
        while(i < size)
        {
            data[i] = Assignment.data[i];
            i++;
         }
        return *this;
    }
    //copy constructor 
    Array(Array const &copy)
    {
        int i = 0;
        size = copy.size;
        data = new T[size];
        while(i < size)
        {
            data[i] = Assignment.data[i];
            i++;
        }
    }
    //Subscript operator 
    T &operator[](size_t Index)
    {
        if (index >= static_cast<size_t>(size))
            throw std::out_of_range("out of range");
        return data[index];
    }
    // subscript operator but we need it for fixed size objects
    const T &operator[](size_t Index)
    {
        if (index >= static_cast<size_t>(size))
            throw std::out_of_range("out of range");
        return data[index];
    }
    //size member function
    int size()
    {
        return size;
    }
    //deconstructor 
    ~Array()
    {
        if (data)
            delete [] data;
    }

};
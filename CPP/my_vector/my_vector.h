/**
 * 实现一个 vector 类模板
 */

#ifndef MY_VECTOR_H
#define MY_VECTOR_H

#include <algorithm>
#include <utility>
#include <exception>

template <typename T>
class MyVector
{
    public:
        static const int SPARE_CAPACITY = 2;

        explicit MyVector(int initSize = 0) 
            : theSize{initSize}, theCapacity{initSize + SPARE_CAPACITY}
        {
            objects = new T[theCapacity];
        }

        MyVector(const MyVector & rhs)
            : theSize{rhs.theSize}, theCapacity{rhs.capacity}, objects{nullptr}
        {
            objects = new T[theCapacity];
            for (size_t i = 0; i < theSize; ++i)
            {
                objects[i] = rhs.objects[i];
            }
        }

        MyVector(MyVector && rhs) noexcept
            : theSize{rhs.theSize}, theCapacity{rhs.theCapacity}, 
            objects{rhs.objects}
        {
            rhs.objects = nullptr;
            rhs.theSize = 0;
            rhs.theCapacity = 0;
        }

        MyVector & operator=(const MyVector & rhs)
        {
            MyVector copy = rhs;
            std::swap(*this, copy);
            return *this;
        }

        MyVector & operator=(MyVector && rhs) noexcept
        {
            std::swap(theSize, rhs.theSize);
            std::swap(theCapacity, rhs.theCapacity);
            std::swap(objects, rhs.objects);

            return *this;
        }

        ~MyVector()
        {
            delete[] objects;
        }

        bool empty() const
        {
            return size() == 0;
        }

        int size() const
        {
            return theSize;
        }

        int capacity() const
        {
            return theCapacity;
        }

        T & operator[](int index)
        {
            if (index < 0 || index >= size())
            {
                throw "Out of range!";
            }
            return objects[index];
        }

        const T & operator[](int index) const
        {
            if (index < 0 || index >= size())
            {
                throw "Out of range!";
            }
            return objects[index];
        }

        void resize(int newSize)
        {
            if (newSize > theCapacity)
            {
                reserve(newSize * 2);
            }
            theSize = newSize;
        }

        void reserve(int newCapacity)
        {
            if (newCapacity < theSize)
            {
                return;
            }
            T* newArray = new T[newCapacity];
            for (size_t i = 0; i < theSize; ++i)
            {
                newArray[i] = std::move(objects[i]);
            }

            theCapacity = newCapacity;
            std::swap(objects, newArray);
            delete[] newArray;
        }
        
        void push_pack(const T & x)
        {
            if (theSize == theCapacity)
            {
                reserve(theCapacity * 2 + 1);
            }
            objects[theSize++] = x;
        }

        void push_pack(T && x)
        {
            if (theSize == theCapacity)
            {
                reserve(theCapacity * 2 + 1);
            }
            objects[theSize++] = std::move(x);
        }

        void pop_back()
        {
            if (empty())
            {
                throw "Empty!";
            }
            --theSize;
        }

        const T & back() const
        {
            if (empty())
            {
                throw "Empty!";
            }
            return objects[theSize - 1];
        }

        typedef T* iterator;
        typedef const T* const_iterator;

        iterator begin()
        {
            return &objects[0];
        }

        iterator end()
        {
            return &objects[size()];
        }

        const_iterator begin() const
        {
            return &objects[0];
        }

        const_iterator end() const
        {
            return &objects[size()];
        }

    private:
        int theSize;
        int theCapacity;
        T* objects;
};

#endif
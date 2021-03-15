/**
 * 实现一个 list 类模板
 */

#ifndef MY_LIST_H
#define MY_LIST_H

#include <iostream>

template <typename T>
class MyList
{
    private:
        struct Node
        {
            T data;
            Node* prev;
            Node* next;

            Node(const T & d = T{}, Node* p = nullptr, Node* n = nullptr)
                : data{d}, prev{p}, next{n} {}
            
            Node(T && d, Node* p = nullptr, Node* n = nullptr)
                : data{std::move(d)}, prev{p}, next{n} {}
        };
        

    public:
        class const_iterator
        {
            protected:
                Node* current;

                T & retrieve() const
                {
                    return current->data;
                }

                const_iterator(Node* p) : current{p} {}

                friend class MyList<T>;

            public:
                const_iterator() : current{nullptr} {}

                const T & operator*() const
                {
                    return retrieve();
                }

                const_iterator & operator++()
                {
                    current = current->next;
                    return *this;
                }

                const_iterator operator++(int)
                {
                    const_iterator old = *this;
                    ++(*this);
                    return old;
                }

                const_iterator & operator--()
                {
                    current = current->prev;
                    return *this;
                }

                const_iterator operator--(int)
                {
                    const_iterator old = *this;
                    --(*this);
                    return old;
                }

                bool operator==(const const_iterator & rhs) const
                {
                    return current == rhs.current;
                }

                bool operator!=(const const_iterator & rhs) const
                {
                    return !(*this == rhs);
                }
        };

        class iterator : public const_iterator
        {
            protected:
                iterator(Node* p) : const_iterator{p} {}

                friend class MyList<T>;

            public:
                iterator() {}

                T & operator*()
                {
                    return const_iterator::retrieve();
                }

                const T & operator*() const
                {
                    return const_iterator::operator*();
                }

                iterator & operator++()
                {
                    this->current = this->current->next;
                    return *this;
                }

                iterator operator++(int)
                {
                    iterator old = *this;
                    ++(*this);
                    return old;
                }

                iterator & operator--()
                {
                    this->current = this->current->prev;
                    return *this;
                }

                iterator operator--(int)
                {
                    iterator old = *this;
                    --(*this);
                    return old;
                }
        };

    private:
        int theSize;
        Node* head;
        Node* tail;

        void init()
        {
            theSize = 0;
            head = new Node;
            tail = new Node;
            head->next = tail;
            tail->prev = head;
        }
    
    public:
        MyList()
        {
            init();
        }

        ~MyList()
        {
            clear();
            delete head;
            delete tail;
        }

        MyList(const MyList & rhs)
        {
            init();
            for (auto & x : rhs)
            {
                push_back(x);
            }
        }

        MyList & operator=(const MyList & rhs)
        {
            MyList copy = rhs;
            std::swap(*this, copy);
            return *this;
        }

        MyList(MyList && rhs) 
            : theSize(rhs.theSize), head{rhs.head}, tail{rhs.tail}
        {
            rhs.theSize = 0;
            rhs.head = nullptr;
            rhs.tail = nullptr;
        }

        MyList & operator=(MyList && rhs)
        {
            std::swap(theSize, rhs.theSize);
            std::swap(head, rhs.head);
            std::swap(tail, rhs.tail);

            return *this;
        }

        iterator begin()
        {
            return iterator(head->next);
        }

        const_iterator begin() const
        {
            return const_iterator(head->next);
        }

        iterator end()
        {
            return iterator(tail);
        }

        const_iterator end() const
        {
            return const_iterator(tail);
        }

        int size() const
        {
            return theSize;
        }

        bool empty() const
        {
            return size() == 0;
        }

        void clear()
        {
            while (!empty())
            {
                pop_front();
            }
        }

        T & front()
        {
            return *begin();
        }

        const T & front() const
        {
            return *begin();
        }

        T & back()
        {
            return *--end();
        }

        const T & back() const
        {
            return *--end();
        }

        void push_front(const T & x)
        {
            insert(begin(), x);
        }

        void push_back(const T & x)
        {
            insert(end(), x);
        }

        void push_front(T && x)
        {
            insert(begin(), std::move(x));
        }

        void push_back(T && x)
        {
            insert(end(), std::move(x));
        }

        void pop_front()
        {
            erase(begin());
        }

        void pop_back()
        {
            erase(--end());
        }

        iterator insert(iterator itr, const T & x)
        {
            Node *p = itr.current;
            ++theSize;
            return iterator(p->prev = p->prev->next = new Node{x, p->prev, p});
        }

        iterator erase(iterator itr)
        {
            Node *p = itr.current;
            iterator retVal(p->next);
            p->prev->next = p->next;
            p->next->prev = p->prev;
            delete p;
            --theSize;

            return retVal;
        }

        iterator erase(iterator from, iterator to)
        {
            for (iterator itr = from; itr != to; )
            {
                itr = erase(itr);
            }
            return to;
        }
};

#endif
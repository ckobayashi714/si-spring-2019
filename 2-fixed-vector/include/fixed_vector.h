
#ifndef FIXED_VECTOR_H
#define FIXED_VECTOR_H

#include <stdexcept>
using namespace std;

template <typename T>
class FixedVector {
private:
    size_t capacity,
           size;
    T *arr;

public:
    FixedVector();
    FixedVector(size_t cap);
    FixedVector(const FixedVector &rhs);
    ~FixedVector();

    void push_back(const T &elem);
    void pop_back();
    T at(const size_t index) const;

    size_t get_capacity();
    size_t get_size();
    T &operator[] (size_t index);
};

// ===== TODO ===== //

// Implement the copy constructor.
template <typename T>
FixedVector<T>::FixedVector(const FixedVector &rhs) {

}

// Insert an element at the next available index of the array.
// Utilize stdexcept to handle edge cases.
template <typename T>
void FixedVector<T>::push_back(const T &elem) {

}

// Remove element from the back of the vector.
// Utilize stdexcept to handle edge cases.
template <typename T>
void FixedVector<T>::pop_back() {

}

// Retrieve the element at the specified index.
// Utilize stdexcept to handle edge cases.
template <typename T>
T FixedVector<T>::at(const size_t index) const {

}

// Retrieve the element at the specified index.
// Utilize stdexcept to handle edge cases.
template <typename T>
T &FixedVector<T>::operator[] (size_t index) {
    return arr[index];
}

// ===== END TODO ===== //


template <typename T>
FixedVector<T>::FixedVector() {
    capacity = 100;
    size = 0;
    arr = new T[capacity];
}

template <typename T>
FixedVector<T>::FixedVector(size_t cap) {
    capacity = cap;
    size = 0;
    arr = new T[capacity];
}

template <typename T>
FixedVector<T>::~FixedVector() {
    delete [] arr;
}

template <typename T>
size_t FixedVector<T>::get_capacity() {
    return capacity;
}

template <typename T>
size_t FixedVector<T>::get_size() {
    return size;
}

#endif


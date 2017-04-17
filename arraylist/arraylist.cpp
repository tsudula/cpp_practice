//arraylist.cpp

#ifndef ARRAYLIST_H
#include "arraylist.h"
#endif

#ifndef NULL
#define NULL 0
#endif

//for every method we write, we need to create a template to keep track of type
template <class T>
void arrayList<T>::resize()
{
    
    //resize the array so it can accomadata more data
    //precondition: size of array == size of the data
    //post condition: new array that's twice the size
    
    //get a new temp array and copy into it
    T *temp = new T[arrLength*2];
    for(int i =0; i<arrLength;i++){
        temp[i]=data[i];
    }
    data=temp;
    arrLength *=2;
    
}

template <class T>
bool arrayList<T>::needToResize()
{
    //return if data is equal to the array length
    return arrLength==listSize;
}


template <class T>
void arrayList<T>::add(T item)
{
    //add item to end of list
    
    //check if there is enough space
    if(needToResize()){
        resize();
    }
    
    data[listSize]=item;
    listSize++;
}

template <class T>
void arrayList<T>::add(int index, T item) //overloaded
{
    //add item at indicated index, everything else is shifted down
    
        //check if there is enough space
    if(needToResize()){
        resize();
    }
    
    for(int i =listSize; i<index;i--)
    {
        data[listSize+1]=data[listSize];
    }
        
    data[index]=item;
    listSize++;
}


template <class T>
void arrayList<T>::remove(int index)
{
    //remove and move everything up according to a 
    
     for(int i =index; i<listSize;i++)
    {
        data[i]=data[i+1];
    }
    listSize--;
}

template <class T>
T* arrayList<T>::get(int index)
{
    if(index>=0 && index<=listSize){
        return &data[index];
    }
    else{
        return NULL;
    }
}

template <class T>
void arrayList<T>::set(int index, T item)
{
    //set at index with new value
    if(index>=0 && index<=listSize){
        data[index]=item;
    }

}

template <class T>
int arrayList<T>::indexOf(T item)
{
    //search array and return the index
    
    for(int i =0; i<=listSize;i++){
        if(item==data[i]){
            return i;
        }
    }
    
    //didnt find it
    return -1;
}

template <class T>
int arrayList<T>::lastIndexOf(T item)
{
    //search array and return the last index
    for(int i =listSize; i>=0;i--){
        if(item==data[i]){
            return i;
        }
    }
    
    //didnt find it
    return -1;
}


template <class T>
bool arrayList<T>::contains(T item)
{
    //retun true if item exists in list
    return (indexOf(item)>-1);
}

template <class T>
int arrayList<T>::size()
{
    return listSize;
}

template <class T>
void arrayList<T>::remove(T item)
{
    //remove and move everything up
    
     for(int i =index; i<listSize;i++)
    {
        data[i]=data[i+1];
    }
    listSize--;
}

    
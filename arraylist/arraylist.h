//arraylist.h

#define ARRAYLIST_H


template <class T>
class arraylist
{
   private: 
   
       T *data;             //We want a array of type T (or a T pointer called data)
       int arrLength;       //length of actual array
       int listSize;        //number of elements array contains
       
       //helper methods
       void resize();       //resize array if necessary
       bool needToResize();  //determines if need to resize
   
   public:
   
    //constructor
    arraylist() //write this code in here
    {
        //get an array setup (pointers and arrays are same thing)
        data = new T[5];
        
        //initialize the parameters (arrayLenght and listSize)
        arrLength=5;
        listSize=0;
    }
    
    //accessors
    bool contains(T item);  //if object in list
    int indexOf(T item);    //where object is in array
    int lastIndexOf(T item);
    T *get(int index);
    int size();
    
    //modifiers
    void add(T item);               //add to list
    void add(int index, T item);    //add to list at particular index
    void set(int index, T item);    //change item at particular index
    void remove(int index);
    void remove(T item);
    
};
//arraylistmain.cpp

#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "arraylist.h"

using namespace std;

int main()
{
    //set up system forrandome number
    srand(time(NULL));
    arraylist<String> intList;
    
    for(int i=0;i<10;i++){
        int num=rand() % 100; //randome num between 0 and 100
        
        intList.add(num);
    }
    
    while(intList.size>0){
        int &g= *(intList.get(0));
        cout <<g << " ";
        cout << endl;
        intList.remove(0);
    }
}

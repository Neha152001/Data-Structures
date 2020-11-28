#include<iostream>
using namespace std;
class dynamic_array
{
private:
    int *data;
    int next_index;
    int capacity;
public:
    dynamic_array()
    {
        data=new int[5];
        next_index=0;
        capacity=5;
    }
    void add(int element)
    {
       if(next_index==capacity)
       {
           int *new_data=new int[2*capacity];
           for(int i=0;i<capacity;i++)
           {
               new_data[i]=data[i];
           }
           delete []data;
           data=new_data;
           capacity*=2;
       }
       data[next_index]=element;
          next_index++;
    }
    int get(int index)
    {
        if(index>=0 && index<next_index)
            return data[index];
        else
            return -1;

    }
    void  add(int ele ,int i)
    {
        if(i<next_index)
            data[i]=ele;
        else if(i==next_index)
            add(ele);
    }
    void print()
    {
        cout<<"Array elements :"<<endl;
        for(int i=0;i<next_index;i++)
            cout<<data[i]<<"  ";
        cout<<endl;
    }
    int get_capacity()
    {
        return capacity;
    }
};

#ifndef BOOLEAN_H
#define BOOLEAN_H

#include <string>
using namespace std;

class boolean {
    private:
        char* array;
        int size;
    
    public:
        boolean(int size): array(NULL) {
            int sizes = (size/8) + 1;
            array = new char[sizes];
            for (int i = 0; i < sizes; ++i)
            {
                array[i] = 0x00;
            }
            cout << sizes << "\n";
        }
        
        void bitOn(int position) {
            array[position/8] |= 1 << (position%8);
            for (int i = 0; i < 8; ++i)
            {
                unsigned long bit = (array[position/8]>> i) & 1UL;
                cout<<bit;
            }
            cout<<"\n";
            

        }
             
        void bitOff(int position) {
            array[position/8] &= ~(1 << (position%8));
            for (int i = 0; i < 8; ++i)
            {
                unsigned long bit = (array[position/8]>> i) & 1UL;
                cout << bit;
            }
            cout<<"\n";
        }
             
        bool operator[](int position) {
            int mask = 0x01 << (position%8);
            int mask1 = array[position/8];
            mask &= mask1;
            
            if(mask == 0){
                return false;
            }
            else
                return true;
        }
    
        void clear() {    
            for (int i = 0; i < size; ++i)
            {
                bitOff(i);
            }
        }
             
        ~boolean() {
            delete[] array;
        }
};

#endif
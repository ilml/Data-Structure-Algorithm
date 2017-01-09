/*************************************************************************
	> File Name: IntCell.h
	> Author: 
	> Mail: 
	> Created Time: Sun Jan  8 14:10:04 2017
 ************************************************************************/

#ifndef _INTCELL_H
#define _INTCELL_H

class IntCell{
     public:
         explicit IntCell(int Ini = 0);
         int read() const;
         void write(int x);
         ~IntCell
     private:
         int storedval;
};






#endif


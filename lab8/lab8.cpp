//
//  lab8.cpp
//  
//
//  Created by ching on 2016/5/31.
//
//
/*
#include <iostream> 
using namespace std;
int main()
{
     try{
         throw 3.0;
         //3.0f instead of 3.0 which treated as double is fine for catch block 
      } catch (float) {
          cout << "exception caught" << endl;
          cout << "I love C++" << endl;
          return 0;
      }
}*/
 /*#include <iostream>
using namespace std;
int main()
{
     throw;
     cout << "I love C++" << endl;
     return 0;
}*/
#include <iostream> 
#include <new>
using namespace std;
int main()
{
     double *ptr[50];
     try{
         for(int i = 0; i<50; ++i) {
             ptr[i] = new double[50000000000];
             cout << "ptr[" << i << "] new success\n";
             }
         
         
            } catch(bad_alloc &memoryAlloc){ cerr << "Exception: " << memoryAlloc.what() << endl;
                
            } }
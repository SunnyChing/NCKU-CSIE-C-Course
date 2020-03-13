# lab4
compile &nm of A:
chingdeMacBook-Pro:lab4 ching$ g++ lab4.a.cpp -o lab4.a

chingdeMacBook-Pro:lab4 ching$ nm lab4.a

0000000100000f20 T __Z7averagePdRd
0000000100000f50 T __Z7averageif
0000000100000000 T __mh_execute_header
0000000100000f80 T _main
                 U dyld_stub_binder


Ans A:

 encoded identifiers:

fun double average T __Z7averagePdRd

fun it average T __Z7averageif

compile &exec B
chingdeMacBook-Pro:lab4 ching$ g++ lab4.b.cpp -o lab4.b

chingdeMacBook-Pro:lab4 ching$ ./lab4.b 

Ans B:

output:

1 8

4 8

4 8

8 8

why?

 1, char data type occupies 1 byte.  8, pointer of char occupies 4 bytes.
 4, int data type  occupies 4 bytes.  8, pointer of int occupies 4 bytes.
 4, float data type occupies 4 bytes. 8, pointer of float occupies 4 bytes.
 8, double data type occupies 8 bytes. 8,pointer of double occupies 4 bytes.

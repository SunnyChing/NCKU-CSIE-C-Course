# lab8
ans for lab8
1. empty throw statement must  be calls in exception handler.
2.no,it turn out to terminate with uncaught exception of type double, which mean compiler see 3.0 as a double number rather than float. to correct it, changing “float” to “double” or plus f after 3.0
3.F44036144@2016cpp:~/lab8$ ./main 
mino_ptr[1]new success
mino_ptr[2]new success
mino_ptr[3]new success
Exception:std::bad_alloc

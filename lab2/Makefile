main: BMI.o main.o
	g++ -o main main.o BMI.o

BMI.o: BMI.cpp BMI.h
	g++ -c BMI.cpp
main.o:
	g++ -c main.cpp

clean:
	rm main *.o
//<target>:<dependence>\
//<tab><command>}

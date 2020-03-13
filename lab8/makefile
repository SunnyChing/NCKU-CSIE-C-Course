all:	m.o m_i.o main.cpp
	g++ -o main main.cpp m.o m_i.o
	rm *.o

m.o:
	g++ -c mino.cpp -o m.o

m_i.o:
	g++ -c mino_i.cpp -o m_i.o



c:
	rm main

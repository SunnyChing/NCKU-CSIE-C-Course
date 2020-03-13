all:	m.o m_i.o m_l.o m_s.o m_o.o g_m.o main.cpp
	g++ -o main main.cpp m.o m_i.o m_l.o m_s.o m_o.o g_m.o m_t.o
	rm *.o

m.o:
	g++ -c mino.cpp -o m.o

m_i.o:
	g++ -c mino_i.cpp -o m_i.o

m_l.o:
	g++ -c mino_l.cpp -o m_l.o

m_s.o:
	g++ -c mino_s.cpp -o m_s.o

m_o.o:
	g++ -c mino_o.cpp -o m_o.o

g_m.o:
	g++ -c gen_mino.cpp -o g_m.o

m_t.o:
	g++ -c mino_t.cpp -o m_t.o

c:
	rm main

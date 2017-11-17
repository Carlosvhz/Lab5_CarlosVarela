run:	main.o poder.o persona.o airbender.o
	g++ main.o poder.o persona.o airbender.o -o run

main.o:	poder.h persona.h airbender.h  main.cpp
	g++ -c main.cpp

poder.o:	poder.h poder.cpp
	g++ -c poder.cpp

persona.o:	persona.h persona.cpp
	g++ -c persona.cpp

airbender.o:	airbender.h airbender.cpp
	g++ -c airbender.cpp

clear:
	rm *.o run

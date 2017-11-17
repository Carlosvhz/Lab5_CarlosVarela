run:	main.o poder.o ofensivo.o defensivo.o curativo.o invocacion.o persona.o airbender.o firebender.o waterbender.o earthbender.o nonbender.o
	g++ main.o poder.o ofensivo.o defensivo.o curativo.o invocacion.o  persona.o airbender.o firebender.o waterbender.o earthbender.o nonbender.o -o run

main.o:	poder.h ofensivo.h defensivo.h curativo.h invocacion.h persona.h airbender.h firebender.h waterbender.h earthbender.h nonbender.h main.cpp
	g++ -c main.cpp

poder.o:	poder.h poder.cpp
	g++ -c poder.cpp

ofensivo.o:	ofensivo.h ofensivo.cpp
	g++ -c ofensivo.cpp

defensivo.o:	defensivo.h defensivo.cpp
	g++ -c defensivo.cpp

curativo.o:	curativo.h curativo.cpp
	g++ -c curativo.cpp

invocacion.o:	invocacion.h invocacion.cpp
	g++ -c invocacion.cpp

persona.o:	persona.h persona.cpp
	g++ -c persona.cpp

airbender.o:	airbender.h airbender.cpp
	g++ -c airbender.cpp

firebender.o:	firebender.h firebender.cpp
	g++ -c firebender.cpp

waterbender.o:	waterbender.h waterbender.cpp
	g++ -c waterbender.cpp

earthbender.o:	earthbender.h earthbender.cpp
	g++ -c earthbender.cpp

nonbender.o:	nonbender.h nonbender.cpp
	g++ -c nonbender.cpp

clear:
	rm *.o run

project1: Main.o StudentStack.o Student.o
	g++ Main.o StudentStack.o Student.o -o project3

Main.o: Main.cpp StudentStack.h Student.h
	g++ -c Main.cpp

StudentList.o: StudentStack.cpp StudentStack.h Student.h
	g++ -c StudentStack.cpp

Student.o: Student.cpp Student.h
	g++ -c Student.cpp

hw6 : Collection.o Set.o List.o Queue.o HashSet.o ArrayList.o ArrayList.o LinkedList.o 161044069_main.o
	g++ -o hw6 161044069_main.o Collection.o Set.o List.o Queue.o HashSet.o ArrayList.o ArrayList.o LinkedList.o

Collection.o: Collection.cpp
	g++ -c -std=c++0x -Wall Collection.cpp

Set.o: Set.cpp
	g++ -c -std=c++0x -Wall Set.cpp	

List.o: List.cpp
	g++ -c -std=c++0x -Wall List.cpp
	
Queue.o: Queue.cpp
	g++ -c -std=c++0x -Wall Queue.cpp		

HashSet.o : HashSet.cpp
	g++ -c -std=c++0x -Wall HashSet.cpp

ArrayList.o : ArrayList.cpp
	g++ -c -std=c++0x -Wall ArrayList.cpp

LinkedList.o : LinkedList.cpp
	g++ -c -std=c++0x -Wall LinkedList.cpp

Iterator.o : Iterator.cpp
	g++ -c -std=c++0x -Wall Iterator.cpp
		
161044069_main.o : 161044069_main.cpp
	g++ -c -std=c++0x -Wall 161044069_main.cpp

clean:
	rm *.o hw6

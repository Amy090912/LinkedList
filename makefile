all : TestStringLinkedList

TestStringLinkedList: StringLinkedList.o TestStringLinkedList.o
	g++ StringLinkedList.o TestStringLinkedList.o -o TestStringLinkedList
      
StringLinkedList.o: StringLinkedList.cpp
	g++ -c StringLinkedList.cpp
      
TestStringLinkedList.o: TestStringLinkedList.cpp
	g++ -c TestStringLinkedList.cpp
            
clean:
	rm *o TestStringLinkedList 


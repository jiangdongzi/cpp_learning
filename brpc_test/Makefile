a.out: test.o
	g++ test.o -lbrpc -lgflags -lssl -lcrypto -lprotobuf
test.o: test.cpp
	g++ -c test.cpp

.PHONY: clean
clean:
	rm a.out test.o

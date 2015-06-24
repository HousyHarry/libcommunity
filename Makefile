CXX = g++
all: compile test checkstyle

compile: % %Test

%: %.o
	$(CXX) -o $@ $^

%Test: %Test.o
	$(CXX) -o %$@ $^

%.o: %.cpp
	$(CXX) -c $^ 

test: libCommunityTest
	./libCommunityTest

checkstyle:
		python ../cpplint/cpplint.py *.cpp *.h

clean:
	rm -f *.o
	rm -f libCommunityTest
	rm -f libCommunity


compile:
	g++ -c libCommunity.cpp libCommunityTest.cpp

checkstyle:
		python ../cpplint/cpplint.py *.cpp

test:

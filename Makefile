compile:
	g++ -o libcommunity libcommunity.cpp

checkstyle:
		python ../cpplint/cpplint.py *.cpp

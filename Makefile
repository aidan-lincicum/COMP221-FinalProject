random_tester: PRNG.cpp main.cpp
	g++ -o random_tester PRNG.cpp main.cpp

clean:
	rm random_tester
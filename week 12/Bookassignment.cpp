#include "Fibonaccilterator.h"
#include "Fibonaccirange.h"
#include "PrimeNumberRange.h"
#include <iostream>

int main() {

	std::cout << "Fibonacci: ";
	for (const auto &i : FibonacciRange{ 5000 })  {

		std::cout << i << ' ';
	}

	std::cout << "\n\n";
    
    PrimeNumberRange prime{ 5000 };

	std::cout << "Prime: ";
	std::cout << prime.getCurrent() << ' ';

	while (true) {

		int n{ ++prime };
		if (n < 0)
			return true;

		std::cout << n << ' ';
	}

    return 0;
}
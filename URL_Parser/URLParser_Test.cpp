#include <iostream>
#include <string>

inline void assertTrue(bool condition, const std::string& testName) {
	if (condition) {
		std::cout << "[PASSED] " << testName << std::endl;
	}
	else {
		std::cout << "[FAILED] " << testName << std::endl;
	}
}
#include <iostream>
#include <string>
#include "URLParser.cpp"
#include "URLParser_Test.cpp"

void testURLParser_FullInfo() {
	URLParser parser;
	URLComponents components = parser.parse("https://www.example.com:8080/path/to/resource");

	std::cout << "FullInto" << std::endl;
	assertTrue(components.scheme == "https", "Scheme check");
	assertTrue(components.host == "www.example.com", "Host check");
	assertTrue(components.port == "8080", "Port check");
	assertTrue(components.path == "/path/to/resource", "Path check");
}

void testURLParser_Empty() {
	URLParser parser;
	URLComponents components = parser.parse("");

	std::cout << "Empty" << std::endl;
	assertTrue(components.scheme == "#empty", "Scheme check");
	assertTrue(components.host == "#empty", "Host check");
	assertTrue(components.port == "#empty", "Port check");
	assertTrue(components.path == "#empty", "Path check");
}

void testURLParser_NoPort() {
	URLParser parser;
	URLComponents components = parser.parse("https://www.example.com/path/to/resource");

	std::cout << "NoPort" << std::endl;
	assertTrue(components.scheme == "https", "Scheme check");
	assertTrue(components.host == "www.example.com", "Host check");
	assertTrue(components.port == "80", "Port check");
	assertTrue(components.path == "/path/to/resource", "Path check");
}

void testURLParser_NoPath() {
	URLParser parser;
	URLComponents components = parser.parse("https://www.example.com:8080");

	std::cout << "NoPath" << std::endl;
	assertTrue(components.scheme == "https", "Scheme check");
	assertTrue(components.host == "www.example.com", "Host check");
	assertTrue(components.port == "8080", "Port check");
	assertTrue(components.path == "", "Path check");
}

void testURLParser_WrongFormat() {
	URLParser parser;
	URLComponents components = parser.parse("random string");

	std::cout << "WrongFormat" << std::endl;
	assertTrue(components.scheme == "#empty", "Scheme check");
	assertTrue(components.host == "#empty", "Host check");
	assertTrue(components.port == "#empty", "Port check");
	assertTrue(components.path == "#empty", "Path check");
}

int main() {
	testURLParser_FullInfo();
	testURLParser_Empty();
	testURLParser_NoPort();
	testURLParser_NoPath();
	testURLParser_WrongFormat();

	system("pause");

	return 0;
}
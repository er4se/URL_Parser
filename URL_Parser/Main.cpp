#include <iostream>
#include <string>
#include "URLParser.cpp"

int main() {
	std::string user_url;

	std::cout << "Input URL: ";
	std::cin >> user_url;
	std::cout << std::endl;

	URLParser parser;
	URLComponents components = parser.parse(user_url);

	std::cout << "URL structure:\n\n"
		<< "Scheme: " << components.scheme << std::endl
		<< "Host: " << components.host << std::endl
		<< "Port: " << components.port << std::endl
		<< "Path: " << components.path << std::endl;

	system("pause");

	return 0;
}
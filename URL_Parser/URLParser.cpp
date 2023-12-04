#include <iostream>
#include <string>
#include <regex>

struct URLComponents {
	std::string scheme = "#empty";
	std::string host = "#empty";
	std::string port = "#empty";
	std::string path = "#empty";
};

class URLParser {
public:
	URLComponents parse(const std::string& url) {
		URLComponents components;

		std::regex urlRegex(R"((\w+):\/\/([^:/]+)(:\d+)?([^?#]+)?)");
		std::smatch match;

		if (std::regex_match(url, match, urlRegex)) {
			components.scheme = match[1];
			components.host = match[2];
			components.port = match[3].str().empty() ? "80" : match[3].str().substr(1);
			components.path = match[4];
		}

		return components;
	}
};
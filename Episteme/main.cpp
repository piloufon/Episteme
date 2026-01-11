#include <cstdio>
#include <stdint.h>
#include <variant>
#include <vector>

// test struct -> don't know if I will create it's own header or a "universal" header for all structured like dunno ??
struct Event {

};

struct Person {

};

using Object = std::variant<Event, Person>;



int main() {
	std::vector<Object> objects;

	std::printf("Hello, Episteme!\n"); // It work the same way (fuck Copilot autocompletion I want to code myself, if you want to code do it yourself elsewhere)
	return 0;
}
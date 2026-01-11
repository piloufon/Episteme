#include <cstdio>
#include <stdint.h>
#include <variant>
#include <vector>
#include <string>
#include <map>

// test struct -> don't know if I will create it's own header or a "universal" header for all structured like dunno ??
/*
struct Event {};
struct Person {};
struct Concept {};
struct Organization {};
struct Location {};
struct Work {}; // Intellectual / artistic
struct Period {};
struct Object {};
struct Language_Element {};
using Entity = std::variant<Event, Person, Concept, Organization, Location, Work, Period, Object, Language_Element>;
*/

enum PresentationMethod : uint16_t {
	Causal,				// Causes -> Event -> Consequences
	Chronological,		// Timeline order
	SemanticProximity,	// Closest in graph first | To explore a lot of concept
	Hierarchical,		// General -> Specific (increasing depth)
	Thematic,			// Grouped by themes/categories
	ByImportance,		// Highest importance score first
};
enum class ContentLevel {
	Short,
	Medium,
	Long
};
struct Date {
	int32_t year = INT32_MAX; // INT32_MAX -> unknown
	uint8_t month = 0; // 0 -> unknown
	uint8_t day = 0; // 0 -> unknown
};

struct Entity {
	uint64_t id = 0; 
	std::string entity_name = "unknown";

	std::map<ContentLevel, std::string> content;
	Date date;
	double importance = 0.0;
	std::vector<std::string> tags;

	// Temp only
	std::vector<uint64_t> relatedTopics;
};





int main() {
	std::vector<Entity> objects;

	std::printf("Hello, Episteme!\n"); // It work the same way (fuck Copilot autocompletion I want to code myself, if you want to code do it yourself elsewhere)
	return 0;
}
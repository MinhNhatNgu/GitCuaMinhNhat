#include <iostream>
#include <cassert>
#include <iomanip>
#include <fstream>
#include <string>
#include <nlohmann/json.hpp>

using namespace std;
using json = nlohmann::json;


int main() {
	/*fstream ifs;
	ifs.open("data.json");
	json j = json::parse(ifs);
	cout << j.dump() << endl;
	*/


	json j = { {"name","nhat" }, {"age", 19 } };
	json arr = { "nhat", "ngu", "vl" };
	cout << j.dump() << endl;
	
	cout << j.contains("name") << endl;
	cout << j.contains("nhat") << endl;
	
	return 0;
}
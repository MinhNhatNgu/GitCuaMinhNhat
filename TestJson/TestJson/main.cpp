#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp>
#include <string>

using namespace std;
using json = nlohmann::json;

int main() {
    //Read file
    fstream ifs;
    ifs.open("data.json");
    json j = json::parse(ifs);
    cout << j << endl;
    
    class Iphone{
    public:
        string 
    };
    

    

	return 0;
}
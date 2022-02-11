#include <iostream>
#include <json/json.h>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/xml_parser.hpp>
#include <boost/foreach.hpp>
#include <string>
#include <set>
#include <exception>
#include <iostream>

namespace pt = boost::property_tree;

using namespace std;


void json() {
	Json::Value root;
	Json::StreamWriterBuilder builder;
	const std::unique_ptr<Json::StreamWriter> writer(builder.newStreamWriter());
	root["Name"] = "robin";
	root["Age"] = 20;
	writer->write(root, &std::cout);
}

int main()
{

	json();

	system("PAUSE");
	return 0;
}
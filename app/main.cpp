#include "dog_generated.h"
#include "flatbuffers/flatbuffer_builder.h"
#include <ios>
#include <iostream>

using namespace boilerplate;

int main() {

	flatbuffers::FlatBufferBuilder builder(1024);

	auto name = builder.CreateString("Sparky");

	DogBuilder db(builder);
	db.add_id(42);
	db.add_name(name);
	
	auto out = db.Finish();
	builder.Finish(out);

	std::cout << "Message Length: " << builder.GetSize() << std::endl;

	auto in = GetDog(builder.GetBufferPointer());

	std:: cout << "Woof! My name is " << in->name()->c_str() << " (ID:" << in->id() << ")" << std::endl;

	return 0;
}

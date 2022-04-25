#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool edit(string path, string new_path)
{
	string content;
	size_t size = fstream(path, ios::ate | ios::binary | ios::in).tellg();
	fstream file(path, ios::in);
	if (file.is_open()) {
		char* data = new char[size];
		file.read(data, size);
		content = data;
		delete[] data;

		size_t space_pos = content.find(' ');
		if (space_pos != -1) {
			for (size_t i = 0; i < space_pos; i++)
				if (islower(content.at(i)))
					content.at(i) = toupper(content.at(i));

			fstream new_file(new_path, ios::out);
			auto s = content.size();
			new_file.write(content.c_str(), s);
		}
	}
	else
		return false;
	file.close();
	return true;
}

int main()
{
	string path = "t1";
	string new_path = "t2";
	
	edit(path, new_path);

	return 0;
}
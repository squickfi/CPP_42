#include <iostream>
#include <string>
#include <fstream>

void replace(std::string &str, std::string const &s1, std::string const &s2) {

	int s1_len = s1.size();
	std::string temp("");

	int pos1 = 0, pos2 = 0;

	while(1) {

		pos2 = str.find(s1, pos1);
		if (pos2 < 0)
		{
			temp += str.substr(pos1, pos2 - pos1);
			break ;
		}
		temp += str.substr(pos1, pos2 - pos1);
		temp += s2;
		pos1 = pos2 + s1_len;
	}
	str = temp;
}

int main(int argc, char **argv) {

	if (argc != 4) {

		std::cout << "Wrong arguments: usage: filename, s1, s2.\n";
		return (1);
	}
	else if (argv[2][0] == '\0') {

		std::cout << "Wrong arguments: s1 is empty.\n";
		return (1);
	}

	std::string filename(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);

	std::ifstream ifile(filename);
	if (!ifile.is_open()) {

		std::cout << filename << ": can't be opened.\n";
		return (1);
	}

	std::ofstream ofile(filename + ".replace");
	if (!ofile.is_open()) {

		std::cout << filename + ".replace: can't be opened or created.\n";
		ifile.close();
		return (1);
	}

	std::string s;
	while (!ifile.eof()) {
		
		std::getline(ifile, s);
		replace(s, s1, s2);
		ofile << s << "\n";
	}

	ifile.close();
	ofile.close();
	return (0);
}
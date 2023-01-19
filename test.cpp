#include <iostream>
#include <string>
#include <locale>

int main(int argc, char** argv) {
	static constexpr char const * flag = "flag{strings_is_a_useful_program}";
	if (argc > 1 && std::string(argv[1]).compare("-h") == 0){
		std::cout << (char)102 << (char)108 << (char)97 << (char)103 << (char)123 << (char)104 << (char)101 << (char)108 << (char)112 << (char)95 << (char)112 << (char)97 << (char)103 << (char)101 << (char)115 << (char)95 << (char)97 << (char)114 << (char)101 << (char)95 << (char)102 << (char)117 << (char)110 << (char)125 << '\n';
		std::cout << "--flag   Print a flag using a password.\n";
	}
	else if (argc > 1 && std::string(argv[1]).compare("--flag") == 0){
		std::cout << "What is the password? ";
		std::string password;
		std::cin >> password;
		if (password.compare("icanhazbetterpassword?") == 0)
			std::cout << (char)102 << (char)108 << (char)97 << (char)103 << (char)123 << (char)104 << (char)97 << (char)114 << (char)100 << (char)99 << (char)111 << (char)100 << (char)101 << (char)100 << (char)95 << (char)115 << (char)101 << (char)99 << (char)114 << (char)101 << (char)116 << (char)115 << (char)95 << (char)97 << (char)114 << (char)101 << (char)95 << (char)98 << (char)97 << (char)100 << (char)125 << '\n';
	}
	else
		std::cout << "Hello. Nothing to be found here?\n";

	return 0;
}

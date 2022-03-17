#include <fstream>
#include <iostream>
#include <string>

# define COLOUR_Y "\033[0;38;5;220m"
# define COLOUR_G "\033[0;38;5;42m"
# define COLOUR_R "\033[0;38;5;203m"
# define COLOUR_FIN "\033[0m"

int main (int ac, char **av)
{
	if (ac == 4)	
	{
		std::string filename(av[1]), s1(av[2]), s2(av[3]);
		int ret;
		if (filename.length() == 0 || s1.length() == 0 || s2.length() == 0)
		{
			
			std::cout << COLOUR_Y << "Arguments Error" << COLOUR_FIN <<std::endl;
			return (1);
		}
		std::ifstream OriginFile(filename);
		if (OriginFile.is_open())
		{
			std::ofstream ReplaceFile((filename.append(".replace")));
			if (!ReplaceFile.is_open())
			{	
				std::cout << "Replacefile create fail" << std::endl;
				return (1);
			}
			while (!OriginFile.eof())
			{
				std::string str;
				std::getline(OriginFile, str);
				ret = str.find(s1);
				if (ret != -1)
				{
					str.erase(ret, s1.length());
					str.insert(ret, s2);
					ret += s2.length();
				}
				ReplaceFile << str << std::endl;
			}
			ReplaceFile.close();
		}
		else
			std::cout << COLOUR_Y << "file not found" << COLOUR_FIN << std::endl;
		OriginFile.close();
	}
	else
		std::cout << COLOUR_Y <<"Arguments Error" << COLOUR_FIN << std::endl;
	return (0);
}

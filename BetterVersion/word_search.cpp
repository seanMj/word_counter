//overload for paths on a different system... this one wont let me us it wether i use
//namespace fs = std::filesystem; or std::exper...::filesystem; or -lc++fs, or -lstdc++fs... got quite annoying..
//only after i wrote all the code..
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
//....
//v1.2
inline void count_words(const std::string& word, const std::string& filename)
{		
		std::ifstream file;
		file.open(filename);

		std::string* temp = new std::string;
		size_t word_cnt = 0;

		std::vector<std::string>* tempv = new std::vector<std::string>;

		while(file >> *temp){
			for(auto& i : *temp){
				if(isupper(i))
					i = tolower(i);
				if(isspace(i))
					i = '\n';
				if(ispunct(i))
					i = ' ';
			}
			tempv -> push_back(*temp);
		}
		file.close();
		delete temp;
		//...
		std::sort(tempv -> begin(), tempv -> end());
		for(std::string::size_type i = 0; i != tempv -> size(); ++i){
			if(word == (*tempv)[i]){
				word_cnt += 1;
			}
		}
		delete tempv;
		std::cout << word_cnt << std::endl;
		
}
//much much more clean and actually works, no mess, nothing not needed - it works
//and finds the exact word your looking for, and how often it actually occurs. 
//self-explanation code, provides exactly what it says.
//still not the best version because its using pointers for no reasion... 
//litteraly no reasion, it does not provide any boost or anything that I can call,
//"better", I just used it because I could, and because C++ lets me, if I wanted lol. 

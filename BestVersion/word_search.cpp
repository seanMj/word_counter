//overload for paths on a different system... this one wont let me us it wether i use
//namespace fs = std::filesystem; or std::exper...::filesystem; or -lc++fs, or -lstdc++fs... got quite annoying..
//only after i wrote all the code..
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
//....
//v1.3
inline void count_words(const std::string& word, const std::string& filename)
{		
		std::ifstream file;
		file.open(filename);

		std::string temp = " ";
		size_t word_cnt = 0;

		std::vector<std::string> tempv;

		while(file >> temp){
			for(auto& i : temp){
				if(isupper(i))
					i = tolower(i);
				if(isspace(i))
					i = '\n';
				if(ispunct(i))
					i = ' ';
			}
			tempv.push_back(temp);
		}
		std::sort(tempv.begin(), tempv.end());

		//str::size_type could equally be called "auto"
		for(std::string::size_type i = 0; i != tempv.size(); ++i){
			if(word == tempv[i]){
				word_cnt += 1;
			}
		}
		std::cout << word_cnt << std::endl;	
		file.close();
}
//this is the best version: simple + to the point = works
//no fancy pointers, no fancy words just a program that does a task.
//and is fully self-documented. 

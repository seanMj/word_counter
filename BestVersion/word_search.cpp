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
		
		while(file >> temp){//read from file, word by word
			for(auto& i : temp){//read each character of each word
				if(isupper(i))		//if
					i = tolower(i);	//do this 
				if(isspace(i))		//if
					i = '\n';	//do this
				if(ispunct(i))		//if
					i = ' ';	//then this
			}
			tempv.push_back(temp);		//place current word into the vector
		}
		std::sort(tempv.begin(), tempv.end());	//after going through the file, and collection, sort the vector [word3,word2,word1] = [word1,word2,word3]

		//str::size_type could equally be called "auto"
		for(std::string::size_type i = 0; i != tempv.size(); ++i){
			if(word == tempv[i]){	//if this is the word we are looking for
				word_cnt += 1;	//add 1 to the word count
			}
		}
		std::cout << word_cnt << std::endl;	//print the results of the data collected
		file.close();				//close the file, it does not need to be open anymore currently.
}
//this is the best version: simple + to the point = works
//no fancy pointers, no fancy words just a program that does a task.
//and is fully self-documented. 

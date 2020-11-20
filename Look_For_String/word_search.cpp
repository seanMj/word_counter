//overload for paths on a different system... this one wont let me us it wether i use
//namespace fs = std::filesystem; or std::exper...::filesystem; or -lc++fs, or -lstdc++fs... got quite annoying..
//only after i wrote all the code..
#include <string>
#include <fstream>
#include <iostream>
#include <vector>


//..
int word_counter(std::string& filename, std::string& word){
        std::ifstream file(filename);
        std::string tmp = " ";
        int word_cnt = 0;
        while(getline(file, tmp)){
                if(word == tmp){
                        word_cnt += 1;
                }

        }
        return word_cnt;
}

void all_words(std::string& word, std::string& filename, std::string& outfile)
{
		std::ifstream file;
		file.open(filename);

		std::ofstream Ofile;
		Ofile.open(outfile, std::ios::app);
		std::string temp = " ";
		std::vector<std::string> hld;

		while(getline(file, temp))
		{
			hld.push_back(temp);
		}
		//could have used the STL remove_if()... but i wanted to use these guys... sure....
		for(auto i = hld.begin(); i != hld.end(); ++i){
			for(auto ii = i -> begin(); ii != i -> end(); ++ii){
				if(iscntrl(*ii)){
					(*ii) = ' ';	}
				if(!isalpha(*ii)){
					*ii = '\n';	}
				if(isupper(*ii)){
					(*ii) = tolower(*ii);	}
			}
			Ofile << *i;
		}
		std::cout << word_counter(outfile, word) << std::endl;;
}

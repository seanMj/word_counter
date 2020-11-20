#include "word_search.cpp"
#include <iostream>
#include <string>
//..
void all_words(std::string& word, std::string& filename, std::string& outfile);
int word_counter(std::string& filename, std::string& word);
//i should use regex to find the words... but im only looking for specific words.
//..

int main(){

	
	std::string wd = "gold";
	
	std::string file_name = "bible.txt";

	std::string ofile = {"words.txt"};

	all_words(wd, file_name, ofile);
	system("rm words.txt");
}

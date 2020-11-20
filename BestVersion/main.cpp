#include "word_search.cpp"
#include <iostream>
#include <string>
//..

//i should use regex to find the words... but im only looking for specific words.
//..
inline void count_words(const std::string& word, const std::string& filename);

int main(){
	const std::string str = "gold";
	const std::string text = "bible.txt";		
	count_words(str, text);
}

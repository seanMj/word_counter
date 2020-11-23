#include "word_search.cpp"
#include <iostream>
#include <string>

//..				what word			filename to look at
inline void count_words(const std::string& word, const std::string& filename);

int main(){
	const std::string str = "gold";		//word to look for
	const std::string text = "bible.txt";	//file to look through
	count_words(str, text);			//call the function with the two parameters "gold", and "bible.txt"
						//where gold is the word we want to count the occurences, and the "bible.txt" 
						//is the file which we wish to search through. :)
	
			//you can do this little buddy!
}

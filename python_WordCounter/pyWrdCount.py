#cnt_wrd is the count_word function shared library wrapper, the shared Library only works on a linux system, not windows.

import cnt_wrd

#filename:
file = "bible.txt"

#words (strings) to look for through the file being searched
wrds = ["god", "faith", "worship", "belive", "hope", "walk", "see", "friend", "gold", "king", "kings", "queen", "father", "eat", "fish"]

#for every word in the list of "wrds"^ 
for i in wrds:
	print i + '\t', cnt_wrd.count_words(i, file)
	#print each word, and a tab	and then print the results of the function...
	
	
	
#python robs the programmer of learning the beauty of computer science, it is sometimes used by corps. as assembly line programmers (ive now found)
#who dont know exactly what they are doing with the system. this is good if you only care about less learning, and less mental dedication. 
#its a good second language though, after you know what the computer is doing - its great. (every "computer programmer" needs to know at least 2 languages)
#"and only a poor crafts-man will curse their tools"


#why C++ is so amazing? because C++ is the backbone of our word, and even python! - I wrote this code to show it.
#As you can see, its calling the exact same C++ function I wrote from best_version: count_words(string, filename),
#and its allowing me to use it in python because I created a shared library with C++ :) 
#now anyone using python can use this function in python, just by including the shared library in the same file,
#and thats almost all they need to know.

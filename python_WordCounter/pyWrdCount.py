import cnt_wrd

file = "bible.txt"
wrds = ["god", "faith", "worship", "belive", "hope", "walk", "see", "friend", "gold", "king", "kings", "queen", "father", "eat", "fish"]

for i in wrds:
	print i + '\t', cnt_wrd.count_words(i, file)


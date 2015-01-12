#include "typedef.h"

/*
	Author: Carlos Nikiforuk
	Lab Assignment #5
	Purpose: Dictionary Program. Reads words from an input file, stores them in a dictionary in
		in alphabetical order, and prints them out, along with their frequency. The dictionary's
		max size is 100, with a max word size of 15 as defined in "typedef.h". Effective Word 
		size is 14 (null terminated string). If a word over 14 char is found, it is skipped.
*/



/****************************************--DECLARATIONS--******************************************/

extern DICT dictionary;  	//your dictionary 
extern WORD word;        	//your word
extern int count[];   		//tracks word frequencies
extern int wordcount;		//tracks word count


/*****************************************--FUNCTIONS--********************************************/

BOOL InsertWord(DICT dict, WORD word){
/* 
  adds word to dictionary, sort included. If word can't be added returns 0 else returns 1
*/	
	
	if (wordcount < MAX){
		int i = 0;
		if (wordcount>0)
		{
			int j = wordcount;
			while (word > dict[i] && i<wordcount){i++;} //find location
			while (j > i){			
				dict[j].assign(dict[j-1]);	    //shift right 
				count[j] = count[j-1];
				j--;
				}
		}
		wordcount++;
		dict[i] = word;
		count[i] = 1;
		return 1;
	}
	return 0;
}



void DumpDictionary(DICT dict, int count[]) {
/* 
  will sort the dictionary, and display the contents
  if you with to display words beyond 14 characters, printf line will need to be edited
*/
	cout << "Word			    Frequency" << endl;
	cout << "---------------------------------" << endl;
	for(int j=0;j<wordcount;j++){
		char tmp[wordsize];
		dict[j].copy(tmp,wordsize);
		printf("%-14s                  %3d \n",tmp,count[j]);
	}
}


WORD GetNextWord(void){
/* 
   will retrieve next word in input stream. Word is defined just as in assignment #1 
   returns WORD or 0 if no more words in input stream
*/
	
	WORD word; 
	char ch;

	while (cin.good() && !isalpha(ch = cin.get()) );
	if (cin.good()) do{ 
			ch = tolower(ch);
			word += ch; 
			} while ( isalpha(ch=cin.get()) ) ;

	if(!word.empty()&& word.size() < wordsize ){ 
			word+='\0';
			return word; 
			} 
	return "";
		
}


BOOL FullDictionary(DICT dict) {
/* 
   if dictionary is full, return 1 else 0 
 */

	return (wordcount == MAX);
}


int LocateWord(DICT dict, WORD word) {
/*
   will determine if dictionary contains word. if found, returns position else returns value < 0
*/
	for(int j=0;j<wordcount;j++){ 
		if (word.compare(dict[j])==0) return j;
		}
	return -1;
}

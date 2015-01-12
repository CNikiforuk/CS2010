#include "typedef.h"

/*
	Author: Carlos Nikiforuk
	Lab Assignment #5
	Purpose: Dictionary Program. Reads words from an input file, stores them in a dictionary in
		in alphabetical order, and prints them out, along with their frequency. The dictionary's
		max size is 100, with a max word size of 15 as defined in "typedef.h". Effective Word 
		size is 14 (null terminated string). If a word over 14 char is found, it is skipped.
*/

/***********************************--PROTOTYPES/DECLARATIONS--*************************************/

int LocateWord(DICT, WORD);
BOOL FullDictionary(DICT);
BOOL InsertWord(DICT,WORD);
WORD GetNextWord(void);
void DumpDictionary(DICT ,int[]);

/*
  note that these are global variables so that they are already initialized to 0
*/

DICT dictionary;  //your dictionary 
WORD word;        // 
int count[MAX];   //tracks word frequencies
int wordcount = 0;//tracks word count


/*******************************************--MAIN--**********************************************/

int main (void) {
    
int pos;

    while (true) 
	{
	        word = GetNextWord();
		if (word.empty())
			{
		  	DumpDictionary(dictionary,count);
		   	break;
	       		}

	       if ((pos = LocateWord(dictionary,word)) >=  0 ) count[pos]++;
		
	       else
		   if (!InsertWord(dictionary,word)) cout << "dictionary full " << word << " cannot be added \n";
    	}
    return 0;
}

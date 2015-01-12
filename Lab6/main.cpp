#include "header.h"

/*
	Author: Carlos Nikiforuk
	Lab Assignment #6
	Purpose: Dictionary Program. Reads words from an input file, stores them in a dictionary in
		in alphabetical order, and prints them out, along with their frequency. The dictionary's
		max size is 100, with a max word size of 10 as defined in "header.h".
*/

/***********************************--PROTOTYPES/DECLARATIONS--*************************************/

ENTRY *LocateWord(DICT &dict, WORD);
BOOL FullDictionary(DICT);
BOOL InsertWord(DICT &dict,WORD);
WORD GetNextWord(void);
void DumpDictionary(DICT &dict);


/*
  note that these are global variables so that they are already initialized to 0
*/


DICT dictionary={MAX,0,0}; //dictionary
WORD word;                 //string



/********************************************--MAIN--***********************************************/

int main (void) {
	
	
	ENTRY *pos;
	dictionary.Words = new ENTRY;
	dictionary.Words->nextWord = 0;


	while (1) {

	       	word = GetNextWord();

	       	if ( word.empty())  {

		   	DumpDictionary(dictionary);

		   	break;
	 	}

       if ((pos = LocateWord(dictionary,word)) >  0)  pos->count++;

       else

           if (!InsertWord(dictionary,word)) cout << "dictionary full " << word <<  " cannot be added\n";

    }

    return 0;

}

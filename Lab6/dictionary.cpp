#include "header.h"

/*
	Author: Carlos Nikiforuk
	Lab Assignment #6
	Purpose: Dictionary Program Functions.
*/

/****************************************--DECLARATIONS--******************************************/

extern DICT dictionary;
extern WORD word;

/*****************************************--FUNCTIONS--********************************************/

ENTRY *LocateWord(DICT &dict, WORD word) {
/*
 will determine if dictionary contains word. if found, returns pointer to entry else returns  0
*/
	
		
	ENTRY *tmp;
	tmp = dict.Words;
	if (tmp != 0){
		while(tmp->nextWord != 0){
			tmp = tmp->nextWord;
			if(word == tmp->w) return tmp;
		}
		
	}
	return 0;
			
}

BOOL FullDictionary(DICT &dict) {
/* 
 if dictionary is full, return 1 else 0 
*/

	return (dict.numWords == MAX);

}


BOOL InsertWord(DICT &dict, WORD word){
/* 
 adds word to dictionary at alphbetical location, if word can't be added returns 0 else returns 1
*/


	if(dict.numWords != MAX){	
		ENTRY *tmp;
		ENTRY *newnode;
		tmp = dict.Words;			//points to dictionary

		if (tmp != 0)

			while(tmp->nextWord != 0 && tmp->nextWord->w <= word){
				tmp = tmp->nextWord;	//traverses dictionary
			}
		if (tmp->nextWord == 0){
			tmp->nextWord = new ENTRY;
			tmp = tmp->nextWord;	
			tmp->w = word;	
			tmp->count = 1;			//adds new node at end
			tmp->nextWord = 0;
			dict.numWords += 1;
			return 1;
		}

		else {
			newnode = tmp;
			tmp = tmp->nextWord;
			newnode->nextWord = new ENTRY;
			newnode = newnode->nextWord;	//adds new node at sorted location
			newnode->w = word;
			newnode->count = 1;
			newnode->nextWord = tmp;
			dict.numWords += 1;
			return 1;	
		}

	return 0;

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


void DumpDictionary(DICT &dict) {
/* 
will display sorted contents of dictionary
*/

	cout << "Word			    Frequency" << endl;
	cout << "---------------------------------" << endl;

	ENTRY *tmp;
	tmp = dict.Words;
	
	while (tmp->nextWord != 0){
		char cpy[wordsize];
		tmp = tmp->nextWord;
		tmp->w.copy(cpy,wordsize);
		printf("%-20s           %3d \n",cpy,tmp->count);
	}

	cout << endl << "Total Words: " << dict.numWords << endl;
	
}




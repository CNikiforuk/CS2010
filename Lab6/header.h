#ifndef header_h
#define header_h
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <iostream>

using namespace std;
using std::string;

#define MAX 100 
#define wordsize 15

typedef string STRING;
typedef bool BOOL;
typedef string WORD;
   

/*
    structure describing a word entry in the dictionary
*/


typedef struct entry {

      int count;                  /* frequency count for a particular word */

      WORD w;                     /* the word itself */

      struct entry *nextWord;     /* pointer to next entry */

} ENTRY;


/*
    structure describing the dictionary
*/


typedef struct dict {
	
     int maxEntries;	 	 /* maximum number of entries allowed; this is an artificial limit */

                                 /* link lists can be as big as you want. This limit ensures that   */

                                 /* this code tries to behave like the previous ones */

                                   

     int numWords;                 /* number of words in the dictionary */
     
     ENTRY* Words;                 /* pointer to the entries in the dictionary */

} DICT;


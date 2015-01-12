/*
	Author: Carlos Nikiforuk
	Lab Assignment #4
	Purpose: Dictionary Assignment, Max number of words in dictionary is 40,
		 max wordsize is 9.
*/

#include <cstdio>
#include <string.h>
#include <cctype>
#include <iostream>

using namespace std;
int Wordsize = 10;
int Dictlength = 40;
typedef char word[10];
typedef word dict[40];
int freq[40];
int WordCount = 0;

word wrd;
dict d;


//functions

void CopyWord(word w, dict &d){
	int i = 0;
	while(w[i] != '\0'){ d[WordCount][i] = w[i]; i++;}
	d[WordCount][i] = '\0';

}


void DisplayDict(dict &d){
	cout << "Word			Frequency" << endl;
	cout << "-----------------------------" << endl;
	for(int j=0;j<WordCount;j++) printf("%-10s                  %3d \n",d[j],freq[j]);
}


bool ExtractWord(word &w){
	char ch;
	int newLine= 0;
	int i = 0;
		
	while( cin.good() && i<Wordsize)
	{
		ch = cin.get();
	 	if ( isalpha(ch) )  /* function test is ch  is A-Z, a-z */
	    	{
			ch = tolower(ch);	       	
			w[i++]=ch;
		       	newLine = 1;
	   	}
	 else
	       if (newLine)
		{
		w[i] = '\0';		
		return true;
		}
	}
return false;

}


int LocateWord(word w, dict &d){
	for(int loc=0;loc<Dictlength;loc++) 
	{
		if (strcmp(w, d[loc])== 0) return loc;
		else return -1;
	}
}

bool InsertWord(word w, dict &d){
	int loc = LocateWord(wrd, d);
	if (loc==-1 and WordCount < Dictlength){CopyWord(w, d); freq[WordCount++]++; return true;}
	else if (WordCount >= Dictlength) return false;
	else {freq[loc]++; return true;}
}



//main
int main() {
	cout << "Hey User, The max word size is 9." << endl << endl;
	while (ExtractWord(wrd)){
		InsertWord(wrd, d);
	}
DisplayDict(d);	
}


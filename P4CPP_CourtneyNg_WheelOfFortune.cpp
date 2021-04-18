/*
Courtney Ng
Period 4
*/

#include <iostream>
using namespace std;

string get_underscores(string word);
bool is_letter(char c);

int main(){
	string answer = "Demisemihemidemisemiquaver"; //"Star Trek II: The Wrath of Khan";
	char userletter;
	int moneyCount = 0;
	
	//cout << (char)toupper('e'); // (char) is typecasting the int 
	
	//Display the answer as a string of "underscores"
	//ignore the spaces and punctuations
	
	cout << answer << endl;
	//The Perks of Being a Wallflower
	//___ _____ __ _____ _ __________
	
	string ans_undscrs = get_underscores(answer);
	
	//print underscores with spaces
	for(int i = 0; i < ans_undscrs.length(); i++){
		cout << ans_undscrs[i] << " ";
	}
	
	cout << "\n\n";
	
	do{
		cout << "enter letter: ";
		cin >> userletter;
		cout << "\n";
		for(int i = 0; i < answer.length(); i++){
			if(userletter == tolower(answer[i]) || userletter == toupper(answer[i])){
				ans_undscrs[i] = answer[i];
			}
		}
		
		for(int i = 0; i < ans_undscrs.length(); i++){
		cout << ans_undscrs[i] << " ";
		}
		
		cout << endl << endl;
		
	} while(ans_undscrs != answer);
	
	//islower(char c); //determines if char c is lower case; bool
	//isupper(char c); //determines if char c is upper case; bool
	
}

//replace letter with underscore
//returns a string of underscores based on string
string get_underscores(string word){
	string ans = "";
	for(int i=0; i < word.length(); i++){
		if(is_letter(word[i])){
			ans += '_';
			
		}
		else{
			ans += word[i];
		}
	}
	return ans;
}

//break down, looks if letter is in the alphabet
bool is_letter(char c){
	string abc = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	for(int i = 0; i < abc.length(); i++){
		// abc may be a string but every individual part is a character
		if(c == abc[i]){
			return true;
		}
	}
	return false;
}


//when money count >= count add option buy vowel.


/*
Movies

Inception
Shrek
Bee Movie
*/

/*
Anime

One Piece
Banana Fish

*/

/*
Games

Borderlands 2
Left 4 Dead 2
The Wolf Among Us


/*
Hard

demisemihemidemisemiquaver
rhythm
jazz
croquet
crypt
awkward
bagpipes
banjo
bungler
gazebo
gypsy
haiku
haphazard
hyphen
ivory
sieve
xoloitzcuintli
*/

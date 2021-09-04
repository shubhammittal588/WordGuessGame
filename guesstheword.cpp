#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
 
int NUM_TRY=3;
int checkGuess (char, string, string&);
void main_menu();
string message = "Play!";
 
 
int main(int argc, char *argv[])
{
	string name;
	char letter;
	string str;
	
 
    string str1[] =
	{
		"strawberry",
		"eclipse",
		"ketchup",
		"toothpaste",
		"lemon",
		"bubble",
		"headphones",
		"battery",
		"beach",
		"mountains",
		"giraffe",
		"lion",
		"frog",
		"mailman",
		"cook"
	};
	
	srand(time(NULL));
	int n=rand()% 15;
	str=str1[n];
    
	
	string hide_m(str.length(),'X');
	
	
    
	
	while (NUM_TRY!=0)
	{
		main_menu();
		cout << "\n\n\t\t\t\t" << hide_m;
		if(str == "strawberry"){
			cout << "\n\n\t\t\t\t" <<"\nThey have bright red color, natural shine and fresh looking green caps.";
		}else if(str == "eclipse"){
			cout << "\n\n\t\t\t\t" << "\nwhen the moon gets between Earth and the sun, and the moon casts a shadow over Earth";
		}else if(str == "ketchup"){
			cout << "\n\n\t\t\t\t" << "\na seasoned pureed condiment usually made from tomatoes.";
		}else if(str == "toothpaste"){
			cout << "\n\n\t\t\t\t" << "\na paste or gel dentifrice used with a toothbrush to clean and maintain the aesthetics and health of teeth";
		}else if(str == "lemon"){
			cout << "\n\n\t\t\t\t" << "\na pale yellow oval citrus fruit with thick skin and fragrant, acidic juice.";
		}else if(str == "bubble"){
			cout << "\n\n\t\t\t\t" << "\na tiny round body of air or gas in a liquid ";
		}else if(str == "headphones"){
			cout << "\n\n\t\t\t\t" << "\na pair of earphones joined by a band placed over the head, for listening to audio signals such as music or speech.";
		}else if(str == "battery"){
			cout << "\n\n\t\t\t\t" << "\na source of electric power consisting of one or more electrochemical cells with external connections for powering electrical devices";
		}else if(str == "beach"){
			cout << "\n\n\t\t\t\t" << "\na narrow strip of land separating a body of water from inland areas";
		}else if(str == "mountains"){
			cout << "\n\n\t\t\t\t" << "\na large natural elevation of the earth's surface rising abruptly from the surrounding level; a large steep hill.";
		}else if(str == "giraffe"){
			cout << "\n\n\t\t\t\t" << "\nan African artiodactyl mammal, the tallest living terrestrial animal and the largest ruminant";
		}else if(str == "lion"){
			cout << "\n\n\t\t\t\t" << "\nking of the jungle";
		}else if(str == "frog"){
			cout << "\n\n\t\t\t\t" << "\na tailless amphibian with a short squat body, moist smooth skin, and very long hind legs for leaping.";
		}else if(str == "mailman"){
			cout << "\n\n\t\t\t\t" << "\na man who delivers mail";
		}else if(str == "cook"){
			cout << "\n\n\t\t\t\t" << "\nprepare by mixing, combining, and heating the ingredients";
		}
		cout << "\n\n\t\t\t\tGuess a letter: ";
		cin >> letter;
		
		if (checkGuess(letter, str, hide_m)==0)
		{
			message = "Incorrect letter.";
			NUM_TRY = NUM_TRY - 1;
		}
		else
		{
			message = "NICE! You guess a letter";
		}
 
 
		
		if (str==hide_m)
		{
			message = "Congratulations! You got it!";
			main_menu();
			cout << "\n\t\t\t\tThe word is : " << str << endl;
			break;
		}
	}
	if(NUM_TRY == 0)
	{
		message = "NOOOOOOO!...you've lost.";
		main_menu();
		cout << "\n\t\t\t\tThe word was : " << str << endl;
	}
	cin.ignore();
	cin.get();
	return 0;
}
 
 
int checkGuess (char guess, string secretstr, string &guessstr)
{
	int i;
	int matches=0;
	int len=secretstr.length();
	for (i = 0; i< len; i++)
	{
		
		if (guess == guessstr[i])
			return 0;
		
		if (guess == secretstr[i])
		{
			guessstr[i] = guess;
			matches++;
		}
	}
	return matches;
}
 
void main_menu()
{
   cout<<"\t\t\t\t*\t*";
   cout<<"\t\t\t\t**\t**";
   cout<<"\t\t\t\t***\t***";
   cout<<"\t\t\t\t****\t****";
   cout<<"\t\t\t\t*****\t*****";
   cout<<"\t\t\t\t******\t******";
   cout<<"\t\t\t\t*******\t*******";
   cout<<"\t\t\t\t*******\t*******";
   cout<<"\t\t\t\t******\t******";
   cout<<"\t\t\t\t*****\t*****";
   cout<<"\t\t\t\t****\t****";
   cout<<"\t\t\t\t***\t***";
   cout<<"\t\t\t\t**\t**";
   cout<<"\t\t\t\t*\t*";
 
 cout<<"\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
                cout<<"\n\t\t\t\tGuessss it game!";
				cout << "\n\t\tYou have " << NUM_TRY << " tries to try and guess the word.";
				cout<<"\n\n\t\t\t\t"+message;
 cout<<"\n\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
 
}
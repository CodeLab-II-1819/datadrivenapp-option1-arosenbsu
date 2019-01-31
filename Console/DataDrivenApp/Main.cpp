#include <iostream>
#include <fstream>//includes the ability to file stream
#include <string>//includes the ability to use text strings
#include <vector>//includes the ability to use vectors
using namespace std;

int main() {//main body of code
	bool answered = false;//booleon variable for answered set to false outside of dowhile
	//vector containing each option and the exit strings
	vector<string> options = { "1. Total Number of Tweets", "2. Number of Tweets that talk about Politics", "3. Number of Tweets that talk aout Money", "4. Show Tweets containing the word 'Paris'", "5. Show Tweets containing the word 'DreamWorks'", "6. Show Tweets containing the word 'Uber'", "7. Show Tweets Containing the word 'Dog'", "8. Show Tweets that contain '@katyperry'", "9. Count Tweets that contain '@kendalljenner'",  "10. Count Tweets Containing the word 'Music' or 'music'", "11. Exit" };

		do {//start of do while
			//variables that are created at the start of each dowhile cycle
			int tweetcount = 0;
			int tweetnum = 0;
			char reset;
			char yesno;
			int Qchoice;
			string keyword = "notset";//keyword variable that starts as notset
			string Tweets;
			//loads the csv file to be able to read
			ifstream inFile;
			inFile.open("sampleTweets.csv");

			cout << "Welcome to SwiftSift!" << endl;//welcome text
			cout << "Please enter the number of a Search option from 1 - 10 or press 11 to exit the application." << endl;//instructions of the options to use the application

			for (int i = 0; i < options.size(); i++) {//a for loop that increases the count of i until all of the options in the vector are shown
				cout << options[i] << endl;
			}

			cin >> Qchoice;//the users input for the option choice
			if (cin.fail()) {
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				system("CLS");
				//this ignores the input if it is not a number
			}


			switch (Qchoice) {//the start of the switch statement
			case 1:
				cout << "Swiftly Sifting..." << endl;
				while (getline(inFile, Tweets)) {//counts each line in the tweets, adding to the tweetnum counter
					tweetnum++;
				}
				cout << "There are " << tweetnum << " Tweets in the file" << endl;//Prints tweet numbers total
				cout << "Press Any key to reset" << endl;
				cin >> reset;//any input from the user starts the reset
				{
					system("CLS");//clears previous console and breaks to the end of the loop
					break;
				}
			case 2:
				cout << "Swiftly Sifting..." << endl;
				while (!inFile.eof()) {//while the loop moves from the start to the end of file
					getline(inFile, Tweets);
					if (Tweets.find("Politics") != Tweets.npos) {
						tweetcount++;
					}
					if (Tweets.find("politics") != Tweets.npos) {
						tweetcount++;
					}
					if (Tweets.find("Trump") != Tweets.npos) {
						tweetcount++;
					}
					if (Tweets.find("Vote") != Tweets.npos) {
						tweetcount++;
					}
					if (Tweets.find("Brexit") != Tweets.npos) {
						tweetcount++;
					}//all tweets with keywords relating to politics up a counter
				}
				cout << "There are " << tweetcount << " Tweets in the file that talk about Politics" << endl; //prints out total counter from the multiple tweet counters
				cout << "Press Any key to reset" << endl;
				cin >> reset;//any user input resets
				{
					system("CLS");//clears the console and breaks
					break;
				}

			case 3:
				cout << "Swiftly Sifting..." << endl;
				while (!inFile.eof()) {//while the loop moves to the start and end of the file
					getline(inFile, Tweets);
					if (Tweets.find("Money") != Tweets.npos) {
						tweetcount++;
					}
					if (Tweets.find("money") != Tweets.npos) {
						tweetcount++;
					}
					if (Tweets.find("cash") != Tweets.npos) {
						tweetcount++;
					}
					if (Tweets.find("Cash") != Tweets.npos) {
						tweetcount++;
					}
					if (Tweets.find("$") != Tweets.npos) {
						tweetcount++;
					}//all tweets with keywords relating to money up a counter
				}
				cout << "There are " << tweetcount << " Tweets in the file that talk about Money" << endl; //prints out total counter from the multiple tweet counters
				cout << "Press Any key to reset" << endl;
				cin >> reset;//any user input resets
				{
					system("CLS");
					break;//clears the console and breaks
				}
			//case 4 - 8 are keyword variable replacements
			case 4:
				keyword = "Paris";
				break;
			case 5:
				keyword = "DreamWorks";
				break;
			case 6:
				keyword = "Uber";
				break;
			case 7:
				keyword = "Dog";
				break;
			case 8:
				keyword = "@katyperry";
				break;
			case 9:
				cout << "Swiftly Sifting..." << endl;
				while (!inFile.eof()) {//similar system to total counter
					getline(inFile, Tweets);
					if (Tweets.find("@kendalljenner") != Tweets.npos) {//instead of searching through every tweet, only tweets with the chosen keyword counting
						tweetcount++;
					}
				}
				cout << "There are " << tweetcount << " Tweets in the file containing the phrase '@kendalljenner'" << endl;//displays the total number of tweets with the keyword
				cout << "Press Any key to reset" << endl;
				cin >> reset;//any input resets it
				{
					system("CLS");//clears the console, breaking from the loop
					break;
				}
			case 10:
				cout << "Swiftly Sifting..." << endl;
				while (!inFile.eof()) {
					getline(inFile, Tweets);
					if (Tweets.find("Music") != Tweets.npos) {
						tweetcount++;
					}
					if (Tweets.find("music") != Tweets.npos) {
						tweetcount++;//instead of searching through every tweet, only tweets with the chosen keywords counting
					}
				}
				cout << "There are " << tweetcount << " Tweets in the file containing the word 'Music' or 'music'" << endl;//prints tweets with these words
				cout << "Press Any key to reset" << endl;
				cin >> reset;//any key resets
				{
					system("CLS");//console clears and breaks
					break;
				}
			case 11:
				answered = true;//sets answered variable to true then breaks
				break;

			default:
				system("CLS"); //any other number input sets console to clear and reset
				break;
			}
			if (keyword != "notset") {//the following only happens if the keyword variable is not changed in case 4 - 8
				cout << "Print Tweets containing the word " << keyword << "? Press Y to continue or any other key to exit." << endl;//asks the user if they would like to show the tweets?
				cin >> yesno;
				if (yesno == 'Y' || yesno == 'y') {//if the user enters y to continue
					while (!inFile.eof()) {//whilst searching through the file
						getline(inFile, Tweets);
						if (Tweets.find(keyword) != Tweets.npos) {//if the getline finds a tweet containing the keyword
							cout << Tweets << endl;//the tweet is displayed
							cout << "  " << endl;

						}

					}

					cout << "Press Any Key to reset" << endl;
					cin >> reset;//any input after this clears the console 
					{
						system("CLS");
					}

				}
				else if (yesno != 'Y' || yesno != 'y') {//if the input is anything other than yes or no it clears the console to reset
					system("CLS");
				}
			}
		} while (!answered);//if case 11 has not been entered and the answered variable remains false, the loop continues
	
	system("pause");
	return 0;
}
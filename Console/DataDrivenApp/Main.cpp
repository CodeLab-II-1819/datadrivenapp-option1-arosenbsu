#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
	bool answered = false;
	vector<string> options = { "1. Total Number of Tweets", "2. Number of Tweets that talk about Politics", "3. Number of Tweets that talk aout Money", "4. Show Tweets containing the word 'Paris'", "5. Show Tweets containing the word 'DreamWorks'", "6. Show Tweets containing the word 'Uber'", "7. Show Tweets Containing the word 'Dog'", "8. Show Tweets that contain '@katyperry'", "9. Count Tweets that contain '@kendalljenner'",  "10. Count Tweets Containing the word 'Music' or 'music'" };

		do {
			int tweetcount = 0;
			int tweetnum = 0;
			char reset;
			char yesno;
			int Qchoice;
			string keyword = "notset";
			string Tweets;
			ifstream inFile;
			inFile.open("sampleTweets.csv");

			cout << "Welcome to SwiftSift!" << endl;
			cout << "Please enter the number of a Search option from 1 - 10" << endl;

			for (int i = 0; i < options.size(); i++) {
				cout << options[i] << endl;
			}

			cin >> Qchoice;
			if (cin.fail()) {
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				system("CLS");
			}


			switch (Qchoice) {
			case 1:
				cout << "Swiftly Sifting..." << endl;
				while (getline(inFile, Tweets)) {
					tweetnum++;
				}
				cout << "There are " << tweetnum << " Tweets in the file" << endl;
				cout << "Press Any key to reset" << endl;
				cin >> reset;
				{
					system("CLS");
					break;
				}
			case 2:
				cout << "Swiftly Sifting..." << endl;
				while (!inFile.eof()) {
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
					}
				}
				cout << "There are " << tweetcount << " Tweets in the file that talk about Politics" << endl;
				cout << "Press Any key to reset" << endl;
				cin >> reset;
				{
					system("CLS");
					break;
				}

			case 3:
				cout << "Swiftly Sifting..." << endl;
				while (!inFile.eof()) {
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
					}
				}
				cout << "There are " << tweetcount << " Tweets in the file that talk about Money" << endl;
				cout << "Press Any key to reset" << endl;
				cin >> reset;
				{
					system("CLS");
					break;
				}
			
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
				while (!inFile.eof()) {
					getline(inFile, Tweets);
					if (Tweets.find("@kendalljenner") != Tweets.npos) {
						tweetcount++;
					}
				}
				cout << "There are " << tweetcount << " Tweets in the file containing the phrase '@kendalljenner'" << endl;
				cout << "Press Any key to reset" << endl;
				cin >> reset;
				{
					system("CLS");
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
						tweetcount++;
					}
				}
				cout << "There are " << tweetcount << " Tweets in the file containing the word 'Music' or 'music'" << endl;
				cout << "Press Any key to reset" << endl;
				cin >> reset;
				{
					system("CLS");
					break;
				}
			default:
				system("CLS");
				break;
			}
			if (keyword != "notset") {
				cout << "Print Tweets containing the word " << keyword << "? Press Y to continue or any other key to exit." << endl;
				cin >> yesno;
				if (yesno == 'Y' || yesno == 'y') {
					while (!inFile.eof()) {
						getline(inFile, Tweets);
						if (Tweets.find(keyword) != Tweets.npos) {
							cout << Tweets << endl;
							cout << "  " << endl;

						}

					}

					cout << "Press Any Key to reset" << endl;
					cin >> reset;
					{
						system("CLS");
					}

				}
				else if (yesno != 'Y' || yesno != 'y') {
					system("CLS");
				}
			}
		} while (!answered);
	
	system("pause");
	return 0;
}
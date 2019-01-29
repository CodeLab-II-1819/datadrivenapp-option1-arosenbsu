#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
	bool answered = false;
	vector<string> options = { "1. Total Number of Tweets", "2. Number of Tweets that mention money", "3. Number of Tweets that mention politics", "4. Show Tweets containing the word 'Paris'", "5. Show Tweets containing the word 'DreamWorks'", "6. Show Tweets containing the word 'Uber'", "7. Show Tweets Containing the word 'Dog'", "8. Show Tweets that contain '@katyperry'", "9. Count Tweets that contain '@kendalljenner'",  "10. Count Tweets Containing the word 'Music'" };

		do {
			int tweetnum = 0;
			char reset;
			char yesno;
			bool correctQ = true;
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
				cout << "Loading..." << endl;
				while (getline(inFile, Tweets)) {
					tweetnum++;
				}
				cout << "There are " << tweetnum << " Tweets in the file" << endl; cout << "Press R to reset" << endl;
				cin >> reset;
				if (reset == 'R' || reset == 'r') {
					system("CLS");
					break;
				}
			case 2:
				
			case 3:
			
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

			case 10:

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

					cout << "Press R to reset" << endl;
					cin >> reset;
					if (reset == 'R' || reset == 'r') {
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
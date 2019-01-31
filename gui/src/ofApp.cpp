#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){//Sets up anything to be pre-loaded into the scene
	//Loads The logo png image
	logo.load("Images/Logo.png");
	//Loads the IndieFlow ttf font
	customfont.load("IndieFlower.ttf", 40);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){//draws images/text/shapes onto the scene

	//Sets two colours as variables
	ofColor colorOne(57, 42, 40);
	ofColor colorTwo(0, 0, 0);
	//Uses the colour variables to create background variable
	ofBackgroundGradient(colorOne, colorTwo, OF_GRADIENT_LINEAR);

	//Sets the width of the line
	ofSetLineWidth(6);
	//Draws 4 lines to create my outer border
	ofDrawLine(1910, 990, 1910, 10);
	ofDrawLine(1910, 10, 10, 10);
	ofDrawLine(10, 10, 10, 990);
	ofDrawLine(10, 990, 1910, 990);
	//Draws 4 lines to create my inner text box
	ofDrawLine(1860, 940, 1860, 250);
	ofDrawLine(1860, 250, 850, 250);
	ofDrawLine(850, 250, 850, 940);
	ofDrawLine(850, 940, 1860, 940);
	//Draws 4 lines to create my exit box
	ofDrawLine(1650, 100, 1800, 100);
	ofDrawLine(1800, 100, 1800, 165);
	ofDrawLine(1800, 165, 1650, 165);
	ofDrawLine(1650, 165, 1650, 100);

	//Draws logo at the left upper corner
	logo.draw(-450, -330);

	//Drawing tagline as a string with the custom font
	customfont.drawString("Choose an option to begin sifting.", 600, 150);
	//Drawing exit box text as a string with the custom font
	customfont.drawString("Exit", 1690, 150);
	//Drawing options as strings with the custom font
	customfont.drawString("1. Total number of Tweets", 40, 346);
	customfont.drawString("2. Count Tweets discussing Politics", 40, 412);
	customfont.drawString("3. Count Tweets discussing Money", 40, 478);
	customfont.drawString("4. Show Tweets with 'Paris' ", 40, 544);
	customfont.drawString("5. Show Tweets with 'DreamWorks' ", 40, 610);
	customfont.drawString("6. Show Tweets with 'Uber'", 40, 676);
	customfont.drawString("7.Show Tweets with 'Dog' ", 40, 742);
	customfont.drawString("8. Show Tweets @katyperry ", 40, 808);
	customfont.drawString("9. Count Tweets @kendalljenner", 40, 874);
	customfont.drawString("10. Count Tweets with Music", 40, 940);
	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

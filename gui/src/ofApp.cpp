#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	logo.load("Images/Logo.png");
	customfont.load("IndieFlower.ttf", 40);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofColor colorOne(57, 42, 40);
	ofColor colorTwo(0, 0, 0);

	ofBackgroundGradient(colorOne, colorTwo, OF_GRADIENT_LINEAR);

	ofSetLineWidth(6);
	ofDrawLine(1910, 990, 1910, 10);
	ofDrawLine(1910, 10, 10, 10);
	ofDrawLine(10, 10, 10, 990);
	ofDrawLine(10, 990, 1910, 990);

	ofDrawLine(1860, 940, 1860, 250);
	ofDrawLine(1860, 250, 700, 250);
	ofDrawLine(700, 250, 700, 940);
	ofDrawLine(700, 940, 1860, 940);

	logo.draw(-450, -330);

	customfont.drawString("Choose an option to begin sifting.", 740, 150);

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

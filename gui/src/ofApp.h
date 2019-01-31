#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
	public:
		void setup(); //function that lets me set up the scene
		void update(); //function which lets me edit the scene with each uodate
		void draw(); //function that lets me draw the things to the scene
		ofTrueTypeFont customfont; //creates a variable for a ttf file
		ofImage logo; //creates a variable for an image file
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};

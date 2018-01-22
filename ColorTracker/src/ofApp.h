#pragma once

#include "ofMain.h"
#include "ofxOpenCv.h"

#define HUE_MARGIN 15

static const int GRABBER_HEIGHT = 240*2.5;
static const int GRABBER_WIDTH = 320*2.5;

class ofApp : public ofBaseApp {

public:
	void setup();

	void update();

	void draw();

	void keyPressed(int key);

	void mousePressed(int x, int y, int button);

	ofVideoGrabber grabber;

	ofxCvColorImage rgbImage;
	ofxCvColorImage hsvImage;

	ofxCvGrayscaleImage hue;
	ofxCvGrayscaleImage saturation;
	ofxCvGrayscaleImage value;

	ofxCvGrayscaleImage filtered;

	ofxCvContourFinder contours;

	int selectedHue;

	bool showHSVComponents = true;
	bool showFilter = true;
	bool showContours = true;
	bool showVideo = true;
	bool drawShape = false; 
	bool drawCircles = true; 

};
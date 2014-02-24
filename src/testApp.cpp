#include "testApp.h"
#include "Cell.h"
#include "Math.h"


int cellCount = 1;
int factor = 1;
float alpha = 1;

vector<Cell> cells;

//--------------------------------------------------------------
void testApp::setup(){
	ofBackground(0, 0, 0);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    
	ofEnableAntiAliasing();
	ofEnableAlphaBlending();
	ofEnableSmoothing();
	ofSetLineWidth(1.50);

	ofSetColor((int)(cellCount)%125, (int)(cellCount)%215, (int)(cellCount)%55, (int)alpha%45+10);
	ofNoFill();
	ofSetCircleResolution(100);
	for (int i = 0; i < cellCount; i++){
		Cell ci((int)((1024 / 2) + (pow(-1.0f, i)*i*factor)), (int)((768 / 2) + (pow(-1.0f, i)*i*factor)));
		cells.push_back(ci);
		cells.at(i).update(factor);
	}
	cellCount++;
	alpha+=0.5;
	//long t = cells.size();
	//cout << t << endl;

	if (cellCount>1500)
		cells.erase(cells.begin());
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}

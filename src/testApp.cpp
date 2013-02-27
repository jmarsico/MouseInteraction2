#include "testApp.h"
#define NUM_CIRCLES 600

float circleX[NUM_CIRCLES];
float circleY[NUM_CIRCLES];
float circleRad[NUM_CIRCLES];
int circleR[NUM_CIRCLES];
int circleG[NUM_CIRCLES];
int circleB[NUM_CIRCLES];




//--------------------------------------------------------------
void testApp::setup(){
    ofSetFrameRate(24);
    
    for(int i=0; i<NUM_CIRCLES; i++)
    {
        circleR[i] = ofRandom(0, 255);
        circleG[i] = ofRandom(0, 255);
        circleB[i] = ofRandom(0, 255);
        circleX[i] = ofRandom(0, ofGetWidth());
        circleY[i] = ofRandom(0, ofGetHeight());
        circleRad[i] = ofRandom(10, 40);
    }

}

//--------------------------------------------------------------
void testApp::update(){
   
    for (int i=0; i < NUM_CIRCLES; i++) {
        circleX[i] += ofRandom(-1,1);
        circleY[i] += ofRandom(-1,1);
        circleRad[i] += ofRandom(-1,1);
    
        
    }
    
 
    

    
  

}

//--------------------------------------------------------------
void testApp::draw(){
    
    
    for (int i=0; i<NUM_CIRCLES; i++)
    {
        ofSetColor(circleR[i], circleG[i], circleB[i]);
        ofCircle(circleX[i], circleY[i], circleRad[i]);
    }
    

    
    


}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

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
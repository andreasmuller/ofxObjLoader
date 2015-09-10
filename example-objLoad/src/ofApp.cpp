#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetFrameRate(30);
    
    light.setDiffuseColor(ofFloatColor(1.0f, 1.0f, 1.0f));
    
//	ofxObjLoader::loadGroup("trees.obj", meshes, true);
    ofxObjLoader::loadModel("trees.obj", model, true);
//    ofxObjLoader::save("sphere_saved.obj", original);
//    ofxObjLoader::load("sphere_saved.obj", saved, false);

//    cout << " num vertices " << original.getNumVertices() << " " <<  saved.getNumVertices() <<  endl;
//    cout << " num texcords " << original.getNumTexCoords() << " " <<  saved.getNumTexCoords() << endl;
//    cout << " num normals " << original.getNumNormals() << " " <<  saved.getNumNormals() << endl;
//    cout << " num indices " << original.getNumIndices() << " " <<  saved.getNumIndices() << endl;

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw()
{
//	cam.setPosition(original.getCentroid() + ofVec3f(0,0,mouseY/10));
//    cam.lookAt(original.getCentroid(), ofVec3f(0,1,0));
    
    cam.begin();
    ofEnableDepthTest();
    ofEnableLighting();
    light.enable();
    
//    ofSetColor(255);
    model.draw();
    
    ofDisableLighting();
    ofDisableDepthTest();
    cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
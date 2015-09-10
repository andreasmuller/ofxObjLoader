//
//  ofxObjModel.h
//  example-objLoad
//
//  Created by Elias Zananiri on 2015-09-09.
//
//

#pragma once

#include "ofMain.h"

class ofxObjModel
{
public:
    void clear();
    void draw();
    
    map<string, ofMesh> meshes;
    vector<ofMaterial> materials;
    map<string, int> mappings;
};

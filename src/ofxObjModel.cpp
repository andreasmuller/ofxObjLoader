//
//  ofxObjModel.cpp
//  example-objLoad
//
//  Created by Elias Zananiri on 2015-09-09.
//
//

#include "ofxObjModel.h"

void ofxObjModel::clear()
{
    meshes.clear();
    materials.clear();
    mappings.clear();
}

void ofxObjModel::draw()
{    
    for (auto& it : meshes) {
        // Check if there's a matching material.
        int matIdx = -1;
        if (mappings.find(it.first) != mappings.end()) {
            matIdx = mappings[it.first];
        }
        
        if (matIdx >= 0) {
            glDisable(GL_COLOR_MATERIAL);
            materials[matIdx].begin();
        }
        
        it.second.draw();
        
        if (matIdx >= 0) {
            materials[matIdx].end();
            glEnable(GL_COLOR_MATERIAL);
        }
    }
}
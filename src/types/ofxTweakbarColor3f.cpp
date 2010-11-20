#include "ofxTweakbarColor3f.h"

ofxTweakbarColor3f::ofxTweakbarColor3f(
	 ofxTweakbar* pBar
	,const char* pName
	,void* pValue
)
	:ofxTweakbarType(pBar, pName, pValue) 
{
}

TwType ofxTweakbarColor3f::getType() {
	return TW_TYPE_COLOR3F;
}


float ofxTweakbarColor3f::getX() {
	return *static_cast<float*>(value);
}


float ofxTweakbarColor3f::getY() {
	float* p = static_cast<float*>(value);
	return p[1];
}

float ofxTweakbarColor3f::getZ() {
	float* p = static_cast<float*>(value);
	return p[2];
}

void ofxTweakbarColor3f::setValue(float fX, float fY, float fZ) {
	float* p = static_cast<float*>(value);
	p[0] = fX;
	p[1] = fY;
	p[2] = fZ;
}
#include "LabelParser.h"

string getStringFromLabel(int label)
{
    switch (label)
    {
    case LABEL_FACE_UP:   
        return "Face up";
    case LABEL_FACE_DOWN:   
        return "Face down";
    case LABEL_PORTRAIT: 
        return "Portrait";
    case LABEL_PORTRAIT_UPSIDE_DOWN:
        return "Portait upside down";
    case LABEL_LANDSCAPE_LEFT:
        return "Landscape left";
    case LABEL_LANDSCAPE_RIGHT:
        return "Landscape right";
    default:      
        return "UNKNOWN";
    }
	
}
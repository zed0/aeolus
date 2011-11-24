#ifndef AEOLUS_SCALE_H
#define AEOLUS_SCALE_H

#include "preprocessor.h"

using namespace cv;

class scale: public preprocessor
{
	public:
		scale(Mat &image_,float scaleValue);
		void run();
		void setScale(float scaleValue);
	private:
		float scaleValue;
};

#endif

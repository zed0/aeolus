#include "scale.h"

scale::scale(Mat& image_,float scaleValue):preprocessor(image_)
{
	this->scaleValue = scaleValue;
}

void scale::run()
{
	//scale the resolution of the image
	int width = image.rows*scaleValue;
	int height = image.cols*scaleValue;
	resize(image, image, Size(width,height), INTER_NEAREST);
}

void scale::setScale(float scaleValue)
{
	this->scaleValue = scaleValue;
}

#ifndef AEOLUS_PREPROCESSOR_H
#define AEOLUS_PREPROCESSOR_H

#include <cv.h>
#include <highgui.h>

using namespace cv;

class preprocessor
{
	public:
		preprocessor(Mat &input_);
		//Run the current preprocessing kernel
		virtual void run()=0;
	protected:
		Mat &image;
};

#endif

#ifndef AEOLUS_POSTPROCESSOR_H
#define AEOLUS_POSTPROCESSOR_H

#include <cv.h>

using namespace cv;

class postprocessor
{
	public:
		postprocessor(Mat &input_);
		//Run the current preprocessing kernel
		virtual void run(){};
		virtual void output(){};
	private:
		Mat input;
};

#endif

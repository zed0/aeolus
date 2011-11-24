#ifndef AEOLUS_PROCESSOR_H
#define AEOLUS_PROCESSOR_H

#include <cv.h>

using namespace cv;

class processor
{
	public:
		processor(Mat &image1_, Mat &image2_, Mat &output_);
		//Run the current preprocessing kernel
		virtual void run(){};
	private:
		Mat image1;
		Mat image2;
		Mat output;
};

#endif

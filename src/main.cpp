#include <iostream>
#include <queue>
#include <cv.h>
#include <highgui.h>

#include <scale.h>
#include <preprocessor.h>
#include <processor.h>
#include <postprocessor.h>

using std::queue;
using std::cout;
using std::endl;
using namespace cv;

int main ( int argc, char **argv )
{
	//create a queue of preprocesses to run
	queue<preprocessor*> preprocessQueue;

	//push some random stuff to it
	Mat image = imread("C:/Users/zed0/Pictures/fracview8.png");
	imshow( "Input image", image );

	preprocessQueue.push(new scale(image,0.1));

	//run our queue of preprocessing processes
	while(!preprocessQueue.empty())
	{
		preprocessQueue.front()->run();
		preprocessQueue.pop();
	}

	Mat results;
	processor* process;

	process = new processor(image, image, results);

	//run the correlation process
	process->run();

	//create a queue of postprocesses to run
	queue<postprocessor*> postprocessQueue;

	//push some stuff to it
	postprocessQueue.push(new postprocessor(results));

	//run the postprocessing processes
	while(!postprocessQueue.empty())
	{
		postprocessQueue.front()->run();
		postprocessQueue.pop();
	}

	imshow( "Output image", image );
	cvWaitKey();
}

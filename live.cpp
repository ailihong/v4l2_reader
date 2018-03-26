/*
 ============================================================================
 Name        : live.c
 Author      : LincolnHard
 Version     :
 Copyright   : free and open
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "video_capture.h"
#include <opencv2/highgui/highgui.hpp>

using namespace cv;

int main(void) {

    cv::Mat frame( IM_HEIGHT, IM_WIDTH, CV_8UC3 );
	init_video_capture();
    
	for(; ;){
		video_capture(frame.data);

		cv::imshow("camera",frame);
		
		if(cv::waitKey(20) == 'q'){
			break;
		}
	}
    free_video_capture();
	
	return EXIT_SUCCESS;
}

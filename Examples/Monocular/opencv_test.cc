#include <opencv2/opencv.hpp>
#include<opencv2/core/core.hpp>
 

using namespace cv;

using namespace std;

 

int main(int argc, const char * argv[])

{

    // Create a VideoCapture object to read from video file

    VideoCapture cap("/home/jiho/slam/ORB_SLAM3_test/DataSets/videos/test_1_0_5.mp4");

    

    //check if the file was opened properly

    if(!cap.isOpened())

    {

        cout << "Capture could not be opened succesfully" <<endl;

        return -1;

    }

    

    namedWindow("video");

    

    // Play the video in a loop till it ends

    while (char(waitKey(1)) != 'q' && cap.isOpened()) {

        Mat frame;

        cap >> frame;

        //Check if the video is over

        if(frame.empty())

        {

            cout<<"Video over"<<endl;

            break;

        }

        imshow("Video", frame);

    }

    

    return 0;

    

}
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

void rotateImage(double angle, Mat &image) {
	double width = image.size().width;
	double height = image.size().height;
	Point2d center = Point2d(width / 2, height / 2);
	Mat rot = getRotationMatrix2D(center, angle, 1.0);
	Rect2f bbox = RotatedRect(Point2f(), image.size(), angle).boundingRect2f();
	rot.at<double>(0, 2) += bbox.width / 2.0 - image.cols / 2.0;
	rot.at<double>(1, 2) += bbox.height / 2.0 - image.rows / 2.0;
	
	Mat rotated;
	warpAffine(image, rotated, rot, bbox.size());
	
	string window_name = "The Car !";
	namedWindow(window_name, WINDOW_NORMAL);
	imshow(window_name, rotated);
	waitKey(0);
	destroyWindow(window_name);
}

int main() {
	string source = "D:\\Study\\VS-VS Code\\OpenCV test\\Car2.jpg";
	Mat image = imread(source, IMREAD_UNCHANGED);
	
	if (image.empty()) {
		cout << endl << "  >> ERROR LOADING THE IMAGE !" << endl;
		return -1;
	}
	
	double angle;
	cout << endl << "  >> Enter the angle of rotation of image: ";
	cin >> angle;
	cout << endl << "  >> The image is being displayed..." << endl;
	
	rotateImage(angle, image);
	return 0;
}

<p>The primary documentation for OpenCV is the HTML documentation available at <a href="https://opencv.org">opencv.org</a>.</p>

<p>This documentation is divided into several major components:</p>

<ul>
    <li>Reference</li>
    <li>Tutorials</li>
    <li>Quick Start</li>
    <li>Cheat Sheet</li>
    <li>Wiki</li>
    <li>Q&A</li>
</ul>

<p>
The <b>Reference</b> is divided into several sections, each of which covers a module in the library.
Every function in the library is part of one module.
Here are the current modules:
</p>

<ul>
    <li><b>core</b></li><p>The “core” is the section of the library that contains all of the basic object types and their basic operations.</p>
    <li><b>imgproc</b></li><p>The image processing module contains basic transformations on images, including filters and similar convolutional operators.</p>
    <li><b>highgui</b></li><p>(split to imgcodecs, videoio, and highgui in OpenCV 3.0)This module contains user interface functions that can be used to display images or take simple user input. It can be thought of as a very lightweight window UI toolkit.</p>
    <li><b>video</b></li><p>The video library contains the functions you need to read and write video streams.</p>
    <li><b>calib3d</b></li><p>This module contains implementations of algorithms you will need to calibrate single cameras as well as stereo or multicamera arrays.</p>
    <li><b>features2d</b></li><p>This module contains algorithms for detecting, describing, and matching keypoint features.</p>
    <li><b>objdetect</b></li><p>This module contains algorithms for detecting specific objects, such as faces or pedestrians. You can train the detectors to detect other objects as well.</p>
    <li><b>ml</b></li><p>The Machine Learning library is actually an entire library in itself, and contains a wide array of machine learning algorithms implemented in such a way as to work with the natural data structures of OpenCV.</p>
    <li><b>flann</b></li><p>FLANN stands for “Fast Library for Approximate Nearest Neighbors.” This library contains methods you will not likely use directly, but which are used by other functions in other modules for doing nearest neighbor searches in large data sets.</p>
    <li><b>gpu</b></li><p>(split to multiple cuda* modules in OpenCV 3.0)The GPU library contains implementations of most of the rest of the library functions optimized for operation on CUDA GPUs.</p>
    <li><b>photo</b></li><p>This is a relatively new module that contains tools useful for computational photography.</p>
    <li><b>stitching</b></li><p>This entire module implements a sophisticated image stitching pipeline. This is new functionality in the library, but, like the photo module, it is an area where future growth is expected.</p>
    <li><b>nonfree</b></li><p>(moved to opencv_contrib/xfeatures2d in OpenCV 3.0)OpenCV contains some implementations of algorithms that are patented or otherwise burdened by usage restrictions (e.g., the SIFT algorithm). Those algorithms are segregated into their own module to indicate that you will need to do some kind of special work in order to use them in a commercial product.</p>
    <li><b>contrib</b></li><p>(melted into a few opencv_contrib modules in OpenCV 3.0)This module contains new things that have yet to be integrated into the whole of the library.</p>
</ul>

<p>Here are some of the modules available in the opencv_contrib repository:</p>

<ul>
    <li><b>Dnn</b></li><p>Deep neural networks</p>
    <li><b>face</b></li><p>Face recognition</p>
    <li><b>text</b></li><p>Text detection and recognition; may optionally use open source OCR Tesseract as backend</p>
    <li><b>rgbd</b></li><p>Processing RGB + depth maps, obtained with Kinect and other depth sensors</p>
    <li><b>bioinspired</b></li><p>Biologically inspired vision</p>
    <li><b>ximgproc, xphoto</b></li><p>Advanced image processing and computational photography algorithms</p>
    <li><b>tracking</b></li><p>Modern object-tracking algorithms</p>
</ul>

<p>Another documentation is on <a href="https://github.com/opencv/opencv/wiki">Github wiki</a></p>

<p>Starting from OpenCV 3.x, there is no offline documentation anymore.</p>

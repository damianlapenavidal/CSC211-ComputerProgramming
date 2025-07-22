#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

// this will throw an error if you don't have the bitmap library installed
// so be sure to do that before uncommenting this #include line
#include "bitmap_image.hpp"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <image_file.bmp>\n";
        return 1;
    }
    
    // get a string containing the image name
    // this is necessary because the bitmap_image
    // class expects a string as an argument
    std::string file_name(argv[1]);
    bitmap_image image(file_name);

    image.convert_to_grayscale();
    // TODO:
    // your implementation of problem #4 should be done in this
    // file. Feel free to create functions etc. if you feel that
    // it will help you.

    int width = image.width();
    int height = image.height();
    unsigned char r,g,b;
    double mean_grayscale = 0.0;

    std::vector<double> gray_value(width*height,0.0);

    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            
            image.get_pixel(x,y,r,g,b);
            gray_value[(y * width) + x] = r;
        }
     }
     double mean = std::accumulate(gray_value.begin(), gray_value.end(), 0.0) / gray_value.size();

     for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            double pixelgray = gray_value[(y*width) + x];
            if (pixelgray > mean) {
                image.set_pixel(x,y,0,0,0);
            } else {
                image.set_pixel(x,y,255,255,255);
            }
        }
     }
     image.save_image("binarized-image.bmp");
    return 0;
}
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

// this will throw an error if you don't have the bitmap library installed
// so be sure to do that before uncommenting this #include line
#include "bitmap_image.hpp"

int main(int argc, char *argv[]) {

    // Check if the correct number of arguments are passed
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <input_image> <output_image>" << std::endl;
        return 1; // Return an error code if the arguments are incorrect
    }
    
    // get a string containing the image name
    // this is necessary because the bitmap_image
    // class expects a string as an argument
    std::string file_name(argv[1]);
    std::string output_name(argv[2]);

    bitmap_image image(file_name);
    image.convert_to_grayscale();


    unsigned int width = image.width();
    unsigned int height = image.height();

    // Calculate the mean grayscale value of the image
    unsigned int total_gray_value = 0;
    unsigned int pixel_count = image.pixel_count();

    for (unsigned int y = 0; y < height; ++y) {
        for (unsigned int x = 0; x < width; ++x) {
            // Get RGB values of the pixel
            unsigned char r = image.red_channel(x, y);
            unsigned char g = image.green_channel(x, y);
            unsigned char b = image.blue_channel(x, y);

            // Calculate the grayscale value using the weighted sum
            unsigned char gray_value = 0.299 * r + 0.587 * g + 0.114 * b;

            // Add the grayscale value to the total sum
            total_gray_value += gray_value;
        }
    }

    unsigned int threshold = total_gray_value / pixel_count;
    
    for (unsigned int y = 0; y < height; ++y) {
        for (unsigned int x = 0; x < width; ++x) {

            unsigned char r = image.red_channel(x, y);
            unsigned char g = image.green_channel(x, y);
            unsigned char b = image.blue_channel(x, y);

            unsigned char gray_value = 0.299 * r + 0.587 * g + 0.114 * b;

            if (gray_value >= threshold) {
                image.set_pixel(x, y, 255, 255, 255); // White
            } else {
                image.set_pixel(x, y, 0, 0, 0); // Black
            }
        }
    }

    image.save_image(output_name);
    return 0;
}
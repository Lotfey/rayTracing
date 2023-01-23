#include"color.h"
#include"vec3.h"

int main()
{
	// Reproduce the same rendered image as test1.cpp.
	// But tis time I imployed the class vec3 and its aliase color
	// image 
	const int image_width = 256;
	const int image_hieght = 256;

	// Render
	std::cout << "P3\n " << image_width << " " << image_hieght << "\n255\n";

	for (int j = image_hieght - 1; j >= 0; --j)
	{
		std::cerr << "\rScanlines remaining: " << j << " " << std::flush;
	
		for (int i = 0; i < image_width; i++)
		{
			color pixel_color(double(i) / (image_width - 1), double(j) / (image_hieght - 1), 0.25f);
			write_color(std::cout, pixel_color);
		}
	}

	std::cerr << "\nDone.\n";
}
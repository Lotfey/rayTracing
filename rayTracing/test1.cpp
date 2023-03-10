
//PPM Example

#include<iostream>

int main()
{
	// image
	const int image_width = 256;
	const int image_hieght = 256;

	// render
	std::cout << "P3\n " << image_width << " " << image_hieght << "\n255\n";

	for (int j = image_hieght - 1; j >= 0; --j)
	{
		std::cerr << "\rScanlines remaining: " << j << " " << std::flush;
		for (int i = 0; i < image_width; ++i)
		{
			auto r = double(i) / (image_width - 1);
			auto g = double(j) / (image_hieght - 1);
			auto b = 0.25f;

			int ir = static_cast<int>(255.999 * r);
			int ig = static_cast<int>(255.999 * g);
			int ib = static_cast<int>(255.999 * b);

			std::cout << ir << " " << ig << " " << ib << "\n";
		}
	}
	std::cerr << "\nDone.\n";
}
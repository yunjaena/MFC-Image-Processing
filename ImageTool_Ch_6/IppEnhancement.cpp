#include "stdafx.h"
#include "IppEnhance.h"

void IppInverse(IppByteImage& img)
{
	int size = img.GetSize();
	BYTE* p = img.GetPixels();

	for (int i = 0; i < size; i++)
	{
		p[i] = 255 - p[i];
	}
}

void IppInverse(IppRgbImage& img)
{
	int size = img.GetSize();
	RGBBYTE* p = img.GetPixels();

	for (int i = 0; i < size; i++)
	{
		p[i].r = 255 - p[i].r;
		p[i].g = 255 - p[i].g;
		p[i].b = 255 - p[i].b;
	}
}


void IppBrightenss(IppByteImage& img, int n) {
	int size = img.GetSize();
	BYTE
		*p = img.GetPixels();

	for (int i = 0; i < size; i++)
	{
		p[i] = limit(p[i] + n);
	}
}

void IppContrast(IppByteImage & img, int n) {
	int size = img.GetSize();
	BYTE * p = img.GetPixels();

	for (int i = 0; i < size; i++) {
		p[i] = static_cast<BYTE>(limit(p[i] + (p[i] - 128)*n / 100));
	}
}
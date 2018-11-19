#pragma once

#include ".\IppImage\IppImage.h"

void IppInverse(IppByteImage& img);

void IppInverse(IppRgbImage& img);

void IppBrightenss(IppByteImage& img, int n);

void IppContrast(IppByteImage & img, int n);
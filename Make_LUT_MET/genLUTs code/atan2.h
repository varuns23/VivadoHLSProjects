#ifndef atan2LUTs_h
#define atan2LUTs_h
#include <stdint.h>
// ATAN2 LUT
static const float atan2LUT[21][21] = {
{-  135,-138.013,-141.34,-145.008,-149.036,-153.435,-158.199,-163.301,-168.69,-174.289,   180,174.289,168.69,163.301,158.199,153.435,149.036,145.008,141.34,138.013,   135},
{-131.987,-  135,-138.366,-142.125,-146.31,-150.945,-156.038,-161.565,-167.471,-173.66,   180,173.66,167.471,161.565,156.038,150.945,146.31,142.125,138.366,   135,131.987},
{-128.66,-131.634,-  135,-138.814,-143.13,-147.995,-153.435,-159.444,-165.964,-172.875,   180,172.875,165.964,159.444,153.435,147.995,143.13,138.814,   135,131.634,128.66},
{-124.992,-127.875,-131.186,-  135,-139.399,-144.462,-150.255,-156.801,-164.055,-171.87,   180,171.87,164.055,156.801,150.255,144.462,139.399,   135,131.186,127.875,124.992},
{-120.964,-123.69,-126.87,-130.601,-  135,-140.194,-146.31,-153.435,-161.565,-170.538,   180,170.538,161.565,153.435,146.31,140.194,   135,130.601,126.87,123.69,120.964},
{-116.565,-119.055,-122.005,-125.538,-129.806,-  135,-141.34,-149.036,-158.199,-168.69,   180,168.69,158.199,149.036,141.34,   135,129.806,125.538,122.005,119.055,116.565},
{-111.801,-113.962,-116.565,-119.745,-123.69,-128.66,-  135,-143.13,-153.435,-165.964,   180,165.964,153.435,143.13,   135,128.66,123.69,119.745,116.565,113.962,111.801},
{-106.699,-108.435,-110.556,-113.199,-116.565,-120.964,-126.87,-  135,-146.31,-161.565,   180,161.565,146.31,   135,126.87,120.964,116.565,113.199,110.556,108.435,106.699},
{-101.31,-102.529,-104.036,-105.945,-108.435,-111.801,-116.565,-123.69,-  135,-153.435,   180,153.435,   135,123.69,116.565,111.801,108.435,105.945,104.036,102.529,101.31},
{-95.7106,-96.3402,-97.125,-98.1301,-99.4623,-101.31,-104.036,-108.435,-116.565,-  135,   180,   135,116.565,108.435,104.036,101.31,99.4623,98.1301,97.125,96.3402,95.7106},
{-   90,-   90,-   90,-   90,-   90,-   90,-   90,-   90,-   90,-   90,     0,    90,    90,    90,    90,    90,    90,    90,    90,    90,    90},
{-84.2894,-83.6598,-82.875,-81.8699,-80.5377,-78.6901,-75.9638,-71.565,-63.435,-   45,     0,    45,63.435,71.565,75.9638,78.6901,80.5377,81.8699,82.875,83.6598,84.2894},
{-78.6901,-77.4712,-75.9638,-74.0546,-71.565,-68.1986,-63.435,-56.3099,-   45,-26.5651,     0,26.5651,    45,56.3099,63.435,68.1986,71.565,74.0546,75.9638,77.4712,78.6901},
{-73.3008,-71.565,-69.444,-66.8014,-63.435,-59.0362,-53.1301,-   45,-33.6901,-18.4349,     0,18.4349,33.6901,    45,53.1301,59.0362,63.435,66.8014,69.444,71.565,73.3008},
{-68.1986,-66.0375,-63.435,-60.2551,-56.3099,-51.3402,-   45,-36.8699,-26.5651,-14.0362,     0,14.0362,26.5651,36.8699,    45,51.3402,56.3099,60.2551,63.435,66.0375,68.1986},
{-63.435,-60.9454,-57.9946,-54.4623,-50.1944,-   45,-38.6598,-30.9638,-21.8014,-11.3099,     0,11.3099,21.8014,30.9638,38.6598,    45,50.1944,54.4623,57.9946,60.9454,63.435},
{-59.0362,-56.3099,-53.1301,-49.3987,-   45,-39.8056,-33.6901,-26.5651,-18.4349,-9.46232,     0,9.46232,18.4349,26.5651,33.6901,39.8056,    45,49.3987,53.1301,56.3099,59.0362},
{-55.008,-52.125,-48.8141,-   45,-40.6013,-35.5377,-29.7449,-23.1986,-15.9454,-8.1301,     0,8.1301,15.9454,23.1986,29.7449,35.5377,40.6013,    45,48.8141,52.125,55.008},
{-51.3402,-48.3665,-   45,-41.1859,-36.8699,-32.0054,-26.5651,-20.556,-14.0362,-7.12502,     0,7.12502,14.0362,20.556,26.5651,32.0054,36.8699,41.1859,    45,48.3665,51.3402},
{-48.0128,-   45,-41.6335,-37.875,-33.6901,-29.0546,-23.9625,-18.4349,-12.5288,-6.34019,     0,6.34019,12.5288,18.4349,23.9625,29.0546,33.6901,37.875,41.6335,    45,48.0128},
{-   45,-41.9872,-38.6598,-34.992,-30.9638,-26.5651,-21.8014,-16.6992,-11.3099,-5.71059,     0,5.71059,11.3099,16.6992,21.8014,26.5651,30.9638,34.992,38.6598,41.9872,    45}
};
#endif

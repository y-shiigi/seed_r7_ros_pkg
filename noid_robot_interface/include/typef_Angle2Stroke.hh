/*
 * This file auto-generated from script. Do not Edit!
 * Original : aero_startup/.templates/aero_hardware_interface/Angle2Stroke.hh
 * Original : aero_description/{my_robot}/headers/Angle2Stroke.hh
*/
#ifndef AERO_TYPEF_ANGLE_TO_STROKE_H_
#define AERO_TYPEF_ANGLE_TO_STROKE_H_

#include <vector>
#include <algorithm>
#include <stdint.h>
#include <math.h> // for M_PI

namespace noid
{
  namespace typef
  {

    struct dualJoint
    {
      float one;
      float two;
    };
    static const std::vector<std::pair<float, float>> LegTableMap = {{0, 0},{.655, 0.655},{1.322, 0.667},{2, 0.678},{2.688, 0.688},{3.386, 0.698},{4.092, 0.706},{4.807, 0.715},{5.529, 0.722},{6.258, 0.729},{6.994, 0.736},{7.737, 0.743},{8.484, 0.747},{9.237, 0.753},{9.995, 0.758},{10.756, 0.761},{11.522, 0.766},{12.291, 0.769},{13.063, 0.772},{13.838, 0.775},{14.615, 0.777},{15.394, 0.779},{16.175, 0.781},{16.958, 0.783},{17.741, 0.783},{18.526, 0.785},{19.311, 0.785},{20.096, 0.785},{20.881, 0.785},{21.667, 0.786},{22.451, 0.784},{23.236, 0.785},{24.019, 0.783},{24.801, 0.782},{25.583, 0.782},{26.362, 0.779},{27.141, 0.779},{27.917, 0.776},{28.691, 0.774},{29.464, 0.773},{30.234, 0.77},{31.001, 0.767},{31.767, 0.766},{32.529, 0.762},{33.288, 0.759},{34.045, 0.757},{34.798, 0.753},{35.548, 0.75},{36.294, 0.746},{37.037, 0.743},{37.776, 0.739},{38.512, 0.736},{39.243, 0.731},{39.97, 0.727},{40.694, 0.724},{41.413, 0.719},{42.127, 0.714},{42.838, 0.711},{43.543, 0.705},{44.244, 0.701},{44.94, 0.696},{45.632, 0.692},{46.318, 0.686},{46.999, 0.681},{47.676, 0.677},{48.347, 0.671},{49.012, 0.665},{49.672, 0.66},{50.327, 0.655},{50.976, 0.649},{51.62, 0.644},{52.258, 0.638},{52.89, 0.632},{53.516, 0.626},{54.136, 0.62},{54.75, 0.614},{55.358, 0.608},{55.96, 0.602},{56.556, 0.596},{57.145, 0.589},{57.729, 0.584},{58.305, 0.576},{58.875, 0.57},{59.439, 0.564},{59.996, 0.557},{60.546, 0.55},{61.09, 0.544},{61.626, 0.536},{62.156, 0.53},{62.679, 0.523},{63.195, 0.516}};
    static const int ArrayLegTableOffset = 0;
    static const std::vector<std::pair<float, float>> NeckRollPitchTableMap2 = {{-3.124,0}, {-2.985,0.139}, {-2.843,0.142}, {-2.699,0.144}, {-2.553,0.146}, {-2.405,0.148}, {-2.255,0.15}, {-2.103,0.152}, {-1.950,0.153}, {-1.795,0.155}, {-1.638,0.157}, {-1.480,0.158}, {-1.321,0.159}, {-1.160,0.161}, {-.997,0.163}, {-.834,0.163}, {-.669,0.165}, {-.503,0.166}, {-.337,0.166}, {-.169,0.168}, {0,0.169}, {.169,0.169}, {.340,0.171}, {.510,0.17}, {.682,0.172}, {.854,0.172}, {1.027,0.173}, {1.200,0.173}, {1.373,0.173}, {1.547,0.174}, {1.721,0.174}, {1.895,0.174}, {2.070,0.175}, {2.244,0.174}, {2.418,0.174}, {2.593,0.175}, {2.767,0.174}, {2.941,0.174}, {3.115,0.174}, {3.289,0.174}, {3.463,0.174}, {3.636,0.173}, {3.809,0.173}, {3.981,0.172}, {4.153,0.172}, {4.325,0.172}, {4.496,0.171}, {4.666,0.17}, {4.836,0.17}, {5.005,0.169}, {5.173,0.168}, {5.340,0.167}, {5.507,0.167}, {5.673,0.166}, {5.839,0.166}, {6.003,0.164}, {6.166,0.163}, {6.329,0.163}, {6.490,0.161}, {6.651,0.161}, {6.810,0.159}, {6.969,0.159}, {7.126,0.157}, {7.283,0.157}, {7.438,0.155}, {7.592,0.154}, {7.745,0.153}, {7.897,0.152}, {8.047,0.15}, {8.197,0.15}, {8.345,0.148}, {8.492,0.147}, {8.637,0.145}, {8.782,0.145}, {8.925,0.143}, {9.066,0.141}, {9.206,0.14}, {9.345,0.139}, {9.483,0.138}, {9.619,0.136}, {9.754,0.135}};
    static const std::vector<std::pair<float, float>> NeckRollPitchTableMap1 = {{-7.38,0}, {-7.038,0.342}, {-6.692,0.346}, {-6.342,0.35}, {-5.989,0.353}, {-5.631,0.358}, {-5.271,0.36}, {-4.908,0.363}, {-4.542,0.366}, {-4.173,0.369}, {-3.802,0.371}, {-3.429,0.373}, {-3.053,0.376}, {-2.676,0.377}, {-2.298,0.378}, {-1.917,0.381}, {-1.536,0.381}, {-1.153,0.383}, {-.77,0.383}, {-.385,0.385}, {0,0.385}, {.385,0.385}, {.772,0.387}, {1.158,0.386}, {1.545,0.387}, {1.931,0.386}, {2.318,0.387}, {2.704,0.386}, {3.09,0.386}, {3.476,0.386}, {3.861,0.385}, {4.246,0.385}, {4.629,0.383}, {5.012,0.383}, {5.395,0.383}, {5.776,0.381}, {6.156,0.38}, {6.535,0.379}, {6.913,0.378}, {7.289,0.376}, {7.664,0.375}};
    static const int ArrayNeckRollPitchTableOffset2 = -20;
    static const int ArrayNeckRollPitchTableOffset1 = -20;
    static const std::vector<std::pair<float, float>> WaistRollPitchTableMap2 = {{-5.23,0}, {-4.721,0.509}, {-4.191,0.53}, {-3.642,0.549}, {-3.074,0.568}, {-2.489,0.585}, {-1.889,0.6}, {-1.273,0.616}, {-.643,0.63}, {0,0.643}, {.656,0.656}, {1.323,0.667}, {2.00,0.677}, {2.688,0.688}, {3.386,0.698}, {4.092,0.706}, {4.806,0.714}, {5.528,0.722}, {6.257,0.729}, {6.993,0.736}, {7.735,0.742}, {8.483,0.748}, {9.236,0.753}, {9.994,0.758}, {10.756,0.762}, {11.522,0.766}, {12.293,0.771}, {13.067,0.774}, {13.843,0.776}, {14.623,0.78}, {15.406,0.783}, {16.19,0.784}, {16.977,0.787}, {17.766,0.789}, {18.556,0.79}, {19.347,0.791}, {20.14,0.793}, {20.933,0.793}, {21.727,0.794}, {22.522,0.795}, {23.317,0.795}, {24.113,0.796}, {24.908,0.795}, {25.703,0.795}, {26.497,0.794}, {27.292,0.795}, {28.085,0.793}, {28.877,0.792}, {29.668,0.791}};
    static const std::vector<std::pair<float, float>> WaistRollPitchTableMap1 = {{-5.605,0}, {-4.959,0.646}, {-4.293,0.666}, {-3.611,0.682}, {-2.913,0.698}, {-2.202,0.711}, {-1.479,0.723}, {-.744,0.735}, {0,0.744}, {.754,0.754}, {1.517,0.763}, {2.288,0.771}, {3.067,0.779}, {3.853,0.786}, {4.646,0.793}, {5.446,0.8}, {6.253,0.807}};
    static const int ArrayWaistRollPitchTableOffset2 = -9;
    static const int ArrayWaistRollPitchTableOffset1 = -8;
    static const std::vector<std::pair<float, float>> WristRollPitchTableMap2 = {{3.359,0}, {3.271,-0.088}, {3.182,-0.089}, {3.090,-0.092}, {2.997,-0.093}, {2.903,-0.094}, {2.806,-0.097}, {2.708,-0.098}, {2.608,-0.1}, {2.506,-0.102}, {2.403,-0.103}, {2.298,-0.105}, {2.191,-0.107}, {2.083,-0.108}, {1.973,-0.11}, {1.861,-0.112}, {1.748,-0.113}, {1.633,-0.115}, {1.516,-0.117}, {1.398,-0.118}, {1.279,-0.119}, {1.157,-0.122}, {1.035,-0.122}, {.911,-0.124}, {.785,-0.126}, {.658,-0.127}, {.529,-0.129}, {.399,-0.13}, {.267,-0.132}, {.134,-0.133}, {0,-0.134}, {-.136,-0.136}, {-.273,-0.137}, {-.412,-0.139}, {-.552,-0.14}, {-.693,-0.141}, {-.836,-0.143}, {-.979,-0.143}, {-1.125,-0.146}, {-1.271,-0.146}, {-1.419,-0.148}, {-1.568,-0.149}, {-1.718,-0.15}, {-1.869,-0.151}, {-2.022,-0.153}, {-2.176,-0.154}, {-2.331,-0.155}, {-2.487,-0.156}, {-2.644,-0.157}, {-2.802,-0.158}, {-2.961,-0.159}, {-3.121,-0.16}, {-3.282,-0.161}, {-3.444,-0.162}, {-3.607,-0.163}, {-3.771,-0.164}, {-3.936,-0.165}, {-4.102,-0.166}, {-4.268,-0.166}, {-4.435,-0.167}, {-4.603,-0.168}, {-4.772,-0.169}, {-4.942,-0.17}, {-5.112,-0.17}, {-5.282,-0.17}, {-5.453,-0.171}, {-5.625,-0.172}, {-5.797,-0.172}, {-5.970,-0.173}, {-6.143,-0.173}, {-6.316,-0.173}, {-6.490,-0.174}, {-6.664,-0.174}, {-6.838,-0.174}, {-7.012,-0.174}, {-7.186,-0.174}, {-7.361,-0.175}, {-7.535,-0.174}, {-7.710,-0.175}, {-7.884,-0.174}, {-8.058,-0.174}, {-8.232,-0.174}, {-8.405,-0.173}, {-8.579,-0.174}, {-8.751,-0.172}, {-8.924,-0.173}, {-9.096,-0.172}, {-9.267,-0.171}, {-9.438,-0.171}, {-9.607,-0.169}, {-9.777,-0.17}, {-9.945,-0.168}, {-10.112,-0.167}, {-10.279,-0.167}, {-10.444,-0.165}, {-10.608,-0.164}, {-10.771,-0.163}, {-10.933,-0.162}, {-11.093,-0.16}, {-11.252,-0.159}, {-11.410,-0.158}, {-11.566,-0.156}, {-11.720,-0.154}, {-11.873,-0.153}, {-12.024,-0.151}, {-12.173,-0.149}, {-12.320,-0.147}, {-12.465,-0.145}, {-12.608,-0.143}, {-12.749,-0.141}, {-12.888,-0.139}, {-13.025,-0.137}, {-13.159,-0.134}, {-13.291,-0.132}, {-13.421,-0.13}, {-13.548,-0.127}, {-13.673,-0.125}, {-13.795,-0.122}, {-13.914,-0.119}, {-14.030,-0.116}, {-14.144,-0.114}};
    static const std::vector<std::pair<float, float>> WristRollPitchTableMap1 = {{-1.723,0}, {-1.580,0.143}, {-1.430,0.15}, {-1.273,0.157}, {-1.110,0.163}, {-.940,0.17}, {-.763,0.177}, {-.581,0.182}, {-.393,0.188}, {-.199,0.194}, {0,0.199}, {.391,0.391}, {.779,0.388}, {1.163,0.384}, {1.545,0.382}, {1.923,0.378}, {2.299,0.376}, {2.673,0.374}, {3.045,0.372}, {3.415,0.37}, {3.783,0.368}};
    static const int ArrayWristRollPitchTableOffset2 = -30;
    static const int ArrayWristRollPitchTableOffset1 = -10;
    static const std::vector<std::pair<float, float>> ElbowPitchTableMap = {{-42.426, 0},{-42.165, 0.261},{-41.901, 0.264},{-41.633, 0.268},{-41.363, 0.27},{-41.089, 0.274},{-40.813, 0.276},{-40.534, 0.279},{-40.252, 0.282},{-39.968, 0.284},{-39.682, 0.286},{-39.394, 0.288},{-39.104, 0.29},{-38.811, 0.293},{-38.518, 0.293},{-38.222, 0.296},{-37.926, 0.296},{-37.627, 0.299},{-37.328, 0.299},{-37.027, 0.301},{-36.726, 0.301},{-36.423, 0.303},{-36.119, 0.304},{-35.815, 0.304},{-35.510, 0.305},{-35.204, 0.306},{-34.898, 0.306},{-34.591, 0.307},{-34.284, 0.307},{-33.976, 0.308},{-33.668, 0.308},{-33.360, 0.308},{-33.052, 0.308},{-32.744, 0.308},{-32.436, 0.308},{-32.128, 0.308},{-31.820, 0.308},{-31.512, 0.308},{-31.204, 0.308},{-30.897, 0.307},{-30.590, 0.307},{-30.283, 0.307},{-29.977, 0.306},{-29.671, 0.306},{-29.366, 0.305},{-29.061, 0.305},{-28.757, 0.304},{-28.454, 0.303},{-28.151, 0.303},{-27.849, 0.302},{-27.547, 0.302},{-27.247, 0.3},{-26.947, 0.3},{-26.648, 0.299},{-26.350, 0.298},{-26.053, 0.297},{-25.756, 0.297},{-25.461, 0.295},{-25.167, 0.294},{-24.874, 0.293},{-24.581, 0.293},{-24.290, 0.291},{-24.000, 0.29},{-23.711, 0.289},{-23.423, 0.288},{-23.136, 0.287},{-22.851, 0.285},{-22.566, 0.285},{-22.283, 0.283},{-22.001, 0.282},{-21.721, 0.28},{-21.441, 0.28},{-21.163, 0.278},{-20.886, 0.277},{-20.611, 0.275},{-20.336, 0.275},{-20.063, 0.273},{-19.792, 0.271},{-19.522, 0.27},{-19.253, 0.269},{-18.986, 0.267},{-18.720, 0.266},{-18.455, 0.265},{-18.192, 0.263},{-17.930, 0.262},{-17.670, 0.26},{-17.411, 0.259},{-17.154, 0.257},{-16.898, 0.256},{-16.643, 0.255},{-16.391, 0.252},{-16.139, 0.252},{-15.889, 0.25},{-15.641, 0.248},{-15.394, 0.247},{-15.148, 0.246},{-14.904, 0.244},{-14.662, 0.242},{-14.421, 0.241},{-14.182, 0.239},{-13.944, 0.238},{-13.708, 0.236},{-13.473, 0.235},{-13.240, 0.233},{-13.009, 0.231},{-12.779, 0.23},{-12.550, 0.229},{-12.323, 0.227},{-12.098, 0.225},{-11.874, 0.224},{-11.652, 0.222},{-11.431, 0.221},{-11.212, 0.219},{-10.995, 0.217},{-10.779, 0.216},{-10.564, 0.215},{-10.352, 0.212},{-10.140, 0.212},{-9.931, 0.209},{-9.723, 0.208},{-9.516, 0.207},{-9.311, 0.205},{-9.108, 0.203},{-8.906, 0.202},{-8.706, 0.2},{-8.507, 0.199},{-8.310, 0.197},{-8.115, 0.195},{-7.921, 0.194},{-7.728, 0.193},{-7.538, 0.19},{-7.348, 0.19},{-7.161, 0.187},{-6.975, 0.186},{-6.790, 0.185},{-6.607, 0.183},{-6.426, 0.181},{-6.246, 0.18},{-6.068, 0.178},{-5.891, 0.177},{-5.716, 0.175},{-5.543, 0.173},{-5.371, 0.172},{-5.200, 0.171},{-5.031, 0.169},{-4.864, 0.167},{-4.698, 0.166},{-4.534, 0.164},{-4.371, 0.163},{-4.210, 0.161},{-4.051, 0.159},{-3.893, 0.158},{-3.736, 0.157},{-3.581, 0.155},{-3.428, 0.153},{-3.276, 0.152},{-3.126, 0.15},{-2.978, 0.148},{-2.831, 0.147},{-2.685, 0.146},{-2.541, 0.144},{-2.399, 0.142},{-2.258, 0.141},{-2.119, 0.139},{-1.981, 0.138},{-1.845, 0.136},{-1.711, 0.134},{-1.578, 0.133},{-1.447, 0.131},{-1.317, 0.13},{-1.189, 0.128},{-1.063, 0.126},{-.938, 0.125},{-.815, 0.123},{-.693, 0.122},{-.574, 0.119},{-.456, 0.118},{-.339, 0.117},{-.224, 0.115},{-.111, 0.113},{0, 0.111}};
    static const int ArrayElbowPitchTableOffset = 0;
    static const std::vector<std::pair<float, float>> ShoulderRollTableMap = {{0, 0},{.465, 0.465},{.94, 0.475},{1.422, 0.482},{1.913, 0.491},{2.411, 0.498},{2.917, 0.506},{3.429, 0.512},{3.949, 0.52},{4.475, 0.526},{5.007, 0.532},{5.546, 0.539},{6.09, 0.544},{6.64, 0.55},{7.194, 0.554},{7.754, 0.56},{8.319, 0.565},{8.888, 0.569},{9.462, 0.574},{10.039, 0.577},{10.62, 0.581},{11.205, 0.585},{11.793, 0.588},{12.384, 0.591},{12.978, 0.594},{13.574, 0.596},{14.173, 0.599},{14.774, 0.601},{15.377, 0.603},{15.981, 0.604},{16.587, 0.606},{17.195, 0.608},{17.803, 0.608},{18.412, 0.609},{19.022, 0.61},{19.633, 0.611},{20.244, 0.611},{20.855, 0.611},{21.465, 0.61},{22.076, 0.611},{22.686, 0.61},{23.295, 0.609},{23.904, 0.609},{24.512, 0.608},{25.118, 0.606},{25.723, 0.605},{26.327, 0.604},{26.929, 0.602},{27.53, 0.601},{28.128, 0.598},{28.724, 0.596},{29.319, 0.595},{29.91, 0.591},{30.499, 0.589},{31.086, 0.587},{31.67, 0.584},{32.251, 0.581},{32.828, 0.577},{33.403, 0.575},{33.974, 0.571},{34.542, 0.568},{35.106, 0.564},{35.666, 0.56},{36.223, 0.557},{36.775, 0.552},{37.324, 0.549},{37.87, 0.546},{38.408, 0.538},{38.944, 0.536},{39.475, 0.531},{40.001, 0.526},{40.523, 0.522},{41.04, 0.517},{41.552, 0.512},{42.059, 0.507},{42.561, 0.502},{43.058, 0.497},{43.549, 0.491},{44.035, 0.486},{44.516, 0.481},{44.991, 0.475},{45.46, 0.469},{45.924, 0.464},{46.381, 0.457},{46.833, 0.452},{47.279, 0.446},{47.719, 0.44},{48.153, 0.434},{48.58, 0.427},{49.001, 0.421},{49.416, 0.415}};
    static const int ArrayShoulderRollTableOffset = 0;
    static const std::vector<std::pair<float, float>> ShoulderPitchTableMap = {{10.635, 0},{10.392, -0.243},{10.122, -0.27},{9.824, -0.298},{9.497, -0.327},{9.141, -0.356},{8.754, -0.387},{8.334, -0.42},{7.882, -0.452},{7.398, -0.484},{6.879, -0.519},{6.328, -0.551},{5.742, -0.586},{5.125, -0.617},{4.475, -0.65},{3.795, -0.68},{3.086, -0.709},{2.305, -0.781},{1.588, -0.717},{.804, -0.784},{0, -0.804},{-.821, -0.821},{-1.656, -0.835},{-2.502, -0.846},{-3.357, -0.855},{-4.217, -0.86},{-5.079, -0.862},{-5.941, -0.862},{-6.801, -0.86},{-7.655, -0.854},{-8.502, -0.847},{-9.339, -0.837},{-10.166, -0.827},{-10.981, -0.815},{-11.783, -0.802},{-12.570, -0.787},{-13.341, -0.771},{-14.098, -0.757},{-14.838, -0.74},{-15.561, -0.723},{-16.268, -0.707},{-16.959, -0.691},{-17.632, -0.673},{-18.289, -0.657},{-18.931, -0.642},{-19.556, -0.625},{-20.166, -0.61},{-20.760, -0.594},{-21.340, -0.58},{-21.906, -0.566},{-22.458, -0.552},{-22.996, -0.538},{-23.522, -0.526},{-24.035, -0.513},{-24.536, -0.501},{-25.026, -0.49},{-25.504, -0.478},{-25.973, -0.469},{-26.431, -0.458},{-26.880, -0.449},{-27.319, -0.439},{-27.750, -0.431},{-28.172, -0.422},{-28.587, -0.415},{-28.994, -0.407},{-29.394, -0.4},{-29.787, -0.393},{-30.174, -0.387},{-30.555, -0.381},{-30.930, -0.375},{-31.300, -0.37},{-31.665, -0.365},{-32.025, -0.36},{-32.381, -0.356},{-32.733, -0.352},{-33.082, -0.349},{-33.427, -0.345},{-33.768, -0.341},{-34.107, -0.339},{-34.444, -0.337},{-34.778, -0.334},{-35.111, -0.333},{-35.442, -0.331},{-35.771, -0.329},{-36.100, -0.329},{-36.428, -0.328},{-36.756, -0.328},{-37.083, -0.327},{-37.411, -0.328},{-37.740, -0.329},{-38.070, -0.33},{-38.402, -0.332},{-38.735, -0.333},{-39.071, -0.336},{-39.410, -0.339},{-39.753, -0.343},{-40.100, -0.347},{-40.452, -0.352},{-40.809, -0.357},{-41.174, -0.365},{-41.546, -0.372},{-41.928, -0.382},{-42.321, -0.393},{-42.727, -0.406},{-43.150, -0.423},{-43.594, -0.444},{-44.064, -0.47},{-44.574, -0.51},{-45.146, -0.572},{-45.869, -0.723}};
 
    static const int ArrayShoulderPitchTableOffset = -20;

    float ShoulderPitchTable (float _angle);
    float ShoulderRollTable (float _angle);
    float ElbowPitchTable (float _angle);
    dualJoint WristRollPitchTable (float _angle1, float _angle2);
    dualJoint WaistRollPitchTable (float _angle1, float _angle2);
    dualJoint NeckRollPitchTable (float _angle1, float _angle2);
    float LegTable (float _angle);
    void Angle2Stroke
    (std::vector<int16_t>& _strokes, const std::vector<double> _angles);

  }
}

#endif
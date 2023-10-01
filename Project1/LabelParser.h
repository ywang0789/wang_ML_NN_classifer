/**
 * @file LabelUtils.h
 * @brief This file contains utility functions for converting label integers to strings.
 *
 * This is the legend of each label value and its coresponding orientation
 * @author Yao Wang
 * @date 14 April 2023
 */
#pragma once
#include <string>

#define LABEL_FACE_UP 1 /**< The integer value representing the "face up" label. */
#define LABEL_FACE_DOWN 2 /**< The integer value representing the "face down" label. */
#define LABEL_PORTRAIT 3 /**< The integer value representing the "portrait" label. */
#define LABEL_PORTRAIT_UPSIDE_DOWN 4 /**< The integer value representing the "upside-down portrait" label. */
#define LABEL_LANDSCAPE_LEFT 5 /**< The integer value representing the "landscape left" label. */
#define LABEL_LANDSCAPE_RIGHT 6 /**< The integer value representing the "landscape right" label. */

using namespace std;

/**
 * @brief Converts a label integer to a string.
 *
 * @param label The label integer to convert.
 * @return The corresponding string representation of the label.
 */
string getStringFromLabel(int label);
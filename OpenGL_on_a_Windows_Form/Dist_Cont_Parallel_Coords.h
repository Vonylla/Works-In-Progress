////////////////////////////////////////////////////////////////////////////////////////////////////
// <author>Mahlet Saketa</author>
// <editor>Allyn Vo</editor>
// <summary>Declares the distance container parallel coordinates class</summary>
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "ClassData.h"
#include "FileHandling.h"

#pragma once

////////////////////////////////////////////////////////////////////////////////////////////////////
/// <summary>	A distance container parallel coordinates. </summary>
///
// <author>Mahlet Saketa</author>
// <editor>Allyn Vo</editor>
////////////////////////////////////////////////////////////////////////////////////////////////////

class Dist_Cont_Parallel_Coords
{
public:
	/// <summary>	The data. </summary>
	/// <summary>	The data. </summary>
	ClassData data;
	/// <summary>	The new file. </summary>
	FileHandling newFile;
	/// <summary>	The xdatatemp. </summary>
	std::vector<float> xdatatemp;
	/// <summary>	The ydatatemp. </summary>
	std::vector<float> ydatatemp;

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Initializes a new instance of the Dist_Cont_Parallel_Coords class. </summary>
	///
	// <author>Mahlet Saketa</author>
	// <editor>Allyn Vo</editor>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	Dist_Cont_Parallel_Coords();

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Clears the fields. </summary>
	///
	// <author>Mahlet Saketa</author>
	// <editor>Allyn Vo</editor>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	void clearFields();

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Normalize data. </summary>
	///
	// <author>Mahlet Saketa</author>
	// <editor>Allyn Vo</editor>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	void normalizeData();

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Sort distances. </summary>
	///
	// <author>Mahlet Saketa</author>
	// <editor>Allyn Vo</editor>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	void sortDistances();

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Draw data. </summary>
	///
	// <author>Mahlet Saketa</author>
	// <editor>Allyn Vo</editor>
	///
	/// <param name="x1">   	The first x value. </param>
	/// <param name="y1">   	The first y value. </param>
	/// <param name="index">	Zero-based index of the. </param>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	void drawData(float x1, float y1, int index);

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Fill graph locations. </summary>
	///
	// <author>Mahlet Saketa</author>
	// <editor>Allyn Vo</editor>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	void fillGraphLocations();

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Draw graph. </summary>
	///
	// <author>Mahlet Saketa</author>
	// <editor>Allyn Vo</editor>
	///
	/// <param name="x">	The x coordinate. </param>
	/// <param name="y">	The y coordinate. </param>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	void drawGraph(float x, float y);

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Displays this object. </summary>
	///
	// <author>Mahlet Saketa</author>
	// <editor>Allyn Vo</editor>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	void display();
	void sortGraph(ClassData& data);
};


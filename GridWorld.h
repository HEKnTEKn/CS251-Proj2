
#include "GWInterface.h"
#include <vector>
#include <iostream>

using std::vector;


class GridWorld : public GWInterface
{
private:
	/*
	 * private stuff goes here!
	 * typedefs
	 * data members
	 * private helper functions
	 * etc.
	 */

	class person
	{
		int ID;
	};


	class district
	{
	public:
		int districtID;
		vector<person> population;

	};


	int numRows;
	int numColumns;

	vector<int> decommissionedIDs;

public:
	//your constructor code here!
	GridWorld(unsigned nrows, unsigned ncols)
	{
		numRows = nrows;
		numColumns = ncols;
	}

	//your destructor code here.
	~GridWorld()
	{

	}

	bool birth(int row, int col, int &id)
	{
		return false;
	}

	bool death(int personID)
	{

		return false;
	}

	bool whereis(int id, int &row, int &col) const
	{
		return false;
	}

	bool move(int id, int targetRow, int targetCol)
	{
		return false;
	}

	std::vector<int> *members(int row, int col) const
	{

		return nullptr;
	}

	int population() const
	{
		return 0;
	}

	int population(int row, int col) const
	{
		return 0;
	}

	int num_rows() const
	{
		return numRows;
	}

	int num_cols() const
	{
		return numColumns;
	}

};

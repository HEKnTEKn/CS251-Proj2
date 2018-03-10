
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
	private:
		int ID;
	};


	class district
	{
	private:
		int row;
		int column;

		vector<person> people;

	};

	vector<vector<district>> districts;     //2d vector of districts

	vector<int> decommissionedIDs;

	int numRows;
	int numColumns;

	int totalPopulation;

public:
	//your constructor code here!
	GridWorld(unsigned nrows, unsigned ncols)
	{
		districts.resize(ncols, vector<district>(nrows));

		numRows = nrows;
		numColumns = ncols;

		totalPopulation = 0;
	}

	//your destructor code here.
	~GridWorld()
	{
		districts.clear();
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

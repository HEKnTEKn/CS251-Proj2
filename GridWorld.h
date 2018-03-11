
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


	class world
	{
	public:
		int ID;
		int row;
		int column;

		world(int newRow, int newColumn, int newID)
		{
			ID = newID;
			row = newRow;
			column = newColumn;
		}
	};


	class district
	{
	public:
		int row;
		int column;

		vector<int> people;

		int population;
	};

	vector<vector<district>> districts;     //2d vector of districts

	vector<world> popRegister;

	vector<int> decommissionedIDs;

	int numRows;
	int numColumns;
	int totalPopulation;

public:
	//your constructor code here!
	GridWorld(unsigned nrows, unsigned ncols)
	{
		districts.resize(nrows, vector<district>(ncols));

		numRows = nrows;
		numColumns = ncols;

		totalPopulation = 0;
	}

	//your destructor code here.
	~GridWorld()
	{
		districts.clear();

		numRows = 0;
		numColumns = 0;

		totalPopulation = 0;
	}

	bool birth(int row, int col, int &id)
	{
		static int latestID = 1;

		if ((numRows < row || row >= 0) && (numColumns < col || col >= 0))
		{
			if (!decommissionedIDs.empty())
			{
				districts[row][col].people.push_back(decommissionedIDs[0]);

				popRegister.emplace_back(row,col,decommissionedIDs[0]);

				decommissionedIDs.erase(decommissionedIDs.begin());

			}
			else
			{
				districts[row][col].people.push_back(latestID);

				popRegister.emplace_back(row,col,latestID);

				id = ++latestID;
			}


			districts[row][col].population++;
			++totalPopulation;


			return true;
			return true;
		}
		else
		{
			fprintf(stderr, "ERROR: ROWS OR COLUMNS ENTERED ARE NOT VALID INPUTS.");
			return false;
		}
	}

	bool death(int personID)
	{



		//else
		//{
		//	fprintf(stderr,"ERROR: ID NOT FOUND");
			return false;
		//}
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
		return totalPopulation;
	}

	int population(int row, int col) const
	{
		return districts[row][col].population;
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

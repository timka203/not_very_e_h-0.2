#include "flat.h"
#include"room.h"


flat::flat()
{
	this->r = nullptr;
	this->cost = 0;
	this->rooms = 0;
}

flat::flat(int r, int cost)
{
	this->r = new room[r];
	for (int i = 0; i < r; i++)
	{
		this->r[i].setName();
		this->r[i].setName();
	}
	this->cost = cost;
	this->rooms = r;
}

flat::flat(const flat & obj)
{
	this->r = new room[obj.rooms];
	this->rooms = obj.rooms;
	for (int i = 0; i < rooms; i++)
	{
		this->r[i] = obj.r[i];
	}
	this->cost = obj.cost;
}

int flat::sumOfVolume()
{
	int sum = 0;
	for (int i = 0; i < rooms; i++)
	{
		sum += r[i].getVolume();
	}
	return sum;
}

void flat::setFlat()
{
	cout << "How much rooms?" << endl;
	int r;
	cin >> r;
	this->r = new room[r];

	for (int i = 0; i < r; i++)
	{
		this->r[i].setName();
		this->r[i].setVolume();
	}
	int cost;
	cout << "How much it will cost?" << endl;
	cin >> cost;
	this->cost = cost;
	this->rooms = r;

}

bool flat::isNumRoomsSame(const flat & obj)
{
	if (this->rooms == obj.rooms)
		return true;
	return false;
}

bool flat::isVolumeSame( flat & obj)
{
	if (this->sumOfVolume() == obj.sumOfVolume())
	{
		return true;
	}
	return false;
}

bool flat::isCostSame(const flat & obj)
{
	if (this->cost == obj.cost)
		return true;
	return false;
}

void flat::copy(const flat & obj)
{
	this->r = new room[obj.rooms];
	this->rooms = obj.rooms;
	for (int i = 0; i < rooms; i++)
	{
		this->r[i] = obj.r[i];
	}
	this->cost = obj.cost;
	
}
void flat::info()
{
	cout << "cost is" << " " << cost << endl << "nuber of room:" << rooms << "volume is" << " " << sumOfVolume() << endl;
	for (size_t i = 0; i < rooms; i++)
	{
		r[i].info();
	}
}
int  flat::getVolume()
{
	return this->sumOfVolume();
}
int flat::getCost()
{
	return this->cost;
}
int flat::getNumOfRooms()
{
	return this->rooms;
}
void flat::setCost(int cost)
{
	this->cost = cost;
}
void flat::getNumOfRooms(int rooms)
{
	this->rooms = rooms;
}
void flat::setRoom(int pos)
{
	r[pos].setName();
	r[pos].setVolume();
}
flat::~flat()
{
	delete[]r;
	cost = 0;
	rooms = 0;
}
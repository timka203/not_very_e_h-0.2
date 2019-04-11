
#include"room.h"
class flat
{
	room *r;
	int cost;
	int rooms;
public:
	flat();
	flat(int r, int cost);
	flat(const flat &obj);
	int sumOfVolume();
	void setFlat();
	bool isNumRoomsSame(const flat&obj);
	bool isVolumeSame( flat&obj);
	bool isCostSame(const flat&obj);
	void copy(const flat &obj);
	void info();
	int getVolume();
	int getCost();
	int getNumOfRooms();
	void setVolume(int sum);
	void setCost(int cost );
	void getNumOfRooms(int rooms);
	void setRoom(int pos);
	~flat();
};

#ifndef	_CAR_H_
#define _CAR_H_
class Car
{
private:
	double m_speed;
	double m_migration;
public:
	Car();
	~Car();
	void setSpeed(double speed);
	double getSpeed();

	double getMigration();

	void drive(double hour);
};
#endif


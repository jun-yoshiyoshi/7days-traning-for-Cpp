#ifndef _RAT_H_
#define _RAT_H_

class Rat {

public:
	Rat();
	~Rat();

	static void shownum();

	void squeak();

private:
	int m_id;
	static int s_count;

};

#endif
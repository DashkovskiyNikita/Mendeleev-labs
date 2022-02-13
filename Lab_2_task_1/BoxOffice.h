#pragma once
class BoxOffice {
private:
	int car_count;
	float sum;
public:
	BoxOffice();
	void print_info();
	void payment();
	void free_ride();
};
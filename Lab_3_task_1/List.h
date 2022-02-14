#pragma once
class List {
protected:
	int height, width;
	int thickness;
	int density;
public:
	List(int _height,int _width);
	virtual float square();
	virtual float weight();
	virtual void print_info();
};

#include"List.h"

class TriangleList : public List {
public:
	TriangleList(int _height, int _width);
	float square() override;
};

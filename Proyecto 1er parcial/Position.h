#pragma once
class Position
{
public:
	int x;
	int y;
	int i;
	char Option;
	int retorno_;

	void movex();
	void movey();
	Position();

	void setOption();
	int evaluarOption();
};


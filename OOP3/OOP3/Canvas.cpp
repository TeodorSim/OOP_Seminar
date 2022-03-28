#include <iostream>
#include "Canvas.h"
/*
Canvas::Canvas(int width, int height)
{
	slope = 0;
	for (int i = 0;i < x;i++)
		for (int j = 0;j < y;j++)
			shape[i][j] = 32;
}

void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
	
}

void Canvas::FillCircle(int x, int y, int ray, char ch)
{
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = top; i <= bottom; i++) {
		shape[i][left] = ch;
		shape[i][right] = ch;
	}
	for (int j = left; j <= right; j++) {
		shape[j][top] = ch;
		shape[j][bottom] = ch;
	}
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = top; i <= bottom; i++)
		for (int j = left; j <= right; j++)
			shape[i][j] = ch;
}

void Canvas::SetPoint(int x, int y, char ch)
{
	shape[x][y] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
	slope = (x2 - x1) * (y2 - y1);

}

void Canvas::Print()
{
	for (int i = 0;i <= 32;i++) {
		for (int j = 0;j <= 32;j++)
			if (shape[i][j] != 32)
				std::cout << shape[i][j];
			else
				std::cout << ' ';
	}
}

void Canvas::Clear()
{
	for (int i = 0;i <= 32;i++)
		for (int j = 0;j <= 32;j++)
			shape[i][j] = 32;
}
*/
#include <iostream>
#include "polygon.h"
#include "IsoTriangle.h"
#include "rhombus.h"
#include "rectangle.h"

int main() {

	//RECTANGLE--------------------------------------------------------

	// Rectangle default constructor test
	Rectangle recta;

	//Rectangle constructor test
	Rectangle rectb(2, 3);

	//Rectangle constructor test input negative
	Rectangle rectd(-2, -1);

	//Rectangle copy constructor test
	Rectangle rectc(rectb);

	//Rectangle SetLength test
	rectb.SetLength(4);

	//Rectangle SetLength test negative input
	rectb.SetLength(-4);

	//Rectangle SetWidth test
	rectb.SetWidth(5);

	//Rectangle SetWidth test negative input
	rectb.SetWidth(-5);

	//Rectangle SetDim test
	rectb.SetDim(6, 7);

	//Rectangle SetDim test negative input
	rectb.SetDim(-6, -7);

	//Rectangle GetLength test
	cout << endl;
	cout << "The Length is " << rectb.GetLength();
	cout << endl;

	//Rectangle GetWidth test
	cout << endl;
	cout << "The Width is " << rectb.GetWidth();
	cout << endl;

	//Rectangle GetArea test
	cout << endl;
	cout << "The area is " << rectb.GetArea();
	cout << endl;

	//Rectangle GetPerimeter test
	cout << endl;
	cout << "The perimeter is " << rectb.GetPerimeter();
	cout << endl;


	//Rectangle GetDim test
	float Length, Width;
	rectb.GetDim(Length, Width);
	cout << endl;
	cout << "The Length and Width are " << Length << " and " << Width;
	cout << endl;

	//Rectangle = operator test
	rectb = rectc;

	//Rectangle ==operator test
	if (rectb == rectc) {
		cout << endl << "Ok" << endl;
	}
	if (rectb == recta) {
		cout << endl << "Not ok" << endl;
	}

	//Rectangle Dump test
	rectb.Dump();

	//Rectangle Draw test
	rectb.Draw();

	//Rectangle destructor test
	rectb.~Rectangle();

	

	//RHOMBUS------------------------------------------------------------

	// Rhombus default constructor test
	Rhombus Rha;

	//Rhombus constructor test
	Rhombus Rhb(2, 3);

	//Rhombus constructor test input negative
	Rhombus Rhd(-2, -1);

	//Rhombus copy constructor test
	Rhombus Rhc(Rhb);

	//Rhombus SetDiagH test
	Rhb.SetDiagH(4);

	//Rhombus SetDiagH test negative input
	Rhb.SetDiagH(-4);

	//Rhombus SetDiagV test
	Rhb.SetDiagV(5);

	//Rhombus SetDiagV test negative input
	Rhb.SetDiagV(-5);

	//Rhombus SetDim test
	Rhb.SetDim(6, 7);

	//Rhombus SetDim test negative input
	Rhb.SetDim(-6, -7);

	//Rhombus GetDiagH test
	cout << endl;
	cout << "The DiagH is " << Rhb.GetDiagH();
	cout << endl;

	//Rhombus GetDiagV test
	cout << endl;
	cout << "The DiagV is " << Rhb.GetDiagV();
	cout << endl;

	//Rhombus GetSide test
	cout << endl;
	cout << "The side is " << Rhb.GetSide();
	cout << endl;

	//Rhombus GetArea test
	cout << endl;
	cout << "The area is " << Rhb.GetArea();
	cout << endl;

	//Rhombus GetPerimeter test
	cout << endl;
	cout << "The perimeter is " << Rhb.GetPerimeter();
	cout << endl;


	//Rhombus GetDim test
	float DiagH, DiagV;
	Rhb.GetDim(DiagH, DiagV);
	cout << endl;
	cout << "The DiagH and DiagV are " << DiagH << " and " << DiagV;
	cout << endl;

	//Rhombus = operator test
	Rhb = Rhc;

	//Rhombus ==operator test
	if (Rhb == Rhc) {
		cout << endl << "Ok" << endl;
	}
	if (Rhb == Rha) {
		cout << endl << "Not ok" << endl;
	}

	//Rhombus Dump test
	Rhb.Dump();

	//Rhombus Draw test
	Rhb.Draw();

	//Rhombus destructor test
	Rhb.~Rhombus();

	

	//ISOTRIANGLE---------------------------------------------------------

	// IsoTriangle default constructor test
	IsoTriangle a;

	//IsoTriangle constructor test
	IsoTriangle b(2, 3);

	//IsoTriangle constructor test input negative
	IsoTriangle d(-2, -1);

	//IsoTriangle copy constructor test
	IsoTriangle c(b);

	//IsoTriangle SetBase test
	b.SetBase(4);

	//IsoTriangle SetBase test negative input
	b.SetBase(-4);

	//IsoTriangle SetHeight test
	b.SetHeight(5);

	//IsoTriangle SetHeight test negative input
	b.SetHeight(-5);

	//IsoTriangle SetDim test
	b.SetDim(6, 7);

	//IsoTriangle SetDim test negative input
	b.SetDim(-6, -7);

	//IsoTriangle GetBase test
	cout << endl;
	cout << "The base is " << b.GetBase();
	cout << endl;

	//IsoTriangle GetHeight test
	cout << endl;
	cout << "The height is " << b.GetHeight();
	cout << endl;

	//IsoTriangle GetSide test
	cout << endl;
	cout << "The side is " << b.GetSide();
	cout << endl;

	//IsoTriangle GetArea test
	cout << endl;
	cout << "The area is " << b.GetArea();
	cout << endl;

	//IsoTriangle GetPerimeter test
	cout << endl;
	cout << "The perimeter is " << b.GetPerimeter();
	cout << endl;


	//IsoTriangle GetDim test
	float base, height;
	b.GetDim(base, height);
	cout << endl;
	cout << "The base and height are " << base << " and " << height;
	cout << endl;

	//IsoTriangle = operator test
	b = c;

	//IsoTriangle ==operator test
	if (b == c) {
		cout << endl << "Ok" << endl;
	}
	if (b == a) {
		cout << endl << "Not ok" << endl;
	}

	//IsoTriangle Dump test
	b.Dump();

	//IsoTriangle Draw test
	b.Draw();

	//IsoTriangle destructor test
	b.~IsoTriangle();

	return 0;
}


